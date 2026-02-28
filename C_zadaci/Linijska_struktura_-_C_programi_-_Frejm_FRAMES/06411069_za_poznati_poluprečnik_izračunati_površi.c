/*
 * ZADATAK 06411069 - 06411069
 * Za poznati poluprečnik izračunati površinu i zapreminu lopte.
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06411069.htm
 */

#include <stdio.h>
#include <math.h>
int main()
{
float r, P, V;                   // deklarisanje varijable
printf("Ucitaj poluprecnik lopte: ");    // ime varijable cija vrijednost se ucitava
scanf("%f", &r);                 // ucitavanje vrijednosti

P = 4 * r*r * M_PI;              // povrsinu
V = 4 * r*r*r * M_PI/3;          // zapremina
printf("Povrsina lopte = %.2f", P);      // ispis vrijednosti
printf("\nZapremina lopte = %.2f\n", V); // ispis vrijednosti
return 0;
}

II varijanta
// 06411069
#include <stdio.h>
#define PI 3.1415
int main()
{
float r, P, V;                   // deklarisanje varijable
printf("Ucitaj poluprecnik lopte: ");    // ime varijable cija vrijednost se ucitava
scanf("%f", &r);                 // ucitavanje vrijednosti

P = 4 * r*r * PI;                // povrsinu
V = 4 * r*r*r * PI/3;            // zapremina
printf("Povrsina lopte = %.2f", P);      // ispis vrijednosti
printf("\nZapremina lopte = %.2f\n", V); // ispis vrijednosti
return 0;
}

III varijanta
// 06411069
#include <stdio.h>
#include <math.h>
int main()
{
float r;                         // deklarisanje varijable
printf("Ucitaj poluprecnik lopte: ");    // ime varijable cija vrijednost se ucitava
scanf("%f", &r);                 // ucitavanje vrijednosti

printf("Povrsina lopte = %.2f", 4 * r*r * M_PI);          // ispis vrijednosti
printf("\nZapremina lopte = %.2f\n", 4 * r*r*r * M_PI/3); // ispis vrijednosti
return 0;
}