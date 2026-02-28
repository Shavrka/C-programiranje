/*
 * ZADATAK 60 - 08112021
 * Suma neparnih prirodnih brojeva od 1 do 5.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08112021.htm
 */

#include <stdio.h>

int main ()
{
int i, s, n;              // deklarisanje varijabli i, s, n
s = 0;                    // pocetna vrijednost sume je 0

for(i = 1; i <= n; i++)   // ponavljanje za i=1 do i=n - pocetak petlje
if(i % 2 != 0)          // i neparno (broj nije djeljiv sa 2)?
s = s + i;           // da, i neparni, uvecaj s za vrijednosti i; s=s+i
printf("Suma neparnih od 1 do 5 je: %d", s);   // lspis sume
return 0;
}