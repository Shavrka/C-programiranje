/*
 * ZADATAK 26 - 06411062
 * Izračunati obim kocke.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411062.htm
 */

#include <stdio.h>

int main()
{
int a, obim;                                   // deklarisanje varijabli

printf("Ucitaj vrijednost stranice kocke: ");  // ime varijable cija vrijednost se ucitava
scanf("%d",&a);                                // ucitavanje vrijednosti varijable sa tastature

obim = 12*a;                                   // obim kocke
printf("Obim kocke je: %d", obim);             // ispis vrijednosti obima

return 0;
}

II varijanta
// 06411062
#include <stdio.h>

int main()
{
int a;                                         // deklarisanje varijable

printf("Ucitaj vrijednost stranice kocke: ");  // ime varijable cija vrijednost se ucitava
scanf("%d",&a);                                // ucitavanje vrijednosti varijable sa tastature

printf("Obim kocke je: %d",12*a);              // ispis vrijednosti obima

return 0;
}