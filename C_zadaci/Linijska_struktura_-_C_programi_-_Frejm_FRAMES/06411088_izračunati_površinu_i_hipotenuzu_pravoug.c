/*
 * ZADATAK 06411088 - 06411088
 * Izračunati površinu i hipotenuzu pravouglog trougla, ako su poznate katete.
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06411088.htm
 */

#include <stdio.h>
#include <math.h>
int main()
{
float a, b, c, P;         // deklarisanje varijabli
printf("Kateta a: ");     // ime varijable cija vrijednost se ucitava
scanf("%f",&a);           // ucitavanje vrijednost varijable sa tastature
printf("Kateta b: ");     // ime varijable cija vrijednost se ucitava
scanf("%f",&b);           // ucitavanje vrijednost varijable sa tastature

c = sqrt(a*a + b*b);      // hipotenuza
P = (a*b)/2;              // povrsina pravouglog trougla,
printf("Hipotenuza trougla = %.1f\n",c); // ispis vrijednosti
printf("Povrsina trougla = %.1f\n" ,P);  // ispis vrijednosti
return 0;
}

II varijanta
// 06411088
#include <stdio.h>
#include <math.h>
int main()
{
float a, b, c, P;         // deklarisanje varijabli
printf("Kateta a: ");     // ime varijable cija vrijednost se ucitava
scanf("%f",&a);           // ucitavanje vrijednost varijable sa tastature
printf("Kateta b: ");     // ime varijable cija vrijednost se ucitava
scanf("%f",&b);           // ucitavanje vrijednost varijable sa tastature

c = pow((a*a+b*b), 0.5);  // hipotenuza
P = (a*b)/2;              // povrsina pravouglog trougla,
printf("Hipotenuza trougla = %.1f\n",c); // ispis vrijednosti
printf("Povrsina trougla = %.1f\n" ,P);  // ispis vrijednosti
return 0;
}

III varijanta
#include <stdio.h>
#include <math.h>
int main()
{
float a, b;               // deklarisanje varijabli
printf("Kateta a: ");     // ime varijable cija vrijednost se ucitava
scanf("%f",&a);           // ucitavanje vrijednost varijable sa tastature
printf("Kateta b: ");     // ime varijable cija vrijednost se ucitava
scanf("%f",&b);           // ucitavanje vrijednost varijable sa tastature

printf("Hipotenuza trougla = %.1f\n", sqrt(a*a + b*b)); // ispis vrijednosti
printf("Povrsina trougla = %.1f\n" ,(a*b)/2);           // ispis vrijednosti
return 0;
}