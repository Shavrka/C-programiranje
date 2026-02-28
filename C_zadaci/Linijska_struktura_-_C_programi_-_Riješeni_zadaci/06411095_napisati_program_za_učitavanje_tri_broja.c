/*
 * ZADATAK 58 - 06411095
 * Napisati program za učitavanje tri broja. Prva dva sabrati i podjeliti sa trećim.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411095.htm
 */

#include <stdio.h>
int main()
{
float a, b, c, x;         // deklarisanje varijabli
printf("unesi broj a:");  // ime varijable cija vrijednost se ucitava
scanf("%f", &a);          // ucitavanje vrijednosti varijable sa tastature
printf("unesi broj b:");  // ime varijable cija vrijednost se ucitava
scanf("%f", &b);          // ucitavanje vrijednosti varijable sa tastature
printf("unesi broj c:");  // ime varijable cija vrijednost se ucitava
scanf("%f", &c);          // ucitavanje vrijednosti varijable sa tastature

x = (a + b) / c;
printf("a=%.1f,b=%.1f,c=%.1f\n", a, b, c); // ispis vrijednosti
printf("(a+b)/c=%.1f", x);                 // ispis vrijednosti
return 0;
}

II varijanta
// 06411095
#include <stdio.h>
int main()
{
float a, b, c;            // deklarisanje varijabli
printf("unesi broj a:");  // ime varijable cija vrijednost se ucitava
scanf("%f", &a);          // ucitavanje vrijednosti varijable sa tastature
printf("unesi broj b:");  // ime varijable cija vrijednost se ucitava
scanf("%f", &b);          // ucitavanje vrijednosti varijable sa tastature
printf("unesi broj c:");  // ime varijable cija vrijednost se ucitava
scanf("%f", &c);          // ucitavanje vrijednosti varijable sa tastature

printf("a=%.1f,b=%.1f,c=%.1f\n", a, b, c); // ispis vrijednosti
printf("(a+b)/c=%.1f", (a+b)/c);           // ispis vrijednosti
return 0;
}