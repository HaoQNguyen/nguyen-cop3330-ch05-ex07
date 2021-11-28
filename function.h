#include <iostream>
#include <math.h>

using namespace std;

bool realRootCheck(int a, int b, int c)
{
    if (pow(b, 2) - 4 * a * c < 0)
        return false;
    else
        return true;
}

void solver(double* x1, double* x2, int a, int b, int c)
{
    *x1 = (-b + sqrt(pow(b, 2) - 4 * a *c)) / (2 * a);
    *x2 = (-b - sqrt(pow(b, 2) - 4 * a *c)) / (2 * a);
}

double residual(double x, int a, int b, int c)
{
    return a * pow(x, 2) + b * x + c;
}