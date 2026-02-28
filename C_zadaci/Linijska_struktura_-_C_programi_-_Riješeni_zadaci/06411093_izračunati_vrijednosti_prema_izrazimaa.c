/*
 * ZADATAK 56 - 06411093
 * Izračunati vrijednosti prema izrazima:a = x * yb = x + yc = b / x
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411093.htm
 */

#include <stdio.h>
int main()
{
float x,y,a,b,c;  // deklarisanje varijabli
printf("Ucitaj broj x: "); // ime varijabli cije vrijednosti se ucitava
scanf("%f",&x);       // ucitavanje vrijednosti varijable x
printf("Ucitaj broj y: "); // ime varijabli cije vrijednosti se ucitava
scanf("%f",&y);     // ucitavanje vrijednosti varijable y

a = x * y;  // izračunaj a
b = x + y;  // izračunaj b
c = b / x;  // izračunaj c
printf("x=%.1f,y=%.1f\n",x,y); // ispis vrijednosti
printf("a=%.1f,b=%.1f,c=%.1f",a,b,c); // ispis vrijednosti
return 0;
}

II varijanta
// 06411093
#include <stdio.h>
int main()
{
float x,y;  // deklarisanje varijabli
printf("Ucitaj broj x: "); // ime varijabli cije vrijednosti se ucitava
scanf("%f",&x);      // ucitavanje vrijednosti varijable x
printf("Ucitaj broj y: "); // ime varijabli cije vrijednosti se ucitava
scanf("%f",&y);   // ucitavanje vrijednosti varijable y
printf("x=%.1f,y=%.1f\n",x,y);
printf("x*y = %.1f\n", x*y);
printf("x+y = %.1f\n", x+y);
printf("b/x = %.1f", (x+y)/x);
return 0;
}