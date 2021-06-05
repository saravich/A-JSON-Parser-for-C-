#ifndef _JSONARRAY_HPP_
#define _JSONARRAY_HPP_
#include "common_includes.hpp"
#include "JsonObject.hpp"

class JsonArray:public JsonObject{
    private:
        std::vector<std::string> stringsIncluded;    
        std::vector<int> intsIncluded;
        std::vector<JsonObject> objectsIncluded;
        std::vector<JsonArray> arraysIncluded;
        std::string key;
        JsonObject* parentAddress;
        int id;
    public:
        JsonArray(){};
        JsonArray(std::string k,JsonObject* parentAdrs);
};

#endif