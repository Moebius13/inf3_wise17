.PHONY all

all: src/*.cpp
	  g++ -w -fpermissive -o program src/*.cpp
