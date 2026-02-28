/*
 * ZADATAK 08112022 - 08112022
 * Suma parnih prirodnih brojeva od 1 do 5.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112022.htm
 */

#include <stdio.h>

int main ()
{
int i, s;                 // deklarisanje varijabli i, s,
s = 0;                    // pocetna vrijednost sume je 0
for ( i=1; i<=5; i++;)    // ponavljanje za i = 1 do i = 5 - pocetak petlje
if(i % 2 ==0)           // i parno (broj je djeljiv sa 2)?
s = s + i;           // i parno, uvecaj s za vrijednosti i; s=s+i
printf("Suma parnih od 1 do 5: %d", s);   // lspis sume
return 0;
}

II Varijanta  s += i
// 08112022
#include <stdio.h>

int main ()
{
int i, s;                 // deklarisanje varijabli i, s,
s = 0;                    // pocetna vrijednost sume je 0
for ( i=1; i<=5; i++;)    // ponavljanje za i = 1 do i = 5 - pocetak petlje
if(i % 2 ==0)           // i parno (broj je djeljiv sa 2)?
s += i;             // i parno, uvecaj s za vrijednosti i; s=s+i
printf("Suma parnih od 1 do 5: %d", s);   // lspis sume
return 0;
}