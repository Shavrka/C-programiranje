/*
 * ZADATAK 12900061 - 12900061
 * Napisati program koji će za učitanu vrijednost N i zračunati vrijednost izraza i ispisati:S = 3! + 6! + 9! + … + N!
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/120c/12900061.htm
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
do {	         		// početak petlje - radi
p = p * i;			// faktorijel do broja i
if(i % 3 == 0)		// ako je i djeljivo sa 3 izvedi
s = s + p;		// suma faktorijel djeljivih sa 3
i++;                // slijedeca vrijednost kontrolne varijable i
} while(i <= n);		// sve dok je i <= n ponavljaj

printf("Suma je: %f", s);
return 0;
}