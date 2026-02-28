/*
 * ZADATAK 12500059 - 12500059
 * Napisati program koji će za učitanu vrijednost k izračunati vrijednost izraza i ispisati:
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/120c/12500059.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
int i, k;
double s;	// vrijednost kvadrata broje se brzo se uvecava i prelazi opseg predvidjen za cijele brojeve
printf("Unesi k: ");
scanf("%d", &k);
s=0;

for(i=1; i <= k; i+=2)
s+=i*i;

printf("Suma iznosi: %f", s);
return 0;
}