#################
# Variable
#################

CXX = g++
CXXFLAGS = -Wall -std=c++14

################
# Targets
################

geometry.o: src/utilities/geometry.cpp src/utilities/geometry.hpp
	$(CXX) $(CXXFLAGS) -c src/utilities/geometry.cpp

unit_test: geometry_test
	rm *.test

geometry_test: geometry.o
	$(CXX) -o geometry.test test/geometry_test.cpp geometry.o
	./geometry.test
