/*
 * ZADATAK 77 - 09351014
 * Napisati program sa funkcijom za izračunavanje površine pravougaonika.
 * Kategorija: Funkcije /FUNCTIONS/ - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/093c/09351014.htm
 */

#include <stdio.h>

float povrsina(float a, float b) {  // definisanje funkcije povrsina pravougaonika
return a * b;                   // povrsina pravougaonika - izracunaj i vrati u glavni program
}

int main ()
{
printf("Povrsina pravougaonika\n");
float a, b;                     // deklarisanje varijabli

printf("Stranica a: ");         // naziv varijable
scanf("%f",&a);                 // stranica a, ulazna vrijednost
printf("Stranica b: ");         // naziv varijable
scanf("%f",&b);                 // stranica b, ulazna vrijednost

printf("Stranica a = %.2f,  stranica b = %.2f, povrsina pravougaonika = %.2f ", a, b, povrsina(a, b));   // poziv funkcije i ispis vrijednosti

return 0;
}

II varijanta poziv funkcije iz naredbe pridruzivanja
// 09351014
#include <stdio.h>

float povrsina(float a, float b) {  // definisanje funkcije povrsina pravougaonika
return a * b;                   // povrsina pravougaonika - izracunaj i vrati u glavni program
}

int main ()
{
printf("Povrsina pravougaonika\n");
float a, b, p;                  // deklarisanje varijabli

printf("Stranica a: ");         // naziv varijable
scanf("%f",&a);                 // stranica a, ulazna vrijednost
printf("Stranica b: ");         // naziv varijable
scanf("%f",&b);                 // stranica b, ulazna vrijednost

p = povrsina(a, b);             // povrsina pravougaonika, poziv funkcije

printf("Stranica a = %.2f,  stranica b = %.2f, povrsina pravougaonika = %.2f ", a, b, p);   // ispis vrijednosti

return 0;
}