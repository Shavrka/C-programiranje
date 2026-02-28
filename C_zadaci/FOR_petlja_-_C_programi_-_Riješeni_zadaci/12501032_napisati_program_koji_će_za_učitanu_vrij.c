/*
 * ZADATAK 322 - 12501032
 * Napisati program koji će za učitanu vrijednost K i N izračunati vrijednost izraza i ispisati:
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/120C/12501032.htm
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
s1 = 0;		// pocetna vrijednost sume neparnih - pozitivni
s2 = 0; 	// pocetna vrijednost sume parnih - negativni
p = 1;		// pocetna vrijednost proizvod

for(i=1; i <= n; ++i) {		// ponavljanje za i=1 do i=n - pocetak petlje
p = p * i;     			// proizvod - p *= i;
if (i % 2 == 0)			// djeljivi sa 2 - parnin
s2 = s2 + k * p;	// suma parnih - negativni
else
s1 = s1 + k * p;	// suma neparnih - pozitivni
}
s = s1 - s2;				// razlika suma

printf("Suma faktorijela: %f", s);
return 0;
}

II Varijanta
#include <stdio.h>

int main ()
{
int i, k, n, znak;
double s, p, s1, s2;
printf("Keficijent: ");
scanf("%d", &k);
printf("Do broja n: ");
scanf("%d", &n);
s = 0;  	// pocetna vrijednost sume
p = 1;   	// pocetna vrijednost proizvod
znak = 1;  	// pocetna vrijednost znaka 1

for(i=1; i <= n; ++i) {	// ponavljanje za i=1 do i=n - pocetak petlje
p = p * i;        		// p *= i;
s = s + znak * k * p;	// s += znak * k * p;
znak = -znak;         	// znak *= -1; mijenja se predznak
}	// kraj petlje

printf("Suma faktorijela: %f", s);
return 0;
}