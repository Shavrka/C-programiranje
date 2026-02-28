/*
 * ZADATAK 08112006 - 08112006
 * Suma prvih 5 prirodnih brojeva.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112006.htm
 */

#include <stdio.h>

int main ()
{
int i,s;                        // deklarisanje varjabli
s=0;                            // pocetna vrijednost kumulativne sume
for (i=1; i<=5; i++)            // ponavljanje za i = 1 do i = 5 - pocetak petlje
s = s + i;                   // uvecaj s za vrijednosti i; s=s+i
printf("Suma iznosi: %d", s);   // ispis sume
return 0;
}

II Varijanta  s += i
// 08112006
#include <stdio.h>

int main ()
{
int i,s;                        // deklarisanje varjabli
s=0;                            // pocetna vrijednost kumulativne sume
for (i=1; i<=5; i++)            // ponavljanje za i = 1 do i = 5 - pocetak petlje
s += i;                      // uvecaj s za vrijednosti i; s=s+i
printf("Suma iznosi: %d", s);   // ispis sume
return 0;
}