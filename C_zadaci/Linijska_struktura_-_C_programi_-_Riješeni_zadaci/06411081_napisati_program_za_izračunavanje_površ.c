/*
 * ZADATAK 44 - 06411081
 * Napisati  program za izračunavanje površine trougla na dva načina:koristeći Heronovu formulu: S=(a+b+c)/2, P=(S(S-a)(S-b)(S-c))1/2P = a * h /2 (visina stranice a).
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411081.htm
 */

#include <stdio.h>
#include <math.h>
int main()
{
float a,b,c,S,Pov;     // deklarisanje varijabli

printf("Ucitaj a: ");  // ime varijable cija vrijednost se ucitava
scanf("%f",&a);        // ucitavanje vrijednosti varijable sa tastature
printf("Ucitaj b: ");  // ime varijable cija vrijednost se ucitava
scanf("%f",&b);        // ucitavanje vrijednosti varijable sa tastature
printf("Ucitaj c: ");  // ime varijable cija vrijednost se ucitava
scanf("%f",&c);        // ucitavanje vrijednosti varijable sa tastature

S=(a+b+c)/2;           // poluzbir duzina stranica
Pov=sqrt(S*(S-a)*(S-b)*(S-c));  // povrsina

printf("Povrsina trougla iznosi: %.2f",Pov);// ispis vrijednosti

return 0;
}

II varijanta
// 06411081
#include <stdio.h>
int main()
{
float a,b,c,S,Pov;     // deklarisanje varijabli

printf("Ucitaj a: ");  // ime varijable cija vrijednost se ucitava
scanf("%f",&a);        // ucitavanje vrijednosti varijable sa tastature
printf("Ucitaj b: ");  // ime varijable cija vrijednost se ucitava
scanf("%f",&b);        // ucitavanje vrijednosti varijable sa tastature
printf("Ucitaj c: ");  // ime varijable cija vrijednost se ucitava
scanf("%f",&c);        // ucitavanje vrijednosti varijable sa tastature

Pov=a*h/2;             // povrsina
printf("Povrsina trougla iznosi: %.2f",Pov);// ispis vrijednosti

return 0;
}