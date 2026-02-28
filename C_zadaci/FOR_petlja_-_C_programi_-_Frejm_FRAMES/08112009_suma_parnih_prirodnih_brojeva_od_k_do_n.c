/*
 * ZADATAK 08112009 - 08112009
 * Suma parnih prirodnih brojeva od k do n.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112009.htm
 */

#include <stdio.h>

int main ()
{
int i, s, n, k;                // deklarisanje varijabli
printf("Od broja: ");          // ime varijable cija vrijednost se ucitava
scanf("%d", &k);               // upis broja od kojeg se ispisuje
printf("Do broja: ");          // ime varijable cija vrijednost se ucitava
scanf("%d", &n);               // upis broja do kojeg se ispisuje
s = 0;                         // pocetna vrijednost kumulativne sume
for (i=k; i<=n; i++)           // ponavljanje za i=k do i=n - pocetak petlje
if(i%2==0)                  // i parno, ostatak dijeljenja sa 2 je nula ?
s = s + i;              // kumulativna suma parnih brojeva
printf("Suma iznosi: %d", s);   // ispis vrijednost s
return 0;
}

II Varijanta  s += i
// 08112009;
#include <stdio.h>

int main ()
{
int i, s, n, k;                // deklarisanje varijabli
printf("Od broja: ");          // ime varijable cija vrijednost se ucitava
scanf("%d", &k);               // upis broja od kojeg se ispisuje
printf("Do broja: ");          // ime varijable cija vrijednost se ucitava
scanf("%d", &n);               // upis broja do kojeg se ispisuje
s = 0;                         // pocetna vrijednost kumulativne sume
for (i=k; i<=n; i++)           // ponavljanje za i=k do i=n - pocetak petlje
if(i%2==0)                  // i parno, ostatak dijeljenja sa 2 je nula ?
s += i;                 // kumulativna suma parnih brojeva s = s + i
printf("Suma iznosi: %d", s);   // ispis vrijednost s
return 0;
}