/*
 * ZADATAK 25 - 08111001
 * Ispisati prirodne brojeve od 1 do n.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08111001.htm
 */

#include <stdio.h>

int main()
{
int i, n;                 // deklarisanje varijabli i, n
printf("Do broja: ");     // ime varijable cija vrijednost se ucitava
scanf("%d", &n);          // ucitavanje vrijednosti varijable n sa tastature

for(i=1; i <= n; ++i)     // ponavljanje za i=1 do i=n - pocetak petlje
printf("i= %d\n", i);  // ispis vrijednost i
return 0;
}

II varijanta   for(int i = 1;
// 08111001
#include <stdio.h>

int main()
{
int n;                       // deklarisanje varijabli i, n
printf("Do broja: ");        // ime varijable cija vrijednost se ucitava
scanf("%d", &n);             // ucitavanje vrijednosti varijable n sa tastature

for(int i = 1; i <= n; ++i)  // deklarisanje varijable i; ponavljanje za i=1 do i=n - pocetak petlje
printf("i= %d\n", i);     // ispis vrijednost i
return 0;
}