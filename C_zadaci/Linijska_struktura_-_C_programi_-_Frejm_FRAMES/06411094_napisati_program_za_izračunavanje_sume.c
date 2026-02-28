/*
 * ZADATAK 06411094 - 06411094
 * Napisati program za izračunavanje sume, proizvoda i razlike dva učitavana broja.
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06411094.htm
 */

#include <stdio.h>
int main()
{
float x, y, s, r1, r2, p;  // deklarisanje varijabli
printf("Ucitaj broj x: "); // ime varijable cija vrijednost se ucitava
scanf("%f",&x);            // ucitavanje vrijednosti varijable broj sa tastature
printf("Ucitaj broj y: "); // ime varijable cija vrijednost se ucitava
scanf("%f",&y);            // ucitavanje vrijednosti varijable broj sa tastature

s = x + y;     // suma
p = x * y;     // proizvod
r1 = x - y;    // razlika 1
r2 = y - x;    // razlika 2

printf("x = %f,y = %f\n", x,y); // ispis vrijednosti
printf("x+y = %f\n", s);  // ispis vrijednosti
printf("x-y = %f\n", r1);  // ispis vrijednosti
printf("y-x = %f\n", r2);  // ispis vrijednosti
printf("x*y = %f\n", p);  // ispis vrijednosti
return 0;
}

II varijanta
// 06411094
#include <stdio.h>
int main()
{
float x,y;                 // deklarisanje varijabli
printf("Ucitaj broj x: "); // ime varijable cija vrijednost se ucitava
scanf("%f",&x);            // ucitavanje vrijednosti varijable broj sa tastature
printf("Ucitaj broj y: "); // ime varijable cija vrijednost se ucitava
scanf("%f",&y);            // ucitavanje vrijednosti varijable broj sa tastature

printf("x = %f,y = %f\n", x,y); // ispis vrijednosti
printf("x+y = %f\n", x+y);  // ispis vrijednosti
printf("x-y = %f\n", x-y);  // ispis vrijednosti
printf("y-x = %f\n", y-x);  // ispis vrijednosti
printf("x*y = %f\n", x*y);  // ispis vrijednosti
return 0;
}