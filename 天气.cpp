#include <iostream>  
#include <string>  
#include <curl/curl.h>  
#include <json/json.h>  
  
using namespace std;  
  
int main() {  
    // ����OpenWeatherMap API����Կ�ͳ���ID  
    const string apiKey = "YOUR_API_KEY";  
    const string cityID = "123456789";  
  
    // ����API����URL  
    string url = "http://api.openweathermap.org/data/2.5/weather?id=" + cityID + "&appid=" + apiKey;  
  
    // ��ʼ��CURL��  
    CURL* curl = curl_easy_init();  
    if (curl) {  
        // ����CURLѡ���������URL�ͻص�����  
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());  
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writeData);  
  
        // ִ��CURL���󲢻�ȡ��Ӧ����  
        string response;  
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);  
        curl_easy_perform(curl);  
  
        // �ͷ�CURL��Դ  
        curl_easy_cleanup(curl);  
  
        // ����JSON��Ӧ���ݲ����������Ϣ  
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
            cout << "Temperature: " << temp << "��C" << endl;  
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
