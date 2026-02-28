/*
 * ZADATAK 06411144 - 06411144
 * Izračunati korijen sume kvadrata tri učitana broja.
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06411144.htm
 */

#include <stdio.h>
#include <math.h>
int main()
{
float a, b, c, s;     // deklarisanje varijabli
printf("1. broj: ");  // ime varijable cija vrijednost se ucitava
scanf("%f", &a);      // ucitavanje vrijednosti varijable a sa tastature
printf("2. broj: ");  // ime varijable cija vrijednost se ucitava
scanf("%f", &b);      // ucitavanje vrijednosti varijable b sa tastature
printf("3. broj: ");  // ime varijable cija vrijednost se ucitava
scanf("%f", &c);      // ucitavanje vrijednosti varijable c sa tastature

s = sqrt(pow(a,2) + pow(b,2) + pow(c,2));            // korijen sume kvadrata
printf("Korijen sume kvadrata = %f", s);  // ispis vrijednosti
return 0;
}

II varijanta
// 06411143
#include <stdio.h>
#include <math.h>
int main()
{
float a, b, c, s;     // deklarisanje varijabli
printf("1. broj: ");  // ime varijable cija vrijednost se ucitava
scanf("%f", &a);      // ucitavanje vrijednosti varijable a sa tastature
printf("2. broj: ");  // ime varijable cija vrijednost se ucitava
scanf("%f", &b);      // ucitavanje vrijednosti varijable b sa tastature
printf("3. broj: ");  // ime varijable cija vrijednost se ucitava
scanf("%f", &c);      // ucitavanje vrijednosti varijable c sa tastature

s = pow((pow(a,2) + pow(b,2) + pow(c,2)), 0.5);  // korijen sume kvadrata
printf("Korijen sume kvadrata = %f", s);         // ispis vrijednosti
return 0;
}

III varijanta
// 06411143
#include <stdio.h>
#include <math.h>
int main()
{
float a, b, c;        // deklarisanje varijabli
printf("1. broj: ");  // ime varijable cija vrijednost se ucitava
scanf("%f", &a);      // ucitavanje vrijednosti varijable a sa tastature
printf("2. broj: ");  // ime varijable cija vrijednost se ucitava
scanf("%f", &b);      // ucitavanje vrijednosti varijable b sa tastature
printf("3. broj: ");  // ime varijable cija vrijednost se ucitava
scanf("%f", &c);      // ucitavanje vrijednosti varijable c sa tastature

printf("Korijen sume kvadrata = %f", sqrt(pow(a,2) + pow(b,2) + pow(c,2)));  // ispis vrijednosti
return 0;
}