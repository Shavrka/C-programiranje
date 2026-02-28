/*
 * ZADATAK 06411089 - 06411089
 * Za poznatu površinu kruga izračunati poluprečnik i obim kruga.
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06411089.htm
 */

#include <stdio.h>
#include <math.h>
int main()
{
float povrsina, r, obim;         // deklarisanje varijable
printf("Povrsina: ");            // ime varijable cija vrijednost se ucitava
scanf("%f", &povrsina);          // ucitavanje vrijednosti

r = sqrt(povrsina/M_PI);         // radijus
obim = 2 * r * M_PI;             // obim kruga
printf("Obim je %.2f\n", obim);  // ispis vrijednosti
return 0;
}

II varijanta
// 06411089
#include <stdio.h>
#include <math.h>
#define PI 3.1415
int main()
{
float povrsina, r, obim;         // deklarisanje varijable
printf("Povrsina: ");            // ime varijable cija vrijednost se ucitava
scanf("%f", &povrsina);          // ucitavanje vrijednosti

r = sqrt(povrsina/PI);           // radijus
obim = 2 * r * PI;               // obim kruga
printf("Obim je %.2f\n", obim);  // ispis vrijednosti
return 0;
}