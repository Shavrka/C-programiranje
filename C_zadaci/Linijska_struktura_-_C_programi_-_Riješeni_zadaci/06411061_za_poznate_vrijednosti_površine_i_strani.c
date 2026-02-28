/*
 * ZADATAK 48 - 06411061
 * Za poznate vrijednosti površine i stranice trougla izračunati odgovarajuću visinu (P=a*h/2) .
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411061.htm
 */

#include <stdio.h>
int main()
{
float P, h, a;                              // deklarisanje varijabli

printf("Ucitaj stranicu trougla a: ");      // ime varijable cija vrijednost se ucitava
scanf("%d", &a);                            // ucitavanje stranice
printf("Ucitaj povrsinu trougla: ");        // ime varijable cija vrijednost se ucitava
scanf("%d", &P);                            // ucitavanje povrsine

h = 2 * P / a;                              // visina trougla

printf("Visina trougla je: %.2f",h);        // ispis vrijednosti

return 0;
}

II varijanta
// 06411061
#include <stdio.h>
int main()
{
float P, a;                                // deklarisanje varijabli

printf("Ucitaj stranicu trougla a: ");        // ime varijable cija vrijednost se ucitava
scanf("%d", &a);                              // ucitavanje stranice
printf("Ucitaj povrsinu trougla: ");          // ime varijable cija vrijednost se ucitava
scanf("%d", &P);                              // ucitavanje povrsine

printf("Visina trougla je: %.2f", 2 * P / a); // ispis vrijednosti

return 0;
}