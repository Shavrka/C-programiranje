/*
 * ZADATAK 06411071 - 06411071
 * Napisati program za ispis sume dva broja
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06411071.htm
 */

#include <stdio.h>
int main()
{
int a,b;              // deklarisanje varijabli a i b
int s;                // deklarisanje varijable s

printf("1. broj: ");  // ime varijable cija vrijednost se ucitava
scanf("%d", &a);      // ucitavanje vrijednosti varijable a sa tastature
printf("2. broj: ");  // ime varijable cija vrijednost se ucitava
scanf("%d", &b);      // ucitavanje vrijednosti varijable b sa tastature

s = a + b;  // suma dva broja

printf("\nSuma ucitanih brojeva je: %d", s); // ispis vrijednosti s

return 0;
}

II varijanta
// 06411071
#include <stdio.h>

int main()
{
int a, b;                      // deklarisanje varijabli a i b

printf("Ucitaj dva broja: ");  // ime varijable cija vrijednost se ucitava
scanf("%d %d", &a, &b);        // ucitavanje vrijednosti varijable a sa tastature
printf("2. broj: ");           // ime varijable cija vrijednost se ucitava
scanf("%d", &b);               // ucitavanje vrijednosti varijable b sa tastature

printf("\nSuma ucitanih brojeva je: %d", a + b);   // ispis vrijednosti izraza

return 0;
}

III varijanta
// 06411071
#include <stdio.h>

int main()
{
int a, b;             // deklarisanje varijabli a i b

printf("1. broj: ");  // ime varijable cija vrijednost se ucitava
scanf("%d", &a);      // ucitavanje vrijednosti varijable a sa tastature
printf("2. broj: ");  // ime varijable cija vrijednost se ucitava
scanf("%d", &b);      // ucitavanje vrijednosti varijable b sa tastature

printf("\nSuma ucitanih brojeva je: %d", a + b);   // ispis vrijednosti izraza

return 0;
}