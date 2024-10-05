#include <iostream>  
#include <string>  
#include <curl/curl.h>  
#include <json/json.h>  
  
using namespace std;  
  
int main() {  
    // 设置OpenWeatherMap API的密钥和城市ID  
    const string apiKey = "YOUR_API_KEY";  
    const string cityID = "123456789";  
  
    // 构建API请求URL  
    string url = "http://api.openweathermap.org/data/2.5/weather?id=" + cityID + "&appid=" + apiKey;  
  
    // 初始化CURL库  
    CURL* curl = curl_easy_init();  
    if (curl) {  
        // 设置CURL选项，包括请求URL和回调函数  
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());  
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writeData);  
  
        // 执行CURL请求并获取响应数据  
        string response;  
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);  
        curl_easy_perform(curl);  
  
        // 释放CURL资源  
        curl_easy_cleanup(curl);  
  
        // 解析JSON响应数据并输出天气信息  
        Json::Value root;  
        Json::CharReaderBuilder builder;  
        Json::CharReader* reader = builder.newCharReader();  
        string errors;  
        bool success = reader->parse(response.c_str(), response.c_str() + response.size(), &root, &errors);  
        delete reader;  
        if (success) {  
            double temp = root["main"]["temp"].asDouble();  
            double humidity = root["main"]["humidity"].asDouble();  
            string weather = root["weather"][0]["description"].asString();  
            cout << "Temperature: " << temp << "°C" << endl;  
            cout << "Humidity: " << humidity << "%" << endl;  
            cout << "Weather: " << weather << endl;  
        } else {  
            cout << "Error: " << errors << endl;  
        }  
    } else {  
        cout << "Failed to initialize CURL library." << endl;  
    }  
  
    return 0;  
}  
  
size_t writeData(void* ptr, size_t size, size_t nmemb, string* response) {  
    response->append((char*)ptr, size * nmemb);  
    return size * nmemb;  
}
