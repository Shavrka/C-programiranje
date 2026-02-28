/*
 * ZADATAK 06411131 - 06411131
 * Napisati program za izračunavanje stranice trougla ako je poznata površina i visina trougla (P=a*h/2)
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06411131.htm
 */

#include <stdio.h>
int main()
{
float P,h,a;                             // deklarisanje varijabli

printf("Vrijednost povrsine trougla: "); // ime varijable cija vrijednost se ucitava
scanf("%f", &P);                         // ucitavanje povrsine
printf("Vrijednost visine trougla: ");   // ime varijable cija vrijednost se ucitava
scanf("%f", &h);                         // ucitavanje visine

a=(2*P)/h;                               // stranica trougla

printf("Stranica a= %.2f",a);            // ispis vrijednosti

return 0;
}

II varijanta
//06411131
#include <stdio.h>
int main()
{
float P, h ;                             // deklarisanje varijabli

printf("Vrijednost povrsine trougla: "); // ime varijable cija vrijednost se ucitava
scanf("%f", &P);                         // ucitavanje povrsine
printf("Vrijednost visine trougla: ");   // ime varijable cija vrijednost se ucitava
scanf("%f", &h);                         // ucitavanje visine

printf("Stranica a= %.2f", (2*P)/h);     // ispis vrijednosti

return 0;
}