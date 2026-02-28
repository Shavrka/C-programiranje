/*
 * ZADATAK 12900005 - 12900005
 * Napisati program koji će za učitanu vrijednost N i zračunati vrijednost izraza i ispisati:
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/120c/12900005.htm
 */

#include <stdio.h>
int main ()
{
int i, n;
double s, s1, p;		// vrijednost faktorijela brzo se uvecava i prelazi opseg predvidjen za cijele brojeve
printf("Do broja n: ");
scanf("%d", &n);
s1 = 0;  // pocetna vrijednost sume s1
s = 0;   // pocetna vrijednost sume s
p = 1;   // pocetna vrijednost proizvoda

i = 1;                        // pocetna vrijednost kontrolne varijable
do {   	          			  // početak petlje - radi
s1 = s1 + i; 			  // s1+=i - brojnik u razlomku
p = p * i; 				  // p*=i; - faktorijel do broja i
s = s + s1 / (double) p;  // s+=s1/(double)p;
i++;                      // slijedeca vrijednost kontrolne varijable i
} while(i <= n);			  // sve dok je i <= n ponavljaj

printf("Suma je: %f", s);
return 0;
}