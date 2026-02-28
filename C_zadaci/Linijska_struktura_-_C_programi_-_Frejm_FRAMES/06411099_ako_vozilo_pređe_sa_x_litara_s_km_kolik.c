/*
 * ZADATAK 06411099 - 06411099
 * Ako vozilo pređe sa x litara s km. Koliko potroši litara na 100 km.
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06411099.htm
 */

#include <stdio.h>
int main()
{
float x, s, potr;                // deklarisanje varijabli
printf("Ucitaj broj litara: ");  // ime varijable cija vrijednost se ucitava
scanf("%f",&x);                  // ucitavanje vrijednosti
printf("Ucitaj broj predjenih kilometara: ");// ime varijable cija vrijednost se ucitava
scanf("%f",&s);                  // ucitavanje vrijednosti

potr = x * 100.0 / s;            // prosječna potrošnja goriva
printf("Potrosnja goriva na 100 km je: %.1f\n", x*100.0/s); // ispis vrijednosti
return 0;
}

II varijanta
// 06411099
#include <stdio.h>
int main()
{
float x,s;                       // deklarisanje varijabli
printf("Ucitaj broj litara: ");  // ime varijable cija vrijednost se ucitava
scanf("%f",&x);                  // ucitavanje vrijednosti
printf("Ucitaj broj predjenih kilometara: ");// ime varijable cija vrijednost se ucitava
scanf("%f",&s);                  // ucitavanje vrijednosti

printf("Potrosnja goriva na 100 km je: %.1f\n", x*100.0/s); // ispis vrijednosti
return 0;
}