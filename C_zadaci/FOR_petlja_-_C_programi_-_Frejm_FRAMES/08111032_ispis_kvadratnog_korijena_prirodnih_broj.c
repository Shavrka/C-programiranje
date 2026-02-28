/*
 * ZADATAK 08111032 - 08111032
 * Ispis kvadratnog korijena prirodnih brojeva do 10.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08111032.htm
 */

#include <stdio.h>
#include <math.h>          // ukljuci biblioteku math.h koja sadrzi funkciju sqrt()

int main()
{
printf("Kvadratni korijen brojeva 1-10\n"); // naslov  \n ima za posljedicu prelazak u novi red
int i;                        // deklarisanje varijable i
printf("Ispis kvadratnog korijena prirodnih brojeva do 10 \n");  // naslov   \n - prelazak u novi red
for(i = 1; i <= 10; ++i)     // ponavljanje za i=1 do i=10 - pocetak petlje
printf("Broj %d   kvadratni korijen broja = %f\n", i, sqrt(i)); // ispis i korijena i
return 0;
}

II varijanta   pow()
// 08111032
#include <stdio.h>
#include <math.h>          // ukljuci biblioteku math.h koja sadrzi funkciju pow()

int main()
{
printf("Kvadratni korijen brojeva 1-10\n"); // naslov  \n ima za posljedicu prelazak u novi red
int i;                   // deklarisanje varijable i
printf("Ispis kvadratnog korijena prirodnih brojeva do 10 \n");  // naslov   \n - prelazak u novi red
for(i=1; i<=10; ++i)    // ponavljanje za i=1 do i=10 - pocetak petlje
printf("Broj %d   kvadratni korijen broja = %lf\n",i, pow(i, .5)); // ispis i  korijena i
return 0;
}