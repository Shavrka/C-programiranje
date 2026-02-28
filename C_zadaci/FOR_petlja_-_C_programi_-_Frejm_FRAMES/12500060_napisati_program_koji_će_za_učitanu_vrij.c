/*
 * ZADATAK 12500060 - 12500060
 * Napisati program koji će za učitanu vrijednost N i zračunati vrijednost izraza i ispisati:S = 4! + 8! + 12! + … + (4N)!
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/120c/12500060.htm
 */

#include <stdio.h>
int main ()
{
int i, n;
double s, p;		// vrijednost faktorijela brzo se uvecava i prelazi opseg predvidjen za cijele brojeve
printf("Do broja n: ");
scanf("%d", &n);
s=0;
p=1;

for(i=1; i <= (n*4); i++) {
p = p * i;			// faktorijel do broja i
if(i % 4 == 0)		// suma faktorijel djeljivih sa 3
s = s + p;		// skraćena notacija s += p;
}

printf("Suma je: %f", s);
return 0;
}