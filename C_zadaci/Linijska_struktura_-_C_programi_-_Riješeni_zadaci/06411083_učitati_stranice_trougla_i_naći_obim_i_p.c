/*
 * ZADATAK 45 - 06411083
 * Učitati stranice trougla i naći obim i površinu.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411083.htm
 */

#include <stdio.h>
#include <math.h>
int main()
{
float a,b,c,S,Pov,Obim;        // deklarisanje varijabli

printf("Ucitaj stranicu a: "); // ime varijable cija vrijednost se ucitava
scanf("%f, &a);                // ucitavanje vrijednosti varijable sa tastature
printf("Ucitaj stranicu b: "); // ime varijable cija vrijednost se ucitava
scanf("%f, &b);                // ucitavanje vrijednosti varijable sa tastature
printf("Ucitaj stranicu c: "); // ime varijable cija vrijednost se ucitava
scanf("%f, &c);                // ucitavanje vrijednosti varijable sa tastature

S=(a+b+c)/2;
Pov=sqrt(S*(S-a)*(S-b)*(S-c));
Obim=a+b+c;

printf("Povrsina trougla iznosi: %.2f \n",Pov); // ispis vrijednosti povrsine
printf("Obim trougla iznosi: %.2f",Obim);       // ispis vrijednosti obima

return 0;
}