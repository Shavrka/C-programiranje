/*
 * ZADATAK 75 - 09351012
 * Napisati program sa funkcijom za izračunavanje obima pravougaonika.
 * Kategorija: Funkcije /FUNCTIONS/ - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/093c/09351012.htm
 */

#include <stdio.h>

float obim(float a, float b) {      // definisanje funkcije obim pravougaonika
return 2 * a + 2 * b;           // obim pravougaonika - izracunaj i vrati u glavni program
}

int main ()
{
printf("Obim pravougaonika\n");
float a, b;                     // deklarisanje varijabli

printf("Stranica a: ");         // naziv varijable
scanf("%f",&a);                 // stranica a, ulazna vrijednost
printf("Stranica b: ");         // naziv varijable
scanf("%f",&b);                 // stranica b, ulazna vrijednost

printf("Stranica a = %.2f,  stranica b = %.2f, obim pravougaonika = %.2f ", a, b, obim(a, b));   // poziv funkcije i ispis vrijednosti

return 0;
}

II varijanta poziv funkcije iz naredbe pridruzivanja
// 09351012
#include <stdio.h>

float obim(float a, float b) {      // definisanje funkcije obim pravougaonika
return 2 * a + 2 * b;           // obim pravougaonika - izracunaj i vrati u glavni program
}

int main ()
{
printf("Obim pravougaonika\n");
float a, b, o;                  // deklarisanje varijabli

printf("Stranica a: ");         // naziv varijable
scanf("%f",&a);                 // stranica a, ulazna vrijednost
printf("Stranica b: ");         // naziv varijable
scanf("%f",&b);                 // stranica b, ulazna vrijednost

o = obim(a, b);                 // obim pravougaonika, poziv funkcije

printf("Stranica a = %.2f,  stranica b = %.2f, obim pravougaonika = %.2f ", a, b, o);   // ispis vrijednosti

return 0;
}

III varijanta   poziv funkcije iz naredbe ispisa - cjelobrojne varijable, type int
// 09351012
#include <stdio.h>

int obim(int a, int b) {            // definisanje funkcije obim pravougaonika
return 2 * a + 2 * b;           // obim pravougaonika - izracunaj i vrati u glavni program
}

int main ()
{
printf("Obim pravougaonika\n");
int a, b;                       // deklarisanje varijable r

printf("Stranica a: ");         // naziv varijable
scanf("%d",&a);                 // stranica a, ulazna vrijednost
printf("Stranica b: ");         // naziv varijable
scanf("%d",&b);                 // stranica b, ulazna vrijednost

printf("Stranica a = %d,  stranica b = %d, obim pravougaonika = %d ", a, b, obim(a, b));   // poziv funkcije i ispis vrijednosti

return 0;
}

IV varijanta poziv funkcije iz naredbe pridruzivanja - cjelobrojne varijable, type int
// 09351012
#include <stdio.h>

int obim(int a, int b) {            // definisanje funkcije obim pravougaonika
return 2 * a + 2 * b;           // obim pravougaonika - izracunaj i vrati u glavni program
}

int main ()
{
printf("Obim pravougaonika\n");
int a, b, o;                    // deklarisanje varijable r

printf("Stranica a: ");         // naziv varijable
scanf("%d",&a);                 // stranica a, ulazna vrijednost
printf("Stranica b: ");         // naziv varijable
scanf("%d",&b);                 // stranica b, ulazna vrijednost

o = obim(a, b);                 // obim pravougaonika, poziv funkcije

printf("Stranica a = %d,  stranica b = %d, obim pravougaonika = %d ", a, b, o);   // ispis vrijednosti

return 0;
}