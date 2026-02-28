/*
 * ZADATAK 53 - 07211071
 * Za učitane a i b izračunati z prema formuli:
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211071.htm
 */

#include <stdio.h>

int main ()
{
double a,b,min,min2,z;
printf("1. broj: ");     // ulaz
scanf("%lf", &a);
printf("2. broj: ");
scanf("%lf", &b);

min=a;
if (a > b)
min=b;
min2=(a*a);
if ((a*a) > (b*b))
min2=(b*b);
if (b >= 0)
z=2*min;
else
z=min2;

printf("1. broj =  %d \t2. broj =  %d", a, b);  // ispis vrijednosti prvog pa drugog broja
cout<<"z= "<<z<<endl;

return 0;
}