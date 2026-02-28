/*
 * ZADATAK 53 - 06411060
 * Za poznate vrijednosti površine i baze valjka izračunati odgovarajuću visinu.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411060.htm
 */

#include <stdio.h>
int main()
{
float P,B,h;                      // deklarisanje varijable

printf("Ucitaj povrsinu valjka: "); // ime varijable cija vrijednost se ucitava
scanf("%f",&P);                     // ucitavanje vrijednosti
printf("Ucitaj bazu valjka: ");     // ime varijable cija vrijednost se ucitava
scanf("%f",&B);                     // ucitavanje vrijednosti

h = P / B;                              //Visina valjka
printf("Visina valjka je: %.2f",h); // ispis vrijednosti
return 0;
}

II varijanta
// 06411060
#include <stdio.h>
int main()
{
float P,B;                        // deklarisanje varijable

printf("Ucitaj povrsinu valjka: "); // ime varijable cija vrijednost se ucitava
scanf("%f",&P);                     // ucitavanje vrijednosti
printf("Ucitaj bazu valjka: ");     // ime varijable cija vrijednost se ucitava
scanf("%f",&B);                     // ucitavanje vrijednosti

printf("Visina valjka je: %.2f", P / B); // ispis vrijednosti
return 0;
}