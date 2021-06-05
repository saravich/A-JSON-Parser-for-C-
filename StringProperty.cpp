#include "StringProperty.hpp"
using namespace std;

StringProperty::StringProperty(string k,string val,int parentId):JsonObject(k,parentId){
    value=val;
}