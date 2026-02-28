/*
 * ZADATAK 24010420 - 24010420
 * Sa tastature se x sa tastature računa vrijednost funkcije y = f(x) zadane formulom
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010420.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
double x,y;
printf("x=");
scanf("%lf", &x);
if (x < -2 || x>5)
{
y=x*x;
}
if (x>=-2 && x < 1)
{
y=x/2+1;
}
if (x==1 || x==5)
{
y=5.0;
}
if (x>1 && x < 5)
{
y=1-x;
}
printf("y=%0.2lf",y);
return 0;
}