/*
 * ZADATAK 08112002 - 08112002
 * Suma prirodnih brojeva od k do n.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112002.htm
 */

#include <stdio.h>

int main ()
{
int i, s, n, k;                // deklarisanje varjabli
printf("Od broja: ");
scanf("%d", &k);               // upis broja od kojeg se ispisuje
printf("Do broja: ");
scanf("%d", &n);               // upis broja do kojeg se ispisuje
s=0;                           // pocetna vrijednost kumulativne sume

for(i = k; i <= n; i++)        // ponavljanje za i = k do i = n - pocetak petlje
s = s + i;                   // uvecaj s za vrijednosti i; s=s+i
printf("Suma iznosi: %d", s);  // ispis sume
return 0;
}

II Varijanta  s += i
// 08112002;
#include <stdio.h>

int main ()
{
int i, s, n, k;                // deklarisanje varjabli
scanf("%d", &k);               // upis broja od kojeg se ispisuje
printf("Do broja: ");
scanf("%d", &n);               // upis broja do kojeg se ispisuje

s=0;                           // pocetna vrijednost kumulativne sume
for(i = k; i <= n; i++)        // ponavljanje za i = k do i = n - pocetak petlje
s += i;                    // uvecaj s za vrijednosti i; s=s+i
printf("Suma iznosi: %d", s);  // ispis sume
return 0;
}