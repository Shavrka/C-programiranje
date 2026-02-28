/*
 * ZADATAK 06411128 - 06411128
 * Napisati program koji izračunava i ispisuje rezultate:1 + 7 MOD 3 * (2 + 7) DIV 2(1 + 7) MOD 3 * 2 + 7 DIV 2
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06411128.htm
 */

#include <stdio.h>
#include <math.h>

int main()
{
int x,y;
x=1+(7%3)*(2 + 7)/2;
y=(1+7)%(3)*2+7/2;
printf("%d\n",x);
printf("%d\n",y);
return 0;
}