/*
 * ZADATAK 186 - 08112082
 * Napisati program da nađe proizvod prirodnih brojeva od a do b djeljivih sa 5 i koliko ih ima.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08112082.htm
 */

#include <stdio.h>

int main ()
{
int i; a,b,br=0,p=1;
printf("Od broja: ");
scanf ("%d", &a);
printf("Do broja: ");
scanf ("%d", &b);

for (i=a; i <= b; ++i)
{
if(i%5==0)
{
p=p*i;
br++;
}
}
printf("Brojeva djeljivih sa 5 ima: %d", br);
printf("Proizvod iznosi: %d", p);
return 0;
}