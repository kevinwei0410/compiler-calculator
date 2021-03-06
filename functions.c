#include "functions.h"

int modulo(double x, double y) { return (int)x % (int)y; }

double factorial(double n) {
  double x;
  double f = 1;

  for (x = 1; x <= n; x++) {
    f *= x;
  }
  return f;
}

double exp(double x)
{
    int n = 10;
    int i = n - 1;
    double sum = 1.0;
    for (i = n-1; i > 0; --i)
        sum = 1.0 + x * sum / i;
    return sum;
}
// Convert celsius to fahrenheit
double c_to_f(double c){ return (c * 1.8) + 32; }
// Convert fahrenheit to celsius
double f_to_c(double f){ return (f - 32)/1.8; }