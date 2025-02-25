#include <iostream>
#include <set>
#include <random>
#include "point.h"


static std::random_device rd;
static std::mt19937 rng{ rd() };

int pow(int base, int exponent);
int mySqrt(int x);
int roll_dice(int min, int max);