/*
 * ZADATAK 10 - 06411021
 * Izračunati kvadrat učitanog broja i ispisati kao novu varijablu. Koristiti funkcije.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411021.htm
 */

#include <stdio.h>
#include <math.h>
int main()
{
float broj, kvadrat;       // deklarisanje varijabli

printf("Ucitaj broj: ");   // ime varijable cija vrijednost se ucitava
scanf("%f",&broj);         // ucitavanje vrijednosti varijable sa tastature

kvadrat=pow(broj,2);       // kvadrat broja
printf("Kvadrat unesenog broja iznosi: %.3f",kvadrat); // ispis vrijednosti
return 0;
}