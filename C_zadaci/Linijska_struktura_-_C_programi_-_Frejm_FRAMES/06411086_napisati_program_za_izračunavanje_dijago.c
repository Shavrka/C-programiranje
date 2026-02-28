/*
 * ZADATAK 06411086 - 06411086
 * Napisati program za izračunavanje dijagonalu pravougaonika.
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06411086.htm
 */

#include<stdio.h>
#include<math.h>
int main ()
{
float a,b, d;              // deklarisanje varijabli
printf("1. stranica a:");  // ime varijable cija vrijednost se ucitava
scanf("%f",&a);            // ucitavanje vrijednosti varijable a sa tastature
printf("2. stranica b:");  // ime varijable cija vrijednost se ucitava
scanf("%f",&b);            // ucitavanje vrijednosti varijable b sa tastature

d = sqrt(a*a+b*b);                               // dijagonale pravougaonika
printf("Dijagonala pravougaonika je %.2f",d);    // ispis vrijednosti
return 0;
}

II varijanta
// 06411086
#include<stdio.h>
#include<math.h>
int main ()
{
float a,b, d;              // deklarisanje varijabli
printf("1. stranica a:");  // ime varijable cija vrijednost se ucitava
scanf("%f",&a);            // ucitavanje vrijednosti varijable a sa tastature
printf("2. stranica b:");  // ime varijable cija vrijednost se ucitava
scanf("%f",&b);            // ucitavanje vrijednosti varijable b sa tastature

d = pow((a*a+b*b) , 0.5);                        // dijagonale pravougaonika
printf("Dijagonala pravougaonika je %.2f",d);    // ispis vrijednosti
return 0;
}

III varijanta
// 06411086
#include<stdio.h>
#include<math.h>
int main ()
{
float a, b;                // deklarisanje varijabli
printf("1. stranica a:");  // ime varijable cija vrijednost se ucitava
scanf("%f",&a);            // ucitavanje vrijednosti varijable a sa tastature
printf("2. stranica b:");  // ime varijable cija vrijednost se ucitava
scanf("%f",&b);            // ucitavanje vrijednosti varijable b sa tastature

printf("Dijagonala pravougaonika je %.2f", sqrt(a*a+b*b));    // ispis vrijednosti
return 0;
}