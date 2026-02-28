/*
 * ZADATAK 13 - 06411024
 * Izračunati kvadratni korijen učitanog broja i ispisati kao novu varijablu. Koristiti funkcije. (Obavezno učitati nenegatvni broj)
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411024.htm
 */

#include <stdio.h>
#include <math.h>
int main()
{
int broj;                // deklarisanje varijable
double korijen;          // deklarisanje varijable

printf("Ucitaj broj: "); // ime varijable cija vrijednost se ucitava
scanf("%d",&broj);       // ucitavanje vrijednosti varijable sa tastature

korijen=sqrt(broj);      // korijen broja
printf("Korijen unesenog broja: %.3f", korijen);   // ispis vrijednosti

return 0;
}

II varijanta
// 06411024
#include <stdio.h>
#include <math.h>
int main()
{
int broj;                 // deklarisanje varijable
double korijen;           // deklarisanje varijable

printf("Ucitaj broj: ");  // ime varijable cija vrijednost se ucitava
scanf("%d",&broj);        // ucitavanje vrijednosti varijable sa tastature

korijen = pow(broj, 0.5); // kvadratni korijen broja
printf("Korijen unesenog broja: %.3f", korijen);   // ispis vrijednosti

return 0;
}

III varijanta
// 06411024
#include <stdio.h>
#include <math.h>
int main()
{
int broj;                // deklarisanje varijable

printf("Ucitaj broj: "); // ime varijable cija vrijednost se ucitava
scanf("%d",&broj);       // ucitavanje vrijednosti varijable sa tastature

printf("Korijen unesenog broja: %.3f", sqrt(broj));   // ispis vrijednosti

return 0;
}