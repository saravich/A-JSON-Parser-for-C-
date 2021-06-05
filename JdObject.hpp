#ifndef JSON_OBJECT_
#define JSON_OBJECT_
#include "common_includes.hpp"
#include "StringProperty.hpp"
#include "IntegerProperty.hpp"
#include "JsonArray.hpp"
#include "JsonBuilder.hpp"

class JsonObject{
    private:
        std::vector<StringProperty> stringProperties;
        std::vector<IntegerProperty> integerProperties;
        std::vector<JsonObject> jsonObjProperties;
        std::vector<JsonArray> jsonArrayProperties;
        int id;
        JsonObject* parentAddress;
        std::string key;
        std::vector<JsonObject*> parentedObjects;
        std::string content;

    public:
        JsonObject() {};
        JsonObject(std::string k,JsonObject* parentadrs);
        virtual void prettyPrintJsonObj(const JsonObject &jObject);
        friend class JsonBuilder;



};



#endif