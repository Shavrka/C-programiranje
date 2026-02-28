/*
 * ZADATAK 7 - 06411063
 * Izračunati kvadrat učitanog broja.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411063.htm
 */

#include <stdio.h>
int main()
{
int a, x;                  // deklarisanje varijabli

printf("Ucitaj broj: ");   // ime varijable cija vrijednost se ucitava
scanf("%d", &a);           // ucitavanje vrijednosti varijable a sa tastature
x = a * a;                 // kvadrat broja
printf("Kvadrat ucitanog broja %d  iznosi: %d", a, x); // ispis vrijednosti izraza

return 0;
}

II varijanta
// 06411063
#include <stdio.h>
#include <math.h>
int main()
{
float a, x;                // deklarisanje varijabli

printf("Ucitaj broj: ");   // ime varijable cija vrijednost se ucitava
scanf("%f", &a);           // ucitavanje vrijednosti varijable a sa tastature
x = pow(a, 2);             // pow - funkcija stepenovanja;
printf("Kvadrat ucitanog broja %f  iznosi: %.5f", a, x); // ispis vrijednosti izraza

return 0;
}

III varijanta
// 06411063
#include <stdio.h>
int main()
{
int a;                     // deklarisanje varijable a

printf("Ucitaj broj: ");   // ime varijable cija vrijednost se ucitava
scanf("%d",&a);            // ucitavanje vrijednosti varijable a sa tastature

printf("Kvadrat ucitanog broja %d iznosi: %d", a, a * a); ; // ispis vrijednosti izraza

return 0;
}