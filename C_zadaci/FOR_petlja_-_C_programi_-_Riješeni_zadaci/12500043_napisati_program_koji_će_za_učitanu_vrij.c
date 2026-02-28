/*
 * ZADATAK 301 - 12500043
 * Napisati program koji će za učitanu vrijednost N izračunati vrijednost izraza i ispisati:
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/120C/12500043.htm
 */

#include <stdio.h>
int main ()
{
int i, n;
double raz, s;  // vrijednost faktorijela brzo se uvecava i prelazi opseg predvidjen za cijele brojeve
printf("Do broja n: ");
scanf("%d", &n);
raz = 0;    // pocetna vrijednost sume reciprocne vrijednosti
s = 1;      // pocetna vrijednost sume

for(i=2; i <= n; i++) {  // ponavljanje za i=2 do i=n - pocetak petlje
raz += (double)1/i;  // razlomak (reciprocna vrijednosti i)
s += 1/raz;          //   s=s + 1/raz;
}                        // for - kraj petlje

printf("Suma je: %f", s);
return 0;
}