/*
 * ZADATAK 06411148 - 06411148
 * Poznata je površina pravougaonika i stranica a. Izračunati dijagonalu.
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06411148.htm
 */

#include <stdio.h>
#include <math.h>
int main()
{
int a, b, P, d;   // deklarisanje varijable

printf("Ucitaj povrsinu pravougaonika: ");            // ime varijable cija vrijednost se ucitava
scanf("%d", &p);                                      // ucitavanje vrijednosti
printf("Ucitaj povrsinu i stranicu pravougaonika: "); // ime varijable cija vrijednost se ucitava
scanf("%d", &a);                                      // ucitavanje vrijednosti

b = P / a;                                            // stranica b
d = pow((a*a + b*b), 0.5);                            // dijagonala

printf("Stranica b je = %d", b);                      // ispis vrijednosti
printf("Obim pravougaonika je = %d", d);              // ispis vrijednosti

return 0;
}

II varijanta
// 06411148
#include <stdio.h>
#include <math.h>
int main()
{
int a, b, P, d;   // deklarisanje varijable

printf("Ucitaj povrsinu pravougaonika: ");            // ime varijable cija vrijednost se ucitava
scanf("%d", &p);                                      // ucitavanje vrijednosti
printf("Ucitaj povrsinu i stranicu pravougaonika: "); // ime varijable cija vrijednost se ucitava
scanf("%d", &a);                                      // ucitavanje vrijednosti

b = P / a;                                            // stranica b
d = pow((a*a + b*b), 0.5);                            // dijagonala

printf("Stranica b je = %d", b);                      // ispis vrijednosti
printf("Obim pravougaonika je = %d", d);              // ispis vrijednosti

return 0;
}