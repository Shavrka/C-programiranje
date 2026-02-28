/*
 * ZADATAK 83 - 06411120
 * Jedan radnik uradi posao za M dana a drugi za N dana. Za koliko dana bi uradili posao ako rade zajedno.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411120.htm
 */

#include <stdio.h>
int main()
{
float m,n,a;                                  // deklarisanje varijabli
printf("Prvi radnik uradi posao za dana: ");  // ime varijable cija vrijednost se ucitava
scanf("%f",&m);                               // ucitavanje vrijednosti varijable sa tastature
printf("Drugi radnik uradi posao za dana: "); // ime varijable cija vrijednost se ucitava
scanf("%f",&n);                               // ucitavanje vrijednosti varijable sa tastature

a=(m+n)/2;                                    // broj dana za koji bi uradili posao

printf("Zajedno bi posao uradili za dana: %.1f\n",a); //  ispis vrijednosti
return 0;
}

II varijanta
#include <stdio.h>
int main()
{
float m, n;                                   // deklarisanje varijabli
printf("Prvi radnik uradi posao za dana: ");  // ime varijable cija vrijednost se ucitava
scanf("%f",&m);                               // ucitavanje vrijednosti varijable sa tastature
printf("Drugi radnik uradi posao za dana: "); // ime varijable cija vrijednost se ucitava
scanf("%f",&n);                               // ucitavanje vrijednosti varijable sa tastature

printf("Zajedno bi posao uradili za dana: %.1f\n",(m+n)/2); //  ispis vrijednosti
return 0;
}