/*
 * ZADATAK 25 - 06411076
 * Izračunati obim kvadrata.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411076.htm
 */

#include <stdio.h>
int main()
{
int a, obim;                                 // deklarisanje varijabli

printf("Ucitaj duzinu stranice kvadrata: "); // ime varijabli cije vrijednosti se ucitavaju
scanf("%d",&a);                              // ucitavanje vrijednosti varijabli sa tastature
obim = 4*a;                                  // obim kvadrata

printf("Obim kvadrata iznosi: %d", obim);    // ispis vrijednosti

return 0;
}

II varijanta
// 06411076
#include <stdio.h>
int main()
{
int a;   // deklarisanje varijable

printf("Ucitaj duzinu stranice kvadrata: "); // ime varijabli cije vrijednosti se ucitavaju
scanf("%d",&a);                              // ucitavanje vrijednosti varijabli sa tastature

printf("Obim kvadrata iznosi: %d", 4 * a);   // ispis vrijednosti

return 0;
}