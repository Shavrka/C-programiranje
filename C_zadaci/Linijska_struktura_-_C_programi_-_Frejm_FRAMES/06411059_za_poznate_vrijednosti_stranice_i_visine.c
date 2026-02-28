/*
 * ZADATAK 06411059 - 06411059
 * Za poznate vrijednosti stranice i visine trougla izračunati odgovarajuću površinu (P=a*h/2).
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06411059.htm
 */

#include <stdio.h>
int main()
{
float a, h, P;                            // deklarisanje varijabli

printf("Vrijednost stranice trougla: ");  // ime varijable cija vrijednost se ucitava
scanf("%f", &a);                          // ucitavanje vrijednosti varijable sa tastature
printf("Vrijednost visine trougla: ");    // ime varijable cija vrijednost se ucitava
scanf("%f", &h);                          // ucitavanje vrijednosti varijable sa tastature

P = a * h / 2.0;                          // povrsinu trougla

printf("Povrsina trougla je: %.2f",P);    // ispis vrijednosti
return 0;
}

II varijanta
// 06411059
#include <stdio.h>
int main()
{
float a, h;                               // deklarisanje varijabli

printf("Vrijednost stranice trougla: ");  // ime varijable cija vrijednost se ucitava
scanf("%f", &a);                          // ucitavanje vrijednosti varijable sa tastature
printf("Vrijednost visine trougla: ");    // ime varijable cija vrijednost se ucitava
scanf("%f", &h);                          // ucitavanje vrijednosti varijable sa tastature

printf("Povrsina trougla je: %.2f",a * h / 2.0);   // ispis vrijednosti
return 0;
}