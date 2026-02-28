/*
 * ZADATAK 08112004 - 08112004
 * Suma neparnih prirodnih brojeva od 1 do n.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112004.htm
 */

#include <stdio.h>

int main ()
{
int i, s, n;              // deklarisanje varjabli
printf("Do broja: ");
scanf("%d", &n);          // ulaz n
s = 0;                    // pocetna vrijednost

for  (i=1; i <= n; i++)    // ponavljanje za i=1 do i=n - pocetak petlje
if(i % 2 != 0)           // i neparno?
s = s + i;            // da - neparno, uvecaj s za vrijednosti i

printf("Suma iznosi: %d", s); // ispis
return 0;
}

II varijanta   s += i
// 08112004;
#include <stdio.h>

int main ()
{
int i, s, n;               // deklarisanje varjabli
printf("Do broja: ");
scanf("%d", &n);           // ulaz n
s = 0;                     // pocetna vrijednost

for  (i=1; i <= n; i++)    // ponavljanje za i=1 do i=n - pocetak petlje
if(i % 2 != 0)         // i neparno?
s += i;                // da - neparno, uvecaj s za vrijednosti i; s=s+i

printf("Suma iznosi: %d", s); // ispis
return 0;
}