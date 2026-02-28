/*
 * ZADATAK 08211032 - 08211032
 * Ispis kvadratnog korijena prirodnih brojeva do 10.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08211032.htm
 */

#include <stdio.h>
#include <math.h>               // ukljuci biblioteku math.h koja sadrzi funkciju sqrt()

int main ()
{
int i;                      // deklarisanje varijable i
printf("Ispis kvadratnog korijena prirodnih brojeva do 10 \n");  // naslov   \n - prelazak u novi red
i = 1;                      // pocetna vrijednost kontrolne varijable
while ( i<= 10) {           // dok je i <= 10 ponavljaj - pocetak petlje
printf("Broj %d   kvadratni korijen broja = %f\n", i, sqrt(i));    // ispis i korijena i  \n ima za posljedicu prelazak u novi red
i++;                    // slijedeca vrijednost kontrolne varijable i
}
return 0;
}

II Varijanta   pow()
// 08211032
#include <stdio.h>
#include <math.h>              // ukljuci biblioteku math.h koja sadrzi funkciju pow()

int main ()
{
int i;                      // deklarisanje varijable i
printf("Ispis kvadratnog korijena prirodnih brojeva do 10 \n");  // naslov   \n - prelazak u novi red
i = 1;                      // pocetna vrijednost kontrolne varijable
while (i <=10 ) {           // dok je i <= 5 ponavljaj - pocetak petlje
printf("Broj %d   kvadratni korijen broja = %lf\n",i, pow(i, .5));    // ispis i  korijena i  \n ima za posljedicu prelazak u novi red
i++;                    // slijedeca vrijednost kontrolne varijable i
}
return 0;
}