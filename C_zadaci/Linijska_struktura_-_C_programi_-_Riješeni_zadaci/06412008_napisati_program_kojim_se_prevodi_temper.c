/*
 * ZADATAK 77 - 06412008
 * Napisati program kojim se prevodi temperatura iz skale Celzija u skalu Farenhajta.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06412008.htm
 */

#include<stdio.h>
int main()
{
float tc,tf;                                  // deklarisanje varijable
printf("Ucitaj temperaturu u Celzijusima: "); // ime varijable cija vrijednost se ucitava
scanf("%f",&tc);                              // ucitavanje vrijednosti varijable sa tastature
tf=tc*1.8+32;                                 // pretvaranje
printf("Temperatura napisana u Celzijusima = %.1f\n", tc); // ispis vrijednosti
printf("Temperatura napisana u Farenhajtima = %.1f", tf);  // ispis vrijednosti
return 0;
}

II varijanta
// 06412008
#include<stdio.h>
int main()
{
float tc;                                     // deklarisanje varijable
printf("Ucitaj temperaturu u Celzijusima: "); // ime varijable cija vrijednost se ucitava
scanf("%f",&tc);                              // ucitavanje vrijednosti varijable sa tastature
printf("Temperatura napisana u Celzijusima = %.1f\n", tc);        // ispis vrijednosti
printf("Temperatura napisana u Farenhajtima = %.1f", tc*1.8+32);  // ispis vrijednosti
return 0;
}