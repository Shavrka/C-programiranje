/*
 * ZADATAK 06411141 - 06411141
 * Učitati 2 broja. Izračunati korijen aritmetičke sredine njihovih apsolutnih vrijednosti.
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06411141.htm
 */

#include <stdio.h>
#include <stdlib.h>    // biblioteka za abs
#include <math.h>      // biblioteka za sqrt
int main()
{
int a, b;                            // deklarisanje varijabli
double apsolutnaSredinta, dKorijen;  // deklarisanje varijabli

printf("1. broj: ");  // ime varijable cija vrijednost se ucitava
scanf("%d", &a);      // ucitavanje vrijednosti varijable a sa tastature
printf("2. broj: ");  // ime varijable cija vrijednost se ucitava
scanf("%d", &b);      // ucitavanje vrijednosti varijable b sa tastature

apsolutnaSredinta = (abs(a) + abs(b)) /2.0;  // aritmeticka sredina
dKorijen=sqrt(apsolutnaSredinta);        // korijen aritmeticke sredine

printf("(abs(a) + abs(b))/2 = (abs(%d)+ abs(%d))/2 = %f\n", a, b, apsolutnaSredinta);
printf("kvadrtani korijen (%f) = %f\n", apsolutnaSredinta, dKorijen);

return 0;
}

II varijanta
// 06411141
#include <stdio.h>
#include <stdlib.h>    // biblioteka za abs
#include <math.h>      // biblioteka za pow
int main()
{
int a, b;                            // deklarisanje varijabli
double apsolutnaSredinta, dKorijen;  // deklarisanje varijabli

printf("1. broj: ");  // ime varijable cija vrijednost se ucitava
scanf("%d", &a);      // ucitavanje vrijednosti varijable a sa tastature
printf("2. broj: ");  // ime varijable cija vrijednost se ucitava
scanf("%d", &b);      // ucitavanje vrijednosti varijable b sa tastature

apsolutnaSredinta = (abs(a) + abs(b)) /2.0;  // aritmeticka sredina
dKorijen = pow(apsolutnaSredinta, 0.5);      // korijen aritmeticke sredine

printf("(abs(a) + abs(b))/2 = (abs(%d)+ abs(%d))/2 = %f\n", a, b, apsolutnaSredinta);
printf("kvadrtani korijen (%f) = %f\n", apsolutnaSredinta, dKorijen);

return 0;
}