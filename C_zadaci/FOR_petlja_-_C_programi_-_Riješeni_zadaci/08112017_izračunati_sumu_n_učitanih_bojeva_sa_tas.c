/*
 * ZADATAK 227 - 08112017
 * Izračunati sumu n učitanih bojeva sa tastature.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08112017.htm
 */

#include <stdio.h>

int main()
{
int i, n;                     // deklarisanje varijabli
double a, s;                  // deklarisanje varijabli

printf("Broj brojeva: ");
scanf("%d", &n);              // ucitavanje vrijednosti varijable n sa tastature

s = 0;                        // pocetna vrijednost kumulativne sume
for(i=1; i<=n; i++) {         // ponavljanje za i=1 do i=n - pocetak petlje
printf("Otkucaj %d. broj ",i); // novi broj
scanf("%lf",&a);        // novi broj
s = s  + a;	              // kumulativna suma brojeva
}
printf("Suma je: %lf",s);  // ispis vrijednost s

return 0;
}

II Varijanta  s += a
// 08112017
#include <stdio.h>

int main()
{
int i, n;                     // deklarisanje varijabli
double a, s;                  // deklarisanje varijabli

printf("Broj brojeva: ");
scanf("%d", &n);              // ucitavanje vrijednosti varijable n sa tastature

s = 0;                        // pocetna vrijednost kumulativne sume
for(i=1; i<=n; i++) {         // ponavljanje za i=1 do i=n - pocetak petlje
printf("Otkucaj %d. broj ",i); // novi broj
scanf("%lf",&a);          // novi broj
s += a;	                  // kumulativna suma brojeva s = s  + a
}
printf("Suma je: %lf",s);     // ispis vrijednost s

return 0;
}