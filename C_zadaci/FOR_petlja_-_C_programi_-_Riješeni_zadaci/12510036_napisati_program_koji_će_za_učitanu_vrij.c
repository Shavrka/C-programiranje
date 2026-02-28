/*
 * ZADATAK 324 - 12510036
 * Napisati program koji će za učitanu vrijednost K i N izračunati vrijednost izraza i ispisati:
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/120C/12510036.htm
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
p = 1;    // pocetna vrijednost proizvod

for(i=1; i <= n; ++i) {		// ponavljanje za i=1 do i=n - pocetak petlje
p = p * i;              // p=p*i; nova vrijednost proizvoda
if (i % 6 == 0)         // djeljivi sa 6 - negativni sabirci
s1 = s1 + p * k;    // negativni sabirci
if (i % 6 == 3)         // djeljivi sa 3 ne sa 6 - pozitivni sabirci
s2 = s2 + p * k;    // pozitivni sabirci
}							// kraj petlje
s = s2 - s1;				// razlika suma

printf("Suma faktorijela: %f", s);
return 0;
}

II Varijanta
#include <stdio.h>

int main ()
{
int i, n, k, znak;
double s, p;    // vrijednost faktorijela brzo se uvecava i prelazi opseg predvidjen za cijele brojeve
printf("Keficijent: ");
scanf("%d", &k);
printf("Do broja n: ");
scanf("%d", &n);
s = 0;   // pocetna vrijednost sume
p = 1;    // pocetna vrijednost proizvod
znak = 1;

for(i=1; i <= n; ++i) {			// ponavljanje za i=1 do i=n - pocetak petlje
p = p * i;              	// p=p*i; nova vrijednost proizvoda
if (i % 3==0){        		// djeljivi sa 3
s = s + znak * k * p;    // nova vrijednost sume
znak = -znak;			// promjena predznaka
};    						// if
}								// kraj petlje

printf("Suma faktorijela: %f", s);
return 0;
}