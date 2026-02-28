/*
 * ZADATAK 06411145 - 06411145
 * Izračunati korijen apsolutne vrijednosti sume kvadrata dva učitana broja.
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06411145.htm
 */

#include <stdio.h>
#include <math.h>
int main()
{
int a,b;                   // deklarisanje varijabli
float  s;                  // deklarisanje varijable

printf("1. broj: ");       // ime varijable cija vrijednost se ucitava
scanf("%d", &a);           // ucitavanje vrijednosti varijable prvi_broj sa tastature
printf("2. broj: ");       // ime varijable cija vrijednost se ucitava
scanf("%d", &b);           // ucitavanje vrijednosti varijable drugi_broj sa tastature

s = sqrt(a*a+b*b);         // korijen sume kvadrata
printf("Korijen sume kvadrata ucitanih brojeva = %.3f\n", s);  // ispis vrijednosti
return 0;
}

II varijanta
// 06411145
#include <stdio.h>
#include <math.h>
int main()
{
int a,b;                   // deklarisanje varijabli
float  s;                  // deklarisanje varijable

printf("1. broj: ");       // ime varijable cija vrijednost se ucitava
scanf("%d", &a);           // ucitavanje vrijednosti varijable prvi_broj sa tastature
printf("2. broj: ");       // ime varijable cija vrijednost se ucitava
scanf("%d", &b);           // ucitavanje vrijednosti varijable drugi_broj sa tastature

s = pow((a*a+b*b), 0.5);     // korijen sume kvadrata
printf("Korijen sume kvadrata ucitanih brojeva = %.3f\n", s);  // ispis vrijednosti
return 0;
}

III varijanta
// 06411145
#include <stdio.h>
#include <math.h>
int main()
{
int a,b;                   // deklarisanje varijabli
float  s;                  // deklarisanje varijable

printf("1. broj: ");       // ime varijable cija vrijednost se ucitava
scanf("%d", &a);           // ucitavanje vrijednosti varijable prvi_broj sa tastature
printf("2. broj: ");       // ime varijable cija vrijednost se ucitava
scanf("%d", &b);           // ucitavanje vrijednosti varijable drugi_broj sa tastature

printf("Korijen sume kvadrata ucitanih brojeva = %.3f\n", sqrt(a*a+b*b));  // ispis vrijednosti
return 0;
}

1. broj: 3
2. broj: 4
Korijen sume kvadrata ucitanih brojeva = 5.000