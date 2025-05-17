/*
write a program which accept temperature in fahrenheit and convert it into celsius()
(i celcius = (Fahrenheit - 32)*(5/9))

INput: 10
Oputput: -12.2222         (10 - 32) * (5/9)

Input: 34
Output: 1.11111           (34 - 32) * (5/9)

*/

#include <stdio.h>

double FhToCs(float fTemp)
{
    double dCelsi = 1.0;
    dCelsi = (fTemp - 32) * ((float)5 /(float) 9);
    return dCelsi;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temperature in fahrenheit : ");
    scanf("%f", &fValue);

    dRet = FhToCs(fValue);

    printf("Temperature in celsius is %.4f", dRet);
    return 0;
}