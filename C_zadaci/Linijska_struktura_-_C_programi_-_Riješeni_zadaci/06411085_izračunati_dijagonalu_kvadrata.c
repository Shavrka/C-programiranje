/*
 * ZADATAK 30 - 06411085
 * Izračunati dijagonalu kvadrata.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411085.htm
 */

#include <stdio.h>
#include <math.h>
int main()
{
double a, d;                                 // deklarisanje varijabli

printf("Ucitaj duzinu stranice kvadrata: "); // ime varijable cija vrijednost se ucitava
scanf("%lf",&a);                             // ucitavanje vrijednosti stranice a sa tastature

d = a * sqrt(2);                           // dijagonala kvadrata stranice a
printf("Duzina dijagonale kvadrata iznosi: %lf", d); // ispis vrijednosti izraza

return 0;
}

II varijanta
// 06411085
#include <stdio.h>
#include <math.h>
int main()
{
double a, d;                                 // deklarisanje varijabli

printf("Ucitaj duzinu stranice kvadrata: "); // ime varijable cija vrijednost se ucitava
scanf("%lf",&a);                             // ucitavanje vrijednosti stranice a sa tastature

d = a * pow(2, 0.5);                       // dijagonala kvadrata stranice a
printf("Duzina dijagonale kvadrata iznosi: %lf", d); // ispis vrijednosti izraza

return 0;
}

III varijanta
// 06411085
#include <stdio.h>
#include <math.h>
int main()
{
double a;                                     // deklarisanje varijable

printf("Ucitaj duzinu stranice kvadrata: ");  // ime varijable cija vrijednost se ucitava
scanf("%lf",&a);                              // ucitavanje vrijednosti stranice a sa tastature

printf("Duzina dijagonale kvadrata iznosi: %lf",a*sqrt(2)); // ispis vrijednosti izraza

return 0;
}