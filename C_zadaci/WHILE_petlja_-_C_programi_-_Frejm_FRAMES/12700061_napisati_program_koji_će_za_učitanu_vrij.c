/*
 * ZADATAK 12700061 - 12700061
 * Napisati program koji će za učitanu vrijednost N i zračunati vrijednost izraza i ispisati:
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/120c/12700061.htm
 */

#include <stdio.h>
int main ()
{
int i, n;
double s, p;		// vrijednost faktorijela brzo se uvecava i prelazi opseg predvidjen za cijele brojeve
printf("Do broja n: ");
scanf("%d", &n);
s = 0;   // pocetna vrijednost sume
p = 1;   // pocetna vrijednost proizvoda

i = 1;                  // pocetna vrijednost kontrolne varijable
while(i <= n) {	        // pocetak petlje - dok je i <= n radi
p = p * i;			// faktorijel do broja i
if(i % 3 == 0)		// ako je i djeljivo sa 3 izvedi
s = s + p;		// suma faktorijel djeljivih sa 3
i++;                // slijedeca vrijednost kontrolne varijable i
}						// kraj while petlje

printf("Suma je: %f", s);
return 0;
}