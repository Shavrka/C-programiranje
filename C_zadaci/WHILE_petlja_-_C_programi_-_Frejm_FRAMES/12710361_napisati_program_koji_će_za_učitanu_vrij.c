/*
 * ZADATAK 12710361 - 12710361
 * Napisati program koji će za učitanu vrijednost N izračunati vrijednost izraza i ispisati::
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/120c/12710361.htm
 */

#include <stdio.h>

int main ()
{
int i, k, n, znak;
double s, p;    // vrijednost faktorijela brzo se uvecava i prelazi opseg predvidjen za cijele brojeve
printf("Keficijent: ");
scanf("%d", &k);
printf("Do broja n: ");
scanf("%d", &n);
s = 0;		// pocetna vrijednost sume
p = 1;		// pocetna vrijednost proizvoda
znak = 1;	// vrijednost predznaka

i = 1;               				// pocetna vrijednost kontrolne varijable
while(i <= 2*n) {					// pocetak petlje - dok je i=2*n
p = p * i;						// proizvod - p *= i;
if (i % 2 == 0){				// ako je i djeljiv sa 2 izvedi
s = s + znak * p * k;	// suma
znak = -znak;			// promjena vrijednosti predznaka
}								// if
i++;                			// slijedeca vrijednost kontrolne varijable i
}									// kraj while petlje

printf("Suma faktorijela: %f", s);
return 0;
}