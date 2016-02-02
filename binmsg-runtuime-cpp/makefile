CPP_FILES := $(wildcard src/src/*.cpp)  
OBJ_FILES := $(patsubst %.cpp,%.o,$(CPP_FILES))
LD_FLAGS := 
CC_FLAGS := -O3 -g3 -Wall -c -fmessage-length=0  -I/cygdrive/c/tools/boost_1_51_0 -I./src/main -I./src/hc -I./src/inc


lib: libbinmsg.a
dll: libbinmsg.dll 

libbinmsg.dll: $(OBJ_FILES)
	g++ -shared -o $@ $^

libbinmsg.a: $(OBJ_FILES)
	ar -r  $(LD_FLAGS) -o $@ $^

$(OBJ_FILES) : %.o : %.cpp
	g++ $(CC_FLAGS) -c -o $@ $<
	
clean:
	rm -f $(OBJ_FILES) libbinmsg.a libbinmsg.dll

dist: lib dll 
	cp libbinmsg.a   ../dist/lib/static
	cp libbinmsg.dll ../dist/lib/dynamic
	cp src/inc/*     ../dist/inc
	
freeup:
	rm -f $(OBJ_FILES)