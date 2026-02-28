/*
 * ZADATAK 132 - 06411157
 * Učitati 4 cijela broja i izračunati aritmetičku sredinu koristeći samo varijable x, s i as.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411157.htm
 */

#include <stdio.h>
int main()
{
int x, suma;              // deklarisanje varijabli
float as;                 // deklarisanje varijabli
printf("Prvi broj: ");    // ime varijable cija vrijednost se ucitava
scanf("%d", &suma);       // ucitavanje vrijednosti varijable sa tastature
printf("Drugi broj: ");   // ime varijable cija vrijednost se ucitava
scanf("%d", &x);          // ucitavanje vrijednosti varijable sa tastature
suma = suma + x;          // nova vrijednost sume = na staru vijednost sume dodaaj x
printf("Treci broj: ");   // ime varijable cija vrijednost se ucitava
scanf("%d", &x);          // ucitavanje vrijednosti varijable sa tastature
suma = suma + x;          // nova vrijednost sume = na staru vijednost sume dodaaj x
printf("Cetvrti broj: "); // ime varijable cija vrijednost se ucitava
scanf("%d", &x);          // ucitavanje vrijednosti cetvrtog broja sa tastature
suma = suma + x;          // nova vrijednost sume = na staru vijednost sume dodaaj x

as = suma/4;              // prosjecna vrijednost suma /4
printf("Aritmeticka sredina = %.3f", as); // ispis vrijednosti
return 0;
}