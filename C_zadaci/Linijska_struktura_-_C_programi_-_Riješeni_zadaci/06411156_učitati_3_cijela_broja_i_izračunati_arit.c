/*
 * ZADATAK 130 - 06411156
 * Učitati 3 cijela broja i izračunati aritmetičku sredinu koristeći samo varijable x, s i as.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411156.htm
 */

#include <stdio.h>
int main()
{
int x, suma;             // deklarisanje varijabli
float as;                // deklarisanje varijabli
printf("Prvi broj: ");   // ime varijable cija vrijednost se ucitava
scanf("%d", &suma);      // ucitavanje vrijednosti varijable sa tastature
printf("Drugi broj: ");  // ime varijable cija vrijednost se ucitava
scanf("%d", &x);         // ucitavanje vrijednosti varijable sa tastature
suma = suma + x;         // nova vrijednost sume = na staru vijednost sume dodaaj x
printf("Treci broj: ");  // ime varijable cija vrijednost se ucitava
scanf("%d", &x);         // ucitavanje vrijednosti varijable sa tastature
suma = suma + x;         // nova vrijednost sume = na staru vijednost sume dodaaj x

as = suma/3;             // prosjecna vrijednost suma / 3
printf("Aritmeticka sredina = %.3f", as); // ispis vrijednosti
return 0;
}