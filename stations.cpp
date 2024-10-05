#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <windows.h>
#include <mmsystem.h>

void play(const std::string& filename = "D:LYXSYXXtrain\\到站提示.wav") {
    PlaySound(TEXT(filename.c_str()), NULL, SND_FILENAME | SND_ASYNC);
}

class BusStation {
public:
    BusStation(const std::string& station_name, const std::string& station_english) : station_name(station_name), station_english(station_english) {}

    void announce() {
        std::cout << "下一站：" << station_name << ".The next stop is " << station_english << std::endl;
    }

    void arrived() {
        play();
        std::cout << "列车即将进站" << station_name << ",the train is arriving at " << station_english << std::endl;
        std::cout << "列车已停靠在" << station_name << ",platform " << rand() % 25 + 1 << ",the train has arrived " << station_english << std::endl;
    }

private:
    std::string station_name;
    std::string station_english;
};

class BusRoute {
public:
    BusRoute(const std::string& route_name, const std::vector<BusStation>& stations, const std::string& english_station, const std::string& chinese_station) : route_name(route_name), stations(stations), english_station(english_station), chinese_station(chinese_station) {}

    void next_station() {
        if (current_station_index < stations.size() - 1) {
            stations[current_station_index].announce();
            Sleep(4500);
            stations[current_station_index].arrived();
            Sleep(1000);
            current_station_index++;
        } else {
            play();
            std::cout << "已经到达终点站:" << chinese_station << "，请下车，We arrived the last stop " << english_station << std::endl;
        }
    }

    void start_route() {
        std::cout << "欢迎乘坐由罗源县实验小学客运段直骋的" << route_name << "动车组列车，本次列车终点站：" << chinese_station << std::endl;
        play();
        std::cout << "欢迎乘坐由罗源县实验小学客运段直骋的" << route_name << "动车组列车，本次列车终点站：" << chinese_station << std::endl;
        next_station();
        next_station();
    }

private:
    std::string route_name;
    std::vector<BusStation> stations;
    std::string english_station;
    std::string chinese_station;
    int current_station_index = 0;
};

int main() {
    srand(time(0));
    BusStation station1("6楼", "sixth floor");
    BusStation station2("操场", "playground");
    BusStation station3("校门口", "the gate");
    std::vector<BusStation> stations = {station1, station2, station3};
    std::string route_name = "X车";
    BusRoute route1(route_name, stations, "the gate", "校门口");
    route1.start_route();
    route1.next_station();
    route1.next_station();
    return 0;
}