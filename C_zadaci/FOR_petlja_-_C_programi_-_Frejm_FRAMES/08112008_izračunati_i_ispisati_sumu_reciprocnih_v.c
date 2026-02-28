/*
 * ZADATAK 08112008 - 08112008
 * Izračunati i ispisati sumu reciprocnih vrijednosti prirodnih brojeva od k do n.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112008.htm
 */

#include <stdio.h>

int main ()
{
float suma;
int k,n;

printf("Unesite K i N: \n");
scanf("%d%d",&k,&n);

for(;k<=n;k++)
suma+=(1.0/k);

printf("Suma recprocnih vrijednosti je: %f",suma);

return 0;
}