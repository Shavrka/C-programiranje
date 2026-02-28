/*
 * ZADATAK 12700043 - 12700043
 * Napisati program koji će za učitanu vrijednost N izračunati vrijednost izraza i ispisati: S=1+1/(1/2) +.1/(1/2 + 1/3) +...+ 1/(1/2+1/3+...+1/n);
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/120c/12700043.htm
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

i = 2;					 // pocetna vrijednost kontrolne varijable
while(i <= n) {		     // dok je i <= n ponavljaj
raz += (double)1/i;  // razlomak (reciprocna vrijednosti i)
s += 1/raz;          // s=s + 1/raz;
i++;				 // slijedeca vrijednost kontrolne varijable i
}                        // kraj while petlje

printf("Suma je: %f", s);
return 0;
}