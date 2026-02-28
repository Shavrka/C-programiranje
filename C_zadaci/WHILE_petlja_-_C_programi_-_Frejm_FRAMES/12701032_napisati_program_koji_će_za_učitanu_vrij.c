/*
 * ZADATAK 12701032 - 12701032
 * Napisati program koji će za učitanu vrijednost N izračunati vrijednost izraza i ispisati:
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/120c/12701032.htm
 */

#include <stdio.h>
int main ()
{
int i, k, n;
double s, p, s1, s2;
printf("Keficijent: ");
scanf("%d", &k);
printf("Do broja n: ");
scanf("%d", &n);
s1 = 0;		// pocetna vrijednost sume s1
s2 = 0;		// pocetna vrijednost sume s2
p = 1;		// pocetna vrijednost proizvoda

i = 1;		// pocetna vrijednost kontrolne varijable
while(i <= n) {			// dok je i <= n ponavljaj
p = p * i;               // proizvod - p *= i;
if (i % 2 == 0)          // djeljivi sa 2 - parnin
s2 = s2 + k * p;    // suma parnih - negativni
else
s1 = s1 + k * p;    // suma neparnih - pozitivni
i++;					// slijedeca vrijednost kontrolne varijable i
}
s = s1 - s2;

printf("Suma faktorijela: %f", s);
return 0;
}

II Varijanta
#include <stdio.h>
int main ()
{
int i, k, n, znak;
double s, p;
printf("Keficijent: ");
scanf("%d", &k);
printf("Do broja n: ");
scanf("%d", &n);
znak = 1;   // pocetna vrijednost znaka 1
s = 0;		// pocetna vrijednost sume
p = 1;		// pocetna vrijednost proizvoda

i = 1;						// pocetna vrijednost kontrolne varijable
while(i <= n) {				// dok je i <= n ponavljaj
p = p * i; 				// p *= i;
s = s + znak * k * p;	// s += znak * k * p;
znak = -znak;			// znak *= -1;
i++;						// slijedeca vrijednost kontrolne varijable i
}							// kraj while petlje

printf("Suma faktorijela: %f", s);
return 0;
}