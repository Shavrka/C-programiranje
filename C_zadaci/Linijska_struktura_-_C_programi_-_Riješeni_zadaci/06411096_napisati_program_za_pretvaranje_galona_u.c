/*
 * ZADATAK 73 - 06411096
 * Napisati program za pretvaranje galona u litre. (1 galon = 4.54 litre).
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411096.htm
 */

#include <stdio.h>
int main()
{
double x, y;                       // deklarisanje varijabli
printf("Zapremninu u galonima: "); // ime varijable cija vrijednost se ucitava
scanf("%f",&x);                    // ucitavanje vrijednosti varijable sa tastature

y = x * 4.54;                      // pretvaranje u litre
printf("Zapremnina u litrima je: %.3f\n", y); // ispis vrijednosti
return 0;
}

II varijanta
// 06411096
#include <stdio.h>
int main()
{
double x;                          // deklarisanje varijabli
printf("Zapremninu u galonima: "); // ime varijable cija vrijednost se ucitava
scanf("%f",&x);                    // ucitavanje vrijednosti varijable sa tastature

printf("Zapremnina u litrima je: %.3f\n", x * 4.54); //  ispis vrijednosti
return 0;
}