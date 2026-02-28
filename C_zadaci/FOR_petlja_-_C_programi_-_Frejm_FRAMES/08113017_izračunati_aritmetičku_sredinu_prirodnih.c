/*
 * ZADATAK 08113017 - 08113017
 * Izračunati aritmetičku sredinu prirodnih brojeva do 5.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08113017.htm
 */

#include <stdio.h>

int main ()
{
int i,s,br;                  // deklarisanje varjabli
float as;                    // deklarisanje varjable as

s = 0;                       // pocetna vrijednost kumulativne sume
br = 0;                      // pocetna vrijednost kumulativnog brojaca
for(i = 1; i <=5 ; i++) {
s=s+i;                   // uvecaj s za vrijednosti i; s=s+i
br=br+1;                 // uvecaj br za vrijednosti 1; br=br+1
}

as = (float)s / br;          // aritmeticka sredina
printf("Aritmeticka sredina od 1 do 5 iznosi: %.4f",as);   // ispis

return 0;
}