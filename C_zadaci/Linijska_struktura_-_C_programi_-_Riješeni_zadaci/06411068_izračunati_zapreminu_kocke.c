/*
 * ZADATAK 28 - 06411068
 * Izračunati zapreminu kocke.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411068.htm
 */

#include <stdio.h>
int main()
{
int a, zapremina;                          // deklarisanje varijabli
printf("Ucitaj duzinu stranice kocke: ");  // varijabla koja se ucitava
scanf("%d",&a);                            // ucitavanje vrijednosti varijabli sa tastature

zapremina = a*a*a;                         // zapremina kocke
printf("Suma kubova je: %d",iSuma);        // ispis vrijednosti
return 0;
}

II varijanta
// 06411068
#include <stdio.h>
#include <math.h>
int main()
{
int a, zapremina;                          // deklarisanje varijabli
printf("Ucitaj duzinu stranice kocke: ");  // varijabla koja se ucitava
scanf("%d",&a);                            // ucitavanje vrijednosti varijabli sa tastature

zapremina = pow(a, 3);                     // zapremina kocke
printf("Suma kubova je: %d",iSuma);        // ispis vrijednosti
return 0;
}

III varijanta
// 06411068
#include <stdio.h>
int main()
{
int a, zapremina;                          // deklarisanje varijabli
printf("Ucitaj duzinu stranice kocke: ");  // varijabla koja se ucitava
scanf("%d",&a);                            // ucitavanje vrijednosti varijabli sa tastature

printf("Suma kubova je: %d", a*a*a);       // ispis vrijednosti
return 0;
}