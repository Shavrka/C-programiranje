/*
 * ZADATAK 92 - 08112019
 * Izračunati sumu prirodnih brojeva u intervalu od k do n koji su djeljivi sa a.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08112019.htm
 */

#include <stdio.h>

int main ()
{
printf("Suma prirodnih brojeva od k do n - djeljivi sa a\n");  // naslov
int i, k, n, a;           // deklarisanje varijabli
double s;                 // deklarisanje varijable s

printf("Od broja: ");     // ime varijable cija vrijednost se ucitava
scanf("%d", &k);          // ucitavanje vrijednosti varijable k sa tastature
printf("Do broja: ");     // ime varijable cija vrijednost se ucitava
scanf("%d", &n);          // ucitavanje vrijednosti varijable n sa tastature

printf("Djelilac: ");
scanf("%d",&a);           // vrijednosti djelioca

s = 0;                    // pocetna vrijednost
for (i = k; i <= n; i++)  // ponavljanje za i = k do i = n - pocetak petlje
if(i % a == 0)        // broj djeljiv sa a?
s = s + i;        // da, uvecaj s za vrijednosti i; s=s+i
printf("Suma je: %f\n", s);  // ispis vrijednost s
return 0;
}

II varijanta  s += i
// 08112019
#include <stdio.h>

int main ()
{
printf("Suma prirodnih brojeva od k do n - djeljivi sa a\n");  // naslov
int i, k, n, a;           // deklarisanje varijabli
double s;                 // deklarisanje varijable s

printf("Od broja: ");     // ime varijable cija vrijednost se ucitava
scanf("%d", &k);          // ucitavanje vrijednosti varijable k sa tastature
printf("Do broja: ");     // ime varijable cija vrijednost se ucitava
scanf("%d", &n);          // ucitavanje vrijednosti varijable n sa tastature

printf("Djelilac: ");
scanf("%d",&a);           // vrijednosti djelioca

s = 0;                    // pocetna vrijednost
for (i = k; i <= n; i++)  // ponavljanje za i = k do i = n - pocetak petlje
if(i % a == 0)        // broj djeljiv sa a?
s += i;           // da, uvecaj s za vrijednosti i; s=s+i
printf("Suma je: %f\n", s);  // ispis vrijednost s
return 0;
}