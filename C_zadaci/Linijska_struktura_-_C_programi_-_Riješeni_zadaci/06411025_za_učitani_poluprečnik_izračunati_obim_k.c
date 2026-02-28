/*
 * ZADATAK 37 - 06411025
 * Za učitani poluprečnik izračunati obim kruga.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411025.htm
 */

#include <stdio.h>
#include <math.h>
int main()
{
float r, obim;                   // deklarisanje varijable
printf("Radijus: ");             // ime varijable cija vrijednost se ucitava
scanf("%f", &r);                 // ucitavanje vrijednosti

obim = 2*r*M_PI;                 // obim kruga
printf("Obim = %.2f\n", obim);  // ispis vrijednosti
return 0;
}

II varijanta
// 06411025
#include <stdio.h>
#define PI 3.1415
int main()
{
float r, obim;                   // deklarisanje varijable
printf("Radijus: ");             // ime varijable cija vrijednost se ucitava
scanf("%f", &r);                 // ucitavanje vrijednosti

obim = 2*r*PI;                   // obim kruga
printf("Obim = %.2f\n", obim);  // ispis vrijednosti
return 0;
}

III varijanta
// 06411025
#include <stdio.h>
#include <math.h>
int main()
{
float r;                   // deklarisanje varijable
printf("Radijus: ");             // ime varijable cija vrijednost se ucitava
scanf("%f", &r);                 // ucitavanje vrijednosti

printf("Obim = %.2f\n", 2*r*M_PI);  // ispis vrijednosti
return 0;
}