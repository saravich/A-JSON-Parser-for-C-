#pragma once
#include "common_includes.hpp"
#include "StringProperty.hpp"
#include "IntegerProperty.hpp"
#include "JsonArray.hpp"


class JsonObject{
    private:
        std::vector<StringProperty> stringProperties;
        std::vector<IntegerProperty> integerProperties;
        std::vector<JsonArray> jsonArrayProperties;
        std::vector<JsonObject> jsonObjProperties;
        
        std::vector<JsonObject*> parentedObjects;

        JsonObject* parentAddress;

        std::string key;
        int id;
        int parentId;
        std::string content;

    public:
        JsonObject() {};
        JsonObject(std::string k,int pId);
        virtual void prettyPrintJsonObj(const JsonObject &jObject);
        friend class JsonBuilder;



};

