/*
 * ZADATAK 67 - 08112010
 * Suma parnih prirodnih brojeva od 1 do n.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08112010.htm
 */

#include <stdio.h>

int main ()
{
int i, s, n;                // deklarisanje varjabli
printf("Do broja: ");
scanf("%d", &n);            // upis broja do kojeg se ispisuje

s=0;                        // pocetna vrijednost kumulativne sume
for  (i=1; i<=n; i++)       // ponavljanje za i = 1 do i = n - pocetak petlje
if(i%2==0)                // i parno ?
s=s+i;                 // da, uvecaj s za vrijednosti i; s=s+i
printf("Suma iznosi: %d", s);  // ispis sume
return 0;
}

II Varijanta  s += i
// 08112010;
#include <stdio.h>

int main ()
{
int i, s, n;                // deklarisanje varjabli
printf("Do broja: ");
scanf("%d", &n);            // upis broja do kojeg se ispisuje

s=0;                        // pocetna vrijednost kumulativne sume
for  (i=1; i<=n; i++)       // ponavljanje za i = 1 do i = n - pocetak petlje
if(i%2==0)                // i parno ?
s += i;                // da, uvecaj s za vrijednosti i; s=s+i
printf("Suma iznosi: %d", s);  // ispis sume
return 0;
}