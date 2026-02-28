/*
 * ZADATAK 32 - 08111033
 * Ispis kvadratnog korijena prirodnih brojeva do n.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08111033.htm
 */

#include <stdio.h>
#include <math.h>          // ukljuci biblioteku math.h koja sadrzi funkciju sqrt()

int main ()
{
int i, n;              // deklarisanje varijabli
printf("Kvadratni korijen brojeva od 1 do n \n"); // naslov \n - prelazak u novi red
printf("Do broja: ");
scanf("%d", &n);       // ulaz n

for (i=1; i<=n; ++i)   // ponavljanje za i=1 do i=10 - pocetak petlje
printf("Broj %d   kvadratni korijen broja = %f\n", i, sqrt(i)); // ispis i korijena i
return 0;
}

II varijanta   pow()
// 08111033;
#include <stdio.h>
#include <math.h>          // ukljuci biblioteku math.h koja sadrzi funkciju pow()

int main ()
{
int i, n;              // deklarisanje varijabli
printf("Kvadratni korijen brojeva od 1 do n \n"); // naslov \n - prelazak u novi red
printf("Do broja: ");
scanf("%d", &n);       // ulaz n

for (i=1; i<=n; ++i)   // ponavljanje za i=1 do i=10 - pocetak petlje
printf("Broj %d   kvadratni korijen broja = %f\n", i, pow(i, .5)); // ispis i korijena i
return 0;
}