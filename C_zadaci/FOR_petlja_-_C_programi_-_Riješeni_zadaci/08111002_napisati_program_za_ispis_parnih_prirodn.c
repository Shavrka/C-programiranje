/*
 * ZADATAK 34 - 08111002
 * Napisati program za ispis parnih prirodnih brojeva od 1 do n.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08111002.htm
 */

#include <stdio.h>

int main ()
{
int i, n;                       // deklarisanje varijabli i, n
printf("Parni od 1 do n  \n");  // naslov   \n - prelazak u novi red
printf("Do broja: ");           // ime varijable cija vrijednost se ucitava
scanf("%d", &n);                // ucitavanje vrijednosti varijable n sa tastature
for(i = 1; i <= n; i++)         // ponavljanje za i=1 do i=n - pocetak petlje
if(i % 2 == 0)              // i parno (djeljivo sa 2)? - provjera da li je broj parana (djeljiv sa 2)
printf("%d\n", i);      // parno i (djeljivo sa 2): ispis i   \n - novi red poslije svakog ispisa
return 0;
}

II varijanta   for(int i = 1;
// 08111002
#include <stdio.h>

int main ()
{
int n;                          // deklarisanje varijabli i, n
printf("Parni od 1 do n  \n");  // naslov   \n - prelazak u novi red
printf("Do broja: ");           // ime varijable cija vrijednost se ucitava
scanf("%d", &n);                // ucitavanje vrijednosti varijable n sa tastature
for(int i = 1; i <= n; i++)     // deklarisanje varijable i; ponavljanje za i=1 do i=n - pocetak petlje
if(i % 2 == 0)              // i parno (djeljivo sa 2)? - provjera da li je broj parana (djeljiv sa 2)
printf("%d\n", i);      // parno i (djeljivo sa 2): ispis i   \n - novi red poslije svakog ispisa
return 0;
}

III varijanta  i = i + 2)
// 08111002;
#include <stdio.h>

int main ()
{
int i, n;                        // deklarisanje varijabli i, n
printf("Parni od 1 do n  \n");   // naslov   \n - prelazak u novi red
printf("Do broja: ");
scanf("%d", &n);;                // ucitavanje vrijednosti varijable n sa tastature

for(i = 2; i <= n; i = i + 2)    // ponavljanje za i=2 do i=n sa korakom 2 - pocetak petlje
printf("%d\n", i);           // \n - novi red poslije svakog ispisa

return 0;
}