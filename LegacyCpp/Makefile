#################
# Variables
#################

CXX = g++
CXXFLAGS = -Wall -std=c++14

define TESTS
geometry_test \
racetrack_test
endef

################
# Targets
################

racetrack.o: src/racetrack.cpp src/racetrack.hpp
	$(CXX) $(CXXFLAGS) -c src/racetrack.hpp

geometry.o: src/utilities/geometry.cpp src/utilities/geometry.hpp
	$(CXX) $(CXXFLAGS) -c src/utilities/geometry.cpp

unit_test: $(TESTS)
	rm *.test

geometry_test: geometry.o
	$(CXX) -o geometry.test test/geometry_test.cpp geometry.o
	./geometry.test
racetrack_test:
	echo "race track"
