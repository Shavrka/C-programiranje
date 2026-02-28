/*
 * ZADATAK 38 - 06411064
 * Za učitani poluprečnik izračunati površinu kruga.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411064.htm
 */

#include <stdio.h>
#include <math.h>
int main()
{
float r, povrsina;     // deklarisanje varijable
printf("Radijus: ");   // ime varijable cija vrijednost se ucitava
scanf("%f", &r);       // ucitavanje vrijednosti

povrsina = r*r*M_PI;   // povrsina kruga
printf("Povrsina kruga = %.2f\n", povrsina);  // ispis vrijednosti
return 0;
}

II varijanta
// 06411064
#include <stdio.h>
#define PI 3.1415
int main()
{
float r, povrsina;      // deklarisanje varijable
printf("Radijus: ");    // ime varijable cija vrijednost se ucitava
scanf("%f", &r);        // ucitavanje vrijednosti

povrsina = r*r*PI;      // povrsina kruga
printf("Povrsina kruga = %.2f\n", povrsina);  // ispis vrijednosti
return 0;
}

III varijanta
// 06411064
#include <stdio.h>
#include <math.h>
int main()
{
float r;                // deklarisanje varijable
printf("Radijus: ");    // ime varijable cija vrijednost se ucitava
scanf("%f", &r);        // ucitavanje vrijednosti

printf("Povrsina kruga = %.2f\n",  r*r*M_PI);  // ispis vrijednosti
return 0;
}