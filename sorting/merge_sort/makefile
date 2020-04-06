# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation

CXX = clang++
CXXFLAGS = -Wall -g -std=c++11

# ****************************************************
# Targets needed to bring the executable up to date

main: main.o merge_sort.o merge.o vector.o
	$(CXX) $(CXXFLAGS) -o main main.o merge_sort.o merge.o vector.o

main.o: merge.h vector.h
	$(CXX) $(CXXFLAGS) -c main.cpp 

merge_sort.o: merge.h vector.h merge_sort.cpp
	$(CXX) $(CXXFLAGS) -c merge_sort.cpp

merge.o: merge.h vector.h merge.cpp
	$(CXX) $(CXXFLAGS) -c merge.cpp

vector.o: vector.h vector.cpp
	$(CXX) $(CXXFLAGS) -c vector.cpp