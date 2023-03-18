#include <iostream>
#include <string>
#include <vector>
#include <map>

struct CityRecords{
    std::string name;
    uint64_t population;
    int area;
};

int main(){
    std::vector<CityRecords> cities;
    std::map<std::string, CityRecords> city_map;

    city_map["London"] = CityRecords{"London", 8'787'892, 1572};
    city_map["New York"] = CityRecords{"New York", 8'622'698, 783};
    city_map["Sydney"] = CityRecords{"Sydney", 5'230'000, 1214};
    city_map["Tokyo"] = CityRecords{"Tokyo", 13'929'286, 2194};

    CityRecords& sydney_record = city_map["Sydney"];


    std::cout << sydney_record.name << " has a population of " << sydney_record.population << std::endl;
    

}


