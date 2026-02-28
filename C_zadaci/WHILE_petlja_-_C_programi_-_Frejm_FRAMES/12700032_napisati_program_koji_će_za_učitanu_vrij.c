/*
 * ZADATAK 12700032 - 12700032
 * Napisati program koji će za učitanu vrijednost N izračunati vrijednost izraza i ispisati:
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/120c/12700032.htm
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
p = 1;  // pocetna vrijednost proizvod

i = 1;              // pocetna vrijednost kontrolne varijable
while(i <= n) {		// pocetak petlje - dok je i <= n radi
p *= i;   		// p=p*i;
s += k * p;   	// s=s+k*p;
i++;             // slijedeca vrijednost kontrolne varijable i
}

printf("Suma faktorijela: %f", s);
return 0;
}