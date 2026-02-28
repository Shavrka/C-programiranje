/*
 * ZADATAK 31 - 06411077
 * Napisati program za izračunavanje površine pravougaonika.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411077.htm
 */

#include <stdio.h>
int main()
{
double a,b, povrsina;          // deklarisanje varijabli

printf("Ucitaj stranicu a: "); // ime varijable cija vrijednost se ucitava
scanf("%lf" ,&a);              // ucitavanje vrijednosti varijable sa tastature
printf("Ucitaj stranicu b: "); // ime varijable cija vrijednost se ucitava
scanf("%lf", &b);              // ucitavanje vrijednosti varijable sa tastature

povrsina = a*b;                // povrsina pravougaonika
printf("Povrsina pravougaonika iznosi: %lf", povrsina);  //  ispis vrijednosti povrsine

return 0;
}

II varijanta
// 06411077
#include <stdio.h>
int main()
{
double a,b;                    // deklarisanje varijabli

printf("Ucitaj stranicu a: "); // ime varijable cija vrijednost se ucitava
scanf("%lf" ,&a);              // ucitavanje vrijednosti varijable sa tastature
printf("Ucitaj stranicu b: "); // ime varijable cija vrijednost se ucitava
scanf("%lf", &b);              // ucitavanje vrijednosti varijable sa tastature

printf("Povrsina pravougaonika iznosi: %lf", a*b);  //  ispis vrijednosti povrsine

return 0;
}