/*
 * ZADATAK 29 - 08111004
 * Napisati program za ispis recipročnih vrijednosti prvih n prirodnih brojeva.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08111004.htm
 */

#include <stdio.h>

int main ()
{
int i, n;                     // deklarisanje varijabli i, n
printf("Do broja: ");
scanf("%d", &n);              // ucitavanje vrijednosti varijable n sa tastature

for (i = 1; i <= n; i++)      // ponavljanje za i=1 do i=n - pocetak petlje
printf("%f\n", 1.0/i);    // \n - novi red poslije svakog ispisa
return 0;
}

II varijanta tip podataka float
// 08111004
#include <stdio.h>

int main ()
{
float i, n;                   // deklarisanje varijabli i, n
printf("Do broja: ");
scanf("%f", &n);              // ucitavanje vrijednosti varijable n sa tastature

for (i = 1; i <= n; i++)      // ponavljanje za i=1 do i=n - pocetak petlje
printf("%f\n", 1/i);      // \n - novi red poslije svakog ispisa
return 0;
}