#ifndef _STRINGPROPERTY_HPP_
#define _STRINGPROPERTY_HPP_
#include "common_includes.hpp"
#include "JsonObject.hpp"

class StringProperty:public JsonObject{
    private:   
        std::string value;
    public:
        StringProperty() {};
        StringProperty(std::string k,std::string val,int parentId);
        
};


#endif