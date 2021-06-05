using namespace std;
#include "JsonArray.hpp"

JsonArray::JsonArray(string k,JsonObject* parentAdrs):JsonObject(*parentAdrs){
        key=k;
}