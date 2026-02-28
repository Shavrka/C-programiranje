/*
 * ZADATAK 39 - 06411079
 * Za poznati poluprečnik izračunati obim i površinu kruga.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411079.htm
 */

#include <stdio.h>
#include <math.h>
int main()
{
float r, obim, povrsina;  // deklarisanje varijable
printf("Radijus: ");      // ime varijable cija vrijednost se ucitava
scanf("%f", &r);          // ucitavanje vrijednosti

obim = 2*r*M_PI;          // obim kruga
povrsina = r*r*M_PI;      // povrsina kruga
printf("Obim je %.2f\n", obim);  // ispis vrijednosti
printf("Povrsina kruga = %.2f\n", povrsina);  // ispis vrijednosti
return 0;
}

II varijanta
// 06411079
#include <stdio.h>
#define PI 3.1415
int main()
{
float r, obim, povrsina; // deklarisanje varijable
printf("Radijus: ");     // ime varijable cija vrijednost se ucitava
scanf("%f", &r);         // ucitavanje vrijednosti

obim = 2*r*PI;           // obim kruga
povrsina = r*r*PI;       // povrsina kruga
printf("Obim je %.2f\n", obim);  // ispis vrijednosti
printf("Povrsina kruga = %.2f\n", povrsina);  // ispis vrijednosti
return 0;
}

III varijanta
// 06411079
#include <stdio.h>
#include <math.h>
int main()
{
float r;                // deklarisanje varijable
printf("Radijus: ");    // ime varijable cija vrijednost se ucitava
scanf("%f", &r);        // ucitavanje vrijednosti

printf("Obim je %.2f\n", 2*r*M_PI);  // ispis vrijednosti
printf("Povrsina kruga = %.2f\n",  r*r*M_PI);  // ispis vrijednosti
return 0;
}