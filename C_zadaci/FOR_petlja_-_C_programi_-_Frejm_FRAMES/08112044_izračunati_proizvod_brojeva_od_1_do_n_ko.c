/*
 * ZADATAK 08112044 - 08112044
 * Izračunati proizvod brojeva od 1 do n koji su djeljivi sa 7.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112044.htm
 */

#include <stdio.h>

int main()
{
int i,n;
double p;

printf("Do broja: ");
scanf("%d",&n);

p=1;

for(i=1; i <= n; i++)    // ponavljanje za i=1 do i=n - pocetak petlje
if(i % 7 == 0)	     // provjera da li je broj djeljiv sa 7
p = p * i;       // nova vrijednost proizvoda

printf("Proizvod brojeva djeljivih sa 7 do n iznosi: %lf \n", p);
return 0;
}