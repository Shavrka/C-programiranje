/*
 * ZADATAK 09412017 - 09412017
 * Napišite rekurzivnu funkciju koja izračunava suma n članove niza po izrazu F(i)=i*(i+1)/2.(članovi niza: 1, 3, 6, 10, ...).
 * Kategorija: Funkcije - Rekurzija /FUNCTIONS - RECURSION/ - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/094c/09412017.htm
 */

#include <stdio.h>

unsigned trougao_suma(unsigned n1)  {
if (n1 <= 1)    // ako je n jednak 0 ili 1 - kraj rekurzije
return n1;
else
return n1 * (n1 + 1) /2 + trougao_suma(n1 - 1) ;  // clan niza + prethondi clanovi
}
int main(void) {
unsigned n;
printf("Broj clanova niza ");
scanf("%u",&n);

printf("Suma trougaonih brojeva %u", trougao_suma(n));
return 0;
}

Ispis na ekranu:
Broj clanova niza 11
Suma trougaonih brojeva 286