/*
 * ZADATAK 79 - 06411100
 * Napisati program za pretvaranje dužine puta u kilometrima u dužinu u miljama (1 milja = 1,825 km).
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411100.htm
 */

#include <stdio.h>
int main()
{
float m, km;                      // deklarisanje varijabli
printf("Duzinu u kilometrima: "); // ime varijable cija vrijednost se ucitava
scanf("%f", &km);                 // ucitavanje vrijednosti varijable sa tastature

m = km / 1.825;                   // pretvaranje kilometra u milje
printf("Duzina u miljama = %.2f\n", m); // ispis vrijednosti
return 0;
}

II varijanta
// 06411100
#include <stdio.h>
int main()
{
float km;                         // deklarisanje varijabli
printf("Duzinu u kilometrima: "); // ime varijable cija vrijednost se ucitava
scanf("%f", &km);                 // ucitavanje vrijednosti varijable sa tastature

printf("Duzina u miljama = %.2f\n", km / 1.825); // ispis vrijednosti
return 0;
}