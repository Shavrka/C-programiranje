/*
 * ZADATAK 06411080 - 06411080
 * Napisati program za izračunavanje obima trougla:
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06411080.htm
 */

#include<stdio.h>
int main()
{
float a,b,c,o;         // deklarisanje varijabli
printf("Ucitaj a: ");  // ime varijable cija vrijednost se ucitava
scanf("%f",&a);        // ucitavanje vrijednosti varijable sa tastature
printf("Ucitaj b: ");  // ime varijable cija vrijednost se ucitava
scanf("%f",&b);        // ucitavanje vrijednosti varijable sa tastature
printf("Ucitaj c: ");  // ime varijable cija vrijednost se ucitava
scanf("%f",&c);        // ucitavanje vrijednosti varijable sa tastature

o = a + b + c;         // obrim trougla
printf("Obim je %.1f",o); // ispis vrijednosti
return 0;
}

II varijanta
// 06411080
#include<stdio.h>
int main()
{
float a,b,c,o;         // deklarisanje varijabli
printf("Ucitaj a: ");  // ime varijable cija vrijednost se ucitava
scanf("%f",&a);        // ucitavanje vrijednosti varijable sa tastature
printf("Ucitaj b: ");  // ime varijable cija vrijednost se ucitava
scanf("%f",&b);        // ucitavanje vrijednosti varijable sa tastature
printf("Ucitaj c: ");  // ime varijable cija vrijednost se ucitava
scanf("%f",&c);        // ucitavanje vrijednosti varijable sa tastature

printf("Obim je %.1f",  a + b + c); // ispis vrijednosti
return 0;
}