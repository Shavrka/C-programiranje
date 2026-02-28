/*
 * ZADATAK 08211033 - 08211033
 * Ispis kvadratnog korijena prirodnih brojeva do n (WHILE petlja).
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08211033.htm
 */

#include <stdio.h>
#include <math.h>          // ukljuci biblioteku math.h koja sadrzi funkciju sqrt()

int main ()
{
int i, n;              // deklarisanje varijabli
printf("Ispis kvadratnog korijena prirodnih brojeva do n \n");  // naslov   \n - prelazak u novi red
printf("Do broja: ");
scanf("%d", &n);       // ulaz n

i = 1;                 // pocetna vrijednost kontrolne varijable
while (i <= n) {       // dok je i <= n ponavljaj - pocetak petlje
printf("Broj %d   kvadratni korijen broja = %f\n", i, sqrt(i));    // ispis i korijena i  \n ima za posljedicu prelazak u novi red
i++;               // slijedeca vrijednost kontrolne varijable i
}
return 0;
}

II Varijanta   pow()
// 08211033
#include <stdio.h>
#include <math.h>          // ukljuci biblioteku math.h koja sadrzi funkciju pow()

int main ()
{
int i, n;              // deklarisanje varijabli
printf("Ispis kvadratnog korijena prirodnih brojeva do n \n");  // naslov   \n - prelazak u novi red
printf("Do broja: ");
scanf("%d", &n);       // ulaz n

i = 1;                 // pocetna vrijednost kontrolne varijable
while (i <= n) {       // dok je i <= n ponavljaj - pocetak petlje
printf("Broj %d   kvadratni korijen broja = %lf\n",i, pow(i, .5));    // ispis i  korijena i  \n ima za posljedicu prelazak u novi red
i++;               // slijedeca vrijednost kontrolne varijable i
}
return 0;
}