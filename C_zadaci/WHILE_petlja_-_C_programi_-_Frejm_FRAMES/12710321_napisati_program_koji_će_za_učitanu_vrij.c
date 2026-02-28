/*
 * ZADATAK 12710321 - 12710321
 * Napisati program koji će za učitanu vrijednost N izračunati vrijednost izraza i ispisati::
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/120c/12710321.htm
 */

#include <stdio.h>

int main ()
{
int i, n, k;
double s, p, s1, s2;    // vrijednost faktorijela brzo se uvecava i prelazi opseg predvidjen za cijele brojeve
printf("Keficijent: ");
scanf("%d", &k);
printf("Do broja n: ");
scanf("%d", &n);
s1 = 0;		// pocetna vrijednost sume neparnih - pozitivni
s2 = 0; 	// pocetna vrijednost sume parnih - negativni
p = 1;		// pocetna vrijednost proizvod

i = 1;              	// pocetna vrijednost kontrolne varijable
while(i <= n) {	      	// pocetak petlje - dok je i <= n radi
p = p * k * i;     	// proizvod - p *= k*i;
if (i % 2 == 0)		// djeljivi sa 2 - parnin
s2 = s2 + p;	// suma parnih - negativni
else
s1 = s1 + p;	// suma neparnih - pozitivni
i++;                // slijedeca vrijednost kontrolne varijable i
}  						// kraj while petlje
s = s1 - s2;			// razlika suma

printf("Suma faktorijela: %f", s);
return 0;
}

II Varijanta
#include <stdio.h>

int main ()
{
int i, n, k;
double s, p, s1, s2;    // vrijednost faktorijela brzo se uvecava i prelazi opseg predvidjen za cijele brojeve
printf("Keficijent: ");
scanf("%d", &k);
printf("Do broja n: ");
scanf("%d", &n);
s1 = 0;		// pocetna vrijednost sume neparnih - pozitivni
s2 = 0; 	// pocetna vrijednost sume parnih - negativni
p = 1;		// pocetna vrijednost proizvod

i = 1;               				// pocetna vrijednost kontrolne varijable
while(i <= n) {						// pocetak petlje - dok je i <= n radi
p = p * k * i;       			// proizvod - p *= k*i;
if ((i % 2 < 0)||(i % 2 > 0))	// nije djeljivi sa 2 - parnin
s1 = s1 + p;				// suma neparnih - pozitivni
else
s2 = s2 + p;				// suma parnih - negativni
i++;                			// slijedeca vrijednost kontrolne varijable i
}									// kraj while petlje
s = s1 - s2;						// razlika suma

printf("Suma faktorijela: %f", s);
return 0;
}