/*
 * ZADATAK 27 - 06411058
 * Izračunati površinu kocke.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411058.htm
 */

#include <stdio.h>
int main()
{
int a, povrsina;                               // deklarisanje varijabli

printf("Ucitaj vrijednost stranice kocke: ");  // ime varijable cija vrijednost se ucitava
scanf("%d",&a);                                // ucitavanje vrijednosti varijable sa tastature

povrsina = 6*a*a;                              // povrsina kocke
printf("Povrsina kocke je: %d", povrsina);     //  ispis vrijednosti povrsine

return 0;
}

II varijanta
// 06411058
#include <stdio.h>
int main()
{
int a;                                         // deklarisanje varijable

printf("Ucitaj vrijednost stranice kocke: ");  // ime varijable cija vrijednost se ucitava
scanf("%d",&a);                                // ucitavanje vrijednosti varijable sa tastature

printf("Povrsina kocke je: %d", 6*a*a);        //  ispis vrijednosti povrsine

return 0;
}