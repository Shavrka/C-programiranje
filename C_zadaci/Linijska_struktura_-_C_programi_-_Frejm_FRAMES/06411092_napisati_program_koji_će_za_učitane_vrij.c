/*
 * ZADATAK 06411092 - 06411092
 * Napisati program koji će za učitane vrijednosti x i y izračunati i ispisati vrijednosti a i b prema izrazima:a=x+yb=x-y
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06411092.htm
 */

#include <stdio.h>
int main()
{
float x, y, a, b;                  // deklarisanje varijabli
printf("Ucitaj broj x: ");         // ime varijabli cije vrijednosti se ucitavaju
scanf("%f",&x);                    // ucitavanje vrijednosti varijabli sa tastature
printf("Ucitaj broj y: ");         // ime varijabli cije vrijednosti se ucitavaju
scanf("%f",&y);                    // ucitavanje vrijednosti varijabli sa tastature

a = x + y;                         // suma brojeva
b = x - y;                         // razlika brojeva
printf("x = %f   y = %f\n", x, y); // ispis
printf("a = %f   b = %f",a,b);     // ispis
return 0;
}

II varijanta
// 06411092
#include <stdio.h>
int main()
{
float x, y;                          // deklarisanje varijabli
printf("Ucitaj broj x: ");         // ime varijabli cije vrijednosti se ucitavaju
scanf("%f",&x);                    // ucitavanje vrijednosti varijabli sa tastature
printf("Ucitaj broj y: ");         // ime varijabli cije vrijednosti se ucitavaju
scanf("%f",&y);                    // ucitavanje vrijednosti varijabli sa tastature

printf("x = %f  y = %f\n", x, y);    // ispis
printf("a = %f  b = %f", x + y, x - y); // ispis
return 0;
}