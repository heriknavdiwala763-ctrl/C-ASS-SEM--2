#include <stdio.h>
#include <math.h>
float roundtwodecimal(float x)
{
    return round(x * 100) / 100;
}

int main()
{
    float n=123.4567;
    float result;
    result=roundtwodecimal(n);
    printf("Rounded number: %.2f", result);
    return 0;
}