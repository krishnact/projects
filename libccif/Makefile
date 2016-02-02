CPP_FILES := $(wildcard src/bp/*.cpp)  $(wildcard src/hc/*.cpp) $(wildcard src/main/*.cpp)   
OBJ_FILES := $(patsubst %.cpp,%.o,$(CPP_FILES))
LD_FLAGS_STATIC := -l binmsg -L/cygdrive/c/workspaces/work/2014-CPP/dist/lib/static
LD_FLAGS_DYNAMIC := -l binmsg -L/cygdrive/c/workspaces/work/2014-CPP/dist/lib/dynamic
CC_FLAGS := -O3 -g3 -Wall -c -fmessage-length=0  -I/cygdrive/c/tools/boost_1_51_0 -I./src/main -I./src/hc -I./src/bp -I/cygdrive/c/workspaces/work/2014-CPP/dist/inc


lib: libccif-1.0.a
dll: libccif-1.0.dll 

libccif-1.0.dll: $(OBJ_FILES)
	g++ -shared $(LD_FLAGS_DYNAMIC) -o $@ $^

libccif-1.0.a: $(OBJ_FILES)
	ar -r  -o $@ $^

$(OBJ_FILES) : %.o : %.cpp
	g++ $(CC_FLAGS) -c -o $@ $<

all: lib	
clean:
	rm -f $(OBJ_FILES) libccif-1.0.a libccif-1.0.dll

dist: lib  
	cp libccif-1.0.a   ../dist/lib/static
	#cp libccif-1.0.dll ../dist/lib/dynamic
	cp src/bp/*.h     ../dist/inc
	cp src/hc/*.h     ../dist/inc
	
freeup:
	rm -f $(OBJ_FILES)
	
indent: $(CPP_FILES)
	find src/bp -name "*.cpp" -exec astyle {} \;
	find src/bp -name "*.h" -exec astyle {} \;
	find src/bp -name "*.orig" -exec rm {} \;

indentOnce:	$(CPP_FILES)
	find src/hc -name "*.cpp" -exec astyle {} \;
	find src/hc -name "*.h" -exec astyle {} \;
	find src/hc -name "*.orig" -exec rm {} \;
	