/*
 * ZADATAK 08112050 - 08112050
 * Napisati program za ispis proizvoda (faktorijele) brojeva od 1 do 5.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112050.htm
 */

#include <stdio.h>

int main()
{
printf("Faktorijel broja od 1 do n\n");  // naslov
int i, p;                                // deklarisanje varijabli

p = 1;                                   // pocetna vrijednost
for(i=1; i <= 5; i++) {                  // ponavljanje za i=1 do i=5 - pocetak petlje
p *= i;                              // proizvod, p = p * i
printf("Faktorijel broja %d je %d \n",i,p); // ispis
}
return 0;
}

II varinata p*=i
// 08112050
#include <stdio.h>

int main()
{
printf("Faktorijel broja od 1 do n\n");  // naslov
int i, p;                                // deklarisanje varijabli

p = 1;                                   // pocetna vrijednost
for(i=1; i <= 5; i++) {                  // ponavljanje za i=1 do i=5 - pocetak petlje
p *= i;                              // proizvod
printf("Faktorijel broja %d je %d \n",i,p); // ispis
}
return 0;
}