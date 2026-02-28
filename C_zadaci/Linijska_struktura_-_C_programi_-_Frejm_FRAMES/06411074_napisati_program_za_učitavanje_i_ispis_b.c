/*
 * ZADATAK 06411074 - 06411074
 * Napisati program za učitavanje i ispis broja.
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06411074.htm
 */

#include <stdio.h>
int main()
{
int broj;                           // deklarisanje varijable broj
printf("Ucitaj broj: ");            // ime varijable cija vrijednost se ucitava
scanf("%d",&broj);                  // ucitavanje vrijednosti varijable broj sa tastature
printf("Ucitani broj je %d",broj);  // ispis vrijednosti varijable broj

return 0;
}