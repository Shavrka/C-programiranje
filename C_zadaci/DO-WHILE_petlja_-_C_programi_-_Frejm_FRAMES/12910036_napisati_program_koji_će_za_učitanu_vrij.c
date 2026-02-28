/*
 * ZADATAK 12910036 - 12910036
 * Napisati program koji će za učitanu vrijednost K i N izračunati vrijednost izraza i ispisati:
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/120c/12910036.htm
 */

#include <stdio.h>
I Varijanta
int main ()
{
int i, n, k;
double s, p, s1, s2, p1;    // vrijednost faktorijela brzo se uvecava i prelazi opseg predvidjen za cijele brojeve
printf("Keficijent: ");
scanf("%d", &k);
printf("Do broja n: ");
scanf("%d", &n);
s1 = 0;   // pocetna vrijednost negativni sabirci
s2 = 0;   // pocetna vrijednost pozitivni sabirci
p = 1;    // pocetna vrijednost proizvoda

i = 1;               		// pocetna vrijednost kontrolne varijable
do {		      	 		// početak petlje - radi
p = p * i;              // p=p*i; nova vrijednost proizvoda
if (i % 6 == 0)         // djeljivi sa 6 - negativni sabirci
s1 = s1 + p * k;    // negativni sabirci
if (i % 6 == 3)         // djeljivi sa 3 ne sa 6 - pozitivni sabirci
s2 = s2 + p * k;    // pozitivni sabirci
i++;     	         	// slijedeca vrijednost kontrolne varijable i
} while(i <= n);			// sve dok je i <= n ponavljaj
s = s2 - s1;				// razlika suma

printf("Suma faktorijela: %f", s);
return 0;
}

II Varijanta
#include <stdio.h>

int main ()
{
int i, n, k, znak;
double s, p, s1, s2, p1;    // vrijednost faktorijela brzo se uvecava i prelazi opseg predvidjen za cijele brojeve
printf("Keficijent: ");
scanf("%d", &k);
printf("Do broja n: ");
scanf("%d", &n);
s = 0;    // pocetna vrijednost sume
p = 1;    // pocetna vrijednost proizvoda
znak = 1;

i = 1;               			// pocetna vrijednost kontrolne varijable
i++;                			// slijedeca vrijednost kontrolne varijable i
do {							// početak petlje - radi
p = p * i;              	// p=p*i; nova vrijednost proizvoda
if (i % 3==0){        		// djeljivi sa 3
s = s + znak * k * p;    // nova vrijednost sume
znak = -znak;			// promjena predznaka
};    						// if
} while(i <= n);				// sve dok je i <= n ponavljaj

printf("Suma faktorijela: %f", s);
return 0;
}