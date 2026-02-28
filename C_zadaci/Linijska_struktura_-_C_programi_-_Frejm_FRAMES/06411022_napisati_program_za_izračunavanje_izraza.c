/*
 * ZADATAK 06411022 - 06411022
 * Napisati program za izračunavanje izraza: 2x, a / 3.
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06411022.htm
 */

#include <stdio.h>
int main()
{
double x, a, y, z;          // deklarisanje varijabli

printf("Ucitaj broj x: ");  // ime varijable cija vrijednost se ucitava
scanf("%lf", &x);           // ucitavanje vrijednosti varijable sa tastature
printf("Ucitaj broj a: ");  // ime varijable cija vrijednost se ucitava
scanf("%lf" ,&a);           // ucitavanje vrijednosti varijable sa tastature

y = 2 * x;                  // izraz 1
z = a / 3;                  // izraz 2

printf("Prvi broj puta 2 je: %lf \n", y);      //  ispis vrijednosti izraza
printf("Trecina drugog broja iznosi: %lf", z); //  ispis vrijednosti izraza

return 0;
}

II varijanta
// 06411022
#include <stdio.h>
int main()
{
double x, a;                // deklarisanje varijabli

printf("Ucitaj broj x: ");  // ime varijable cija vrijednost se ucitava
scanf("%lf", &x);           // ucitavanje vrijednosti varijable sa tastature
printf("Ucitaj broj a: ");  // ime varijable cija vrijednost se ucitava
scanf("%lf" ,&a);           // ucitavanje vrijednosti varijable sa tastature

printf("Prvi broj puta 2 je: %lf \n", 2*x);      //  ispis vrijednosti izraza
printf("Trecina drugog broja iznosi: %lf", a/3); //  ispis vrijednosti izraza

return 0;
}