#ifndef __JSON_BUILDER_H__
#define __JSON_BUILDER_H__

#include "common_includes.hpp"
#include "JsonObject.hpp"

class JsonBuilder
{
    public:
        JsonBuilder() {};
        void addStringToObject(int parentId, std::string key, std::string value);
        void addIntegerToObject(int parentId, std::string key, int value);
        int addContainerToObject(int parentId, std::string key, std::string type);
        void addStringToArray(int parentId, std::string value);
        void addIntegerToArray(int parentId, int value);
        int addContainerToArray(int parentId, std::string type);
        void print(int id);
        friend class JsonObject;
    private:
        void addStringToObjectDirectAccess(JsonObject &jObject,std::string key, std::string value);
        JsonObject* findJsonObjectByParentId(int parentId);
        JsonObject parentJsonObject;

};

#endif 