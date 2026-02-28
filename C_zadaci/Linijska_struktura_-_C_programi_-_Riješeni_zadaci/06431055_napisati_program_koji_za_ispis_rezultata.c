/*
 * ZADATAK 60 - 06431055
 * Napisati program koji za ispis rezultata izraza: (x-y)/3.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06431055.htm
 */

#include <stdio.h>
int main()
{
float x, y, r;                          // deklarisanje varijabli
printf("Ucitaj vrijednosti x i y: ");   // imena varijabli cija vrijednost se ucitavaju
scanf("%f %f",&x,&y);                   // ucitavanje vrijednosti varijabli sa tastature

r = (x-y)/3;                            // izracunaj izraz
printf("Rezultat izraza je: %.2f", r);  // ispis vrijednosti
return 0;
}

II varijanta
// 06431055
#include <stdio.h>
int main()
{
float x, y;                             // deklarisanje varijabli
printf("Ucitaj vrijednosti x i y: ");   // imena varijabli cija vrijednost se ucitavaju
scanf("%f %f",&x,&y);                   // ucitavanje vrijednosti varijabli sa tastature

printf("Rezultat izraza je: %.2f", (x-y)/3);// ispis vrijednosti
return 0;
}