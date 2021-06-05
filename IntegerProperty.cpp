#include "IntegerProperty.hpp"
using namespace std;

IntegerProperty::IntegerProperty(std::string k,int val,JsonObject* parentadrs):JsonObject(*parentadrs){
    key=k;
    value=val;
}