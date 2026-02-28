/*
 * ZADATAK 08111022 - 08111022
 * Napisati program za ispis kvadrata prirodnih brojeva od 1 do 5.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08111022.htm
 */

#include <stdio.h>

int main()
{
printf("Ispis kvadrata brojeva od 1 do 5\n"); // naslov \n - prelazak u novi red
int i;                    // deklarisanje varijable i
for(i=1; i<=5; ++i)       // ponavljanje za i=1 do i=5 - pocetak petlje
printf("Broj %d   kvadrat broja = %d\n", i, i*i);    // ispis i  i^2  kvadrat broja
return 0;
}

II varijanta pow(i, 2)
// 08111022
// Napisati program za ispis kvadrata prirodnih brojeva od 1 do 5.
#include <stdio.h>
#include <math.h>          // ukljuci biblioteku math.h koja sadrzi funkciju pow()

int main()
{
printf("Ispis kvadrata brojeva od 1 do 5\n"); // naslov \n - prelazak u novi red
int i;                    // deklarisanje varijable i
for(i=1; i<=5; ++i)       // ponavljanje za i=1 do i=5 - pocetak petlje
printf("Broj %d   kvadrat broja = %lf\n",i, pow(i, 2));  // ispis i pow(i, 2)
return 0;
}