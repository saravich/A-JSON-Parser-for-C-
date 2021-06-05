#ifndef _INTEGERPROPERTY_HPP_
#define _INTEGERPROPERTY_HPP_
#include "common_includes.hpp"
#include "JsonObject.hpp"

class IntegerProperty:public JsonObject{
    private:   
        int value;
    public:
    IntegerProperty(){};
        IntegerProperty(std::string k,std::string val,int parentId);
};


#endif


