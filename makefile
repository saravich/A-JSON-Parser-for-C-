CC= g++ -std=c++11

all: main.out

main.out: main.o JsonBuilder.o StringProperty.o IntegerProperty.o JsonArray.o JsonObject.o
	${CC} main.o JsonBuilder.o StringProperty.o IntegerProperty.o JsonArray.o JsonObject.o -o ./main.out

JsonBuilder.o: JsonBuilder.cpp JsonBuilder.hpp JsonObject.hpp IntegerProperty.hpp StringProperty.hpp JsonArray.hpp common_includes.hpp
	${CC} -c JsonBuilder.cpp

JsonObject.o: JsonObject.cpp JsonObject.hpp JsonBuilder.hpp IntegerProperty.hpp StringProperty.hpp JsonArray.hpp common_includes.hpp
	${CC} -c JsonObject.cpp

JsonArray.o: JsonArray.cpp  JsonArray.hpp JsonBuilder.hpp JsonObject.hpp IntegerProperty.hpp StringProperty.hpp common_includes.hpp
	${CC} -c JsonArray.cpp

StringProperty.o: StringProperty.cpp StringProperty.hpp JsonBuilder.hpp JsonObject.hpp IntegerProperty.hpp JsonArray.hpp common_includes.hpp
	${CC} -c StringProperty.cpp

IntegerProperty.o: IntegerProperty.cpp IntegerProperty.hpp StringProperty.hpp JsonBuilder.hpp JsonObject.hpp JsonArray.hpp common_includes.hpp
	${CC} -c IntegerProperty.cpp

.PHONY: clean
clean:
	rm -r *.o