/*
 * ZADATAK 08212043 - 08212043
 * Napisati program za izračunavanje proizvoda od
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212043.htm
 */

#include <stdio.h>

int main() {
int i, p;                   // deklarisanje varjabli

p = 1 ;                     // pocetna vrijednost proizvoda
i = 1;                      // pocetna vrijednost kontrolne varijable
while(i <= 5)   {           // dok je i <= 5 ponavljaj - pocetak petlje
p = p * i;              // kumulativni proizvod brojeva p = p * i;
i++;                    // slijedeca vrijednost kontrolne varijable i
}
printf("Proizvod je: %d",p);// ispis proizvoda
}

II verzija p *= i;
// 08212043
// Proizvod prvih 5 prirodnih brojeva.
#include <stdio.h>

int main() {
int i, p;                   // deklarisanje varjabli

p = 1 ;                     // pocetna vrijednost proizvoda
i = 1;                      // pocetna vrijednost kontrolne varijable
while(i <= 5)   {           // dok je i <= 5 ponavljaj - pocetak petlje
p *= i;                 // kumulativni proizvod brojeva p = p * i;
i++;                    // slijedeca vrijednost kontrolne varijable i
}
printf("Proizvod je: %d",p);// ispis proizvoda
}