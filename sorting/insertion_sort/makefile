# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation

CXX = clang++
CXXFLAGS = -Wall -g -std=c++11

# ****************************************************
# Targets needed to bring the executable up to date

main: main.o print_vector.o insertion_sort.o
	$(CXX) $(CXXFLAGS) -o main main.o print_vector.o insertion_sort.o

main.o: main.cpp insertion_sort.h
	$(CXX) $(CXXFLAGS) -c main.cpp 

insertion_sort.o: insertion_sort.cpp insertion_sort.h
	$(CXX) $(CXXFLAGS) -c insertion_sort.cpp 

print_vector.o: print_vector.cpp insertion_sort.h
	$(CXX) $(CXXFLAGS) -c print_vector.cpp 