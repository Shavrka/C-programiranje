/*
 * ZADATAK 08211022 - 08211022
 * Napisati program za ispis kvadrata prirodnih brojeva od 1 do 5.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08211022.htm
 */

#include <stdio.h>
#include <math.h>          // ukljuci biblioteku math.h koja sadrzi funkciju pow()

int main()
{
int i;                 // deklarisanje varijable i
i = 1;                 // pocetna vrijednost kontrolne varijable
while(i <= 5) {        // dok je i <= 5 ponavljaj - pocetak petlje
printf("Broj %d   kvadrat broja = %d\n", i, i*i);    // ispis i  i^2  kvadrat broja
i++;               // slijedeca vrijednost kontrolne varijable i
}
return 0;
}

II varijanta pow(i, 2)
// 08211022
#include <stdio.h>
#include <math.h>          // ukljuci biblioteku math.h koja sadrzi funkciju pow()

int main()
{
int i;                 // deklarisanje varijable i
i = 1;                 // pocetna vrijednost kontrolne varijable
while(i <= 5) {        // dok je i <= 5 ponavljaj - pocetak petlje
printf("Broj %d   kvadrat broja = %lf\n",i, pow(i, 2));    // ispis i pow(i, 2) \n ima za posljedicu prelazak u novi red
i++;               // slijedeca vrijednost kontrolne varijable i
}
return 0;
}