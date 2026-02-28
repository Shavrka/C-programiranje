/*
 * ZADATAK 06411147 - 06411147
 * Poznata je površina pravougaonika i stranica a. Izračunati obim.
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06411147.htm
 */

#include <stdio.h>

int main()
{
int a, b, P, O;   // deklarisanje varijable

printf("Ucitaj povrsinu pravougaonika: ");            // ime varijable cija vrijednost se ucitava
scanf("%d", &p);                                      // ucitavanje vrijednosti
printf("Ucitaj povrsinu i stranicu pravougaonika: "); // ime varijable cija vrijednost se ucitava
scanf("%d", &a);                                      // ucitavanje vrijednosti

b = P / a;                                            // stranica b
O = 2 * a + 2 * b;                                    // obim

printf("Stranica b je = %d", b);                      // ispis vrijednosti
printf("Obim pravougaonika je = %d", O);              // ispis vrijednosti

return 0;
}

II varijanta
// 06411147
#include <stdio.h>

int main()
{
int a, b, P, O;   // deklarisanje varijable

printf("Ucitaj povrsinu pravougaonika: ");            // ime varijable cija vrijednost se ucitava
scanf("%d", &p);                                      // ucitavanje vrijednosti
printf("Ucitaj povrsinu i stranicu pravougaonika: "); // ime varijable cija vrijednost se ucitava
scanf("%d", &a);                                      // ucitavanje vrijednosti

b = P / a;                                            // stranica b

printf("Stranica b je = %d", b);                      // ispis vrijednosti
printf("Obim pravougaonika je = %d", 2 * a + 2 * b);  // ispis vrijednosti

return 0;
}