/*
 * ZADATAK 32 - 06411078
 * Napisati program za izračunavanje obima pravougaonika.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411078.htm
 */

#include <stdio.h>
int main()
{
double a,b, obim;              // deklarisanje varijabli

printf("Ucitaj stranicu a: "); // ime varijable cija vrijednost se ucitava
scanf("%lf" ,&a);              // ucitavanje vrijednosti varijable sa tastature
printf("Ucitaj stranicu b: "); // ime varijable cija vrijednost se ucitava
scanf("%lf", &b);              // ucitavanje vrijednosti varijable sa tastature

obim = 2 * (a + b);          // obim pravougaonika
printf("Obim pravougaonika iznosi: %lf",2*(a+b)); //  ispis vrijednosti obima

return 0;
}

II varijanta
// 06411078
#include <stdio.h>
int main()

{
double a,b;                    // deklarisanje varijabli

printf("Ucitaj stranicu a: "); // ime varijable cija vrijednost se ucitava
scanf("%lf" ,&a);              // ucitavanje vrijednosti varijable sa tastature
printf("Ucitaj stranicu b: "); // ime varijable cija vrijednost se ucitava
scanf("%lf", &b);              // ucitavanje vrijednosti varijable sa tastature

printf("Obim pravougaonika iznosi: %lf",2*(a+b)); //  ispis vrijednosti obima

return 0;
}