#pragma once

#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>

void print_vector(std::vector<int> v);
std::vector<int> slice(const std::vector<int>& v, int start=0, int end=-1);