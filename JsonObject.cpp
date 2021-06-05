#include "JsonObject.hpp"
using namespace std;


JsonObject::JsonObject(string k,int pId){
    key=k;
    parentId=pId;
}
void JsonObject::prettyPrintJsonObj(const JsonObject &jObject){
    
    if(jObject.id!=0) {
        cout<<"\""<<jObject.id<<"\""<<" {}";
    }
        return;
}   