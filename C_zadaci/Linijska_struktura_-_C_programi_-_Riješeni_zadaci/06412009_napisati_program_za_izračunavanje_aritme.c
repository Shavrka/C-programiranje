/*
 * ZADATAK 9 - 06412009
 * Napisati program za izračunavanje aritmetičku sredinu tri broja.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06412009.htm
 */

#include <stdio.h>
int main()
{
int a, b, c;              // deklarisanje varijabli

printf("1. broj: ");      // ime varijable cija vrijednost se ucitava
scanf("%d", &a);          // ucitavanje vrijednosti varijable sa tastature
printf("2. broj: ");      // ime varijable cija vrijednost se ucitava
scanf("%d", &b);          // ucitavanje vrijednosti varijable sa tastature
printf("3. broj: ");      // ime varijable cija vrijednost se ucitava
scanf("%d", &c);          // ucitavanje vrijednosti varijable sa tastature

float asr = (a+b+c)/3.;   // deklarisi i izracunaj

printf("Aritmeticka sredina tri broja = %.3f", asr); // ispis vrijednosti

return 0;
}

II varijanta racunaj u ispisu
// 06412009
#include <stdio.h>
int main()
{
int a, b, c;              // deklarisanje varijabli

printf("1. broj: ");      // ime varijable cija vrijednost se ucitava
scanf("%d", &a);          // ucitavanje vrijednosti varijable sa tastature
printf("2. broj: ");      // ime varijable cija vrijednost se ucitava
scanf("%d", &b);          // ucitavanje vrijednosti varijable sa tastature
printf("3. broj: ");      // ime varijable cija vrijednost se ucitava
scanf("%d", &c);          // ucitavanje vrijednosti varijable sa tastature

printf("Aritmeticka sredina tri broja = %.3f", (a + b + c) / 3.); // ispis vrijednosti

return 0;
}