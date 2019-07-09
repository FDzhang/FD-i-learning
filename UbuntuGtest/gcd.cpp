//!gcd.cpp
#include "gcd.h"
int Gcd(int a, int b)
{
    return 0 == b ? a : Gcd(b, a % b); 
}
