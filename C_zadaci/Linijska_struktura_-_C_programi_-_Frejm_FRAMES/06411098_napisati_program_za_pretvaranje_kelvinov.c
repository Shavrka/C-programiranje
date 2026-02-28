/*
 * ZADATAK 06411098 - 06411098
 * Napisati program za pretvaranje Kelvinovih stepena u Celzujsove stepene.
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06411098.htm
 */

#include <stdio.h>
int main()
{
float K,C;                           // deklarisanje varijabli
printf("Temperatura u Kelvinima: "); // ime varijable cija vrijednost se ucitava
scanf("%f", &K);                     // ucitavanje vrijednosti varijable sa tastature

C=K-273.15;                          // pretvaranje
printf("Temperatura u Celzijusima = %.1f", C);    // ispis vrijednosti
return 0;c
}

II varijanta
// 06411098
#include <stdio.h>
int main()
{
float K;                             // deklarisanje varijable
printf("Temperatura u Kelvinima: "); // ime varijable cija vrijednost se ucitava
scanf("%f", &K);                     // ucitavanje vrijednosti varijable sa tastature

printf("Temperatura u Celzijusima = %.1f", K-273.15);    // ispis vrijednosti
return 0;
}