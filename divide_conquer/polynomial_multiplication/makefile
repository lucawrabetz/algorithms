# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation

CXX = clang++
CXXFLAGS = -Wall -g -std=c++11

# ****************************************************
# Targets needed to bring the executable up to date

main: main.o array.o
	$(CXX) $(CXXFLAGS) -o main main.o array.o

main.o: main.cpp array.h
	$(CXX) $(CXXFLAGS) -c main.cpp

array.o: array.cpp array.h
	$(CXX) $(CXXFLAGS) -c array.cpp

