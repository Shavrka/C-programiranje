/*
 * ZADATAK 12901032 - 12901032
 * Napisati program koji će za učitanu vrijednost K i N izračunati vrijednost izraza i ispisati:
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/120c/12901032.htm
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
znak = 1;   // pocetna vrijednost znaka 1

s = 0;		// pocetna vrijednost sume
s2 = 0;		// pocetna vrijednost sume s2
p = 1;		// pocetna vrijednost proizvoda

i = 1;		// pocetna vrijednost kontrolne varijable
do {		// pocetak petlje - radi
p = p * i; 				// p *= i;
s = s + znak * k * p;	// s += znak * k * p;
znak = -znak;			// znak *= -1;
i++;						// slijedeca vrijednost kontrolne varijable i
} while(i <= n);			// sve dok je i manje od n ponavljaj petlju

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

i = 1;		// pocetna vrijednost kontrolne varijable
do {		// pocetak petlje - radi
p = p * i; 				// p *= i;
s = s + znak * k * p;	// s += znak * k * p;
znak = -znak;			// znak *= -1;
i++;						// slijedeca vrijednost kontrolne varijable i
} while(i <= n);			// sve dok je i manje od n ponavljaj petlju

printf("Suma faktorijela: %f", s);
return 0;
}