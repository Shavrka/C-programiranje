/*
 * ZADATAK 8 - 06411136
 * Izračunati aritmetičku sredinu dva broja.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411136.htm
 */

#include <stdio.h>
int main()
{
int a, b;   // deklarisanje varijabli

printf("1. broj: ");      // ime varijable cija vrijednost se ucitava
scanf("%d", &a);      // ucitavanje vrijednosti varijable sa tastature
printf("2. broj: ");      // ime varijable cija vrijednost se ucitava
scanf("%d", &b);      // ucitavanje vrijednosti varijable sa tastature

float aSredina = (a + b) / 2.;  // aritmeticka sredina dva broja

printf("Aritmeticka sredina dva broja je: %.2f", aSredina); // ispis vrijednosti

return 0;
}

II varijanta
// 06411136
#include <stdio.h>
int main()
{
int a, b;   // deklarisanje varijabli

printf("1. broj: ");      // ime varijable cija vrijednost se ucitava
scanf("%d", &a);      // ucitavanje vrijednosti varijable sa tastature
printf("2. broj: ");      // ime varijable cija vrijednost se ucitava
scanf("%d", &b);      // ucitavanje vrijednosti varijable sa tastature

printf("Aritmeticka sredina dva broja je: %.2f", (a + b) / 2.); // ispis vrijednosti

return 0;
}