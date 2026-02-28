/*
 * ZADATAK 12900032 - 12900032
 * Napisati program koji će za učitanu vrijednost K i N izračunati vrijednost izraza i ispisati:
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/120c/12900032.htm
 */

#include <stdio.h>
int main ()
{
int i, k, n;
double s, p;    // vrijednost faktorijela brzo se uvecava i prelazi opseg predvidjen za cijele brojeve
printf("Keficijent: ");
scanf("%d", &k);
printf("Do broja n: ");
scanf("%d", &n);
s = 0; 	// pocetna vrijednost sume
p = 1;  // pocetna vrijednost proizvoda

i = 1;              // pocetna vrijednost kontrolne varijable
do {		 		// pocetak petlje - radi
p *= i;   		// p=p*i;
s += k * p;   	// s=s+k*p;
i++;             // slijedeca vrijednost kontrolne varijable i
} while(i <= n);    // sve dok je i <= n ponavljaj

printf("Suma faktorijela: %f", s);
return 0;
}