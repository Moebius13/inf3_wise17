.PHONY: all

all: src/*.cpp
	  g++ -g -w -fpermissive -o program src/*.cpp
