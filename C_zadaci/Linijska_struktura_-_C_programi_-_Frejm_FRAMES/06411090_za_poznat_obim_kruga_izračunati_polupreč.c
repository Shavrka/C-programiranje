/*
 * ZADATAK 06411090 - 06411090
 * Za poznat obim kruga izračunati poluprečnik i površinu kruga.
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06411090.htm
 */

#include <stdio.h>
#include <math.h>
int main()
{
float obim, r, povrsina;         // deklarisanje varijable
printf("Obim: ");                // ime varijable cija vrijednost se ucitava
scanf("%f", &obim);              // ucitavanje vrijednosti

r = obim/(2*M_PI);               // radijus
povrsina = r*r*M_PI;             // povrsina kruga
printf("Radijus = %.2f\n", r);          // ispis vrijednosti
printf("Povrsina = %.2f\n", povrsina);  // ispis vrijednosti
return 0;
}

II varijanta
// 06411090
#include <stdio.h>
#define PI 3.1415
int main()
{
float obim, r, povrsina;         // deklarisanje varijable
printf("Obim: ");                // ime varijable cija vrijednost se ucitava
scanf("%f", &obim);              // ucitavanje vrijednosti

r = obim/(2*PI);                 // radijus
povrsina = r*r*PI;               // povrsina kruga
printf("Radijus = %.2f\n", r);          // ispis vrijednosti
printf("Povrsina = %.2f\n", povrsina);  // ispis vrijednosti
return 0;
}

III varijanta
// 06411090
#include <stdio.h>
#include <math.h>
int main()
{
float obim, r, povrsina;         // deklarisanje varijable
printf("Obim: ");                // ime varijable cija vrijednost se ucitava
scanf("%f", &obim);              // ucitavanje vrijednosti

printf("Radijus = %.3f\n", obim/(2*M_PI));   // ispis vrijednosti
printf("Povrsina = %.3f\n", obim*obim/(4*M_PI)); // ispis vrijednosti
return 0;
}