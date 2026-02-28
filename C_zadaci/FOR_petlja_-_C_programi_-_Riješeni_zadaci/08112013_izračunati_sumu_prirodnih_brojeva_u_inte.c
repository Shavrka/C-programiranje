/*
 * ZADATAK 96 - 08112013
 * Izračunati sumu prirodnih brojeva u intervalu od 1 do n čija je cifra jedinica 8.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08112013.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,n;
float suma;

printf("Do broja: ");
scanf("%d",&n);

for(i = 1; i <= n; i++)	       // ponavljanje za i=1 do i=17 - pocetak petlje
if(i % 10 == 8)	       // provjera da li je cifra jedinica 8
suma+=i;       // nova vrijednost sume suma = suma + i
printf("Suma je: %f",suma);

return 0;
}