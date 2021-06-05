#include "JsonBuilder.hpp"
using namespace std;

void JsonBuilder::addStringToObject(int parentId,string key,string value){
    JsonObject* targetParentPtr=findJsonObjectByParentId(parentId);
    // StringProperty *newString=new ;
    targetParentPtr->stringProperties.push_back(StringProperty(key,value,targetParentPtr));
}
// // void  JsonBuilder::addStringToObjectDirectAccess(JsonObject &jObject,string key,string value){
// //     jObject.objStringProperties.push_back(StringProperty(key,value));
// // }
JsonObject* JsonBuilder::findJsonObjectByParentId(int parentId){
    if(parentId==0) return &parentJsonObject;
    for(int i=0;i<parentJsonObject.parentedObjects.size();i++)
        if(parentJsonObject.parentedObjects[i]->id==parentId)
            return parentJsonObject.parentedObjects[i];
    cout<<"parent id not found";
    return NULL;
    
}
