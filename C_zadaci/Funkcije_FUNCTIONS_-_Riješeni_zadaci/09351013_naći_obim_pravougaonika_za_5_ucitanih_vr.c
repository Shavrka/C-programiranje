/*
 * ZADATAK 76 - 09351013
 * Naći obim pravougaonika za 5 ucitanih vrijednosti (Funkcija koristi nove varijable. Pridruživanje vrijednosti funkcije u glavnom programu o = obim(a, b) )
 * Kategorija: Funkcije /FUNCTIONS/ - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/093c/09351013.htm
 */

#include <stdio.h>

float obim(float a, float b) {      // definisanje funkcije obim pravougaonika
return 2 * a + 2 * b;           // obim pravougaonika - izracunaj i vrati u glavni program
}

int main ()
{
printf("Obim pravougaonika 5x");
float a, b;                     // deklarisanje varijabli

for(int i = 1; i <= 5; i++){  // za i od 1 do 5 ponavljaj
printf("\n%d. stranica a: ", i);   // naziv varijable
scanf("%f",&a);                    // stranica a, ulazna vrijednost
printf("%d. stranica b: ", i);     // naziv varijable
scanf("%f",&b);                    // stranica b, ulazna vrijednost

printf("Stranica a = %.2f,  stranica b = %.2f, obim pravougaonika = %.2f ", a, b, obim(a, b));   // poziv funkcije i ispis vrijednosti
}

return 0;
}

II varijanta poziv funkcije iz naredbe pridruzivanja
// 09351013
#include <stdio.h>

float obim(float a, float b) {      // definisanje funkcije obim pravougaonika
return 2 * a + 2 * b;           // obim pravougaonika - izracunaj i vrati u glavni program
}

int main ()
{
printf("Obim pravougaonika 5x");
float a, b, o;                 // deklarisanje varijabli

for(int i = 1; i <= 5; i++){  // za i od 1 do 5 ponavljaj
printf("\n%d. stranica a: ", i);   // naziv varijable
scanf("%f",&a);                    // stranica a, ulazna vrijednost
printf("%d. stranica b: ", i);     // naziv varijable
scanf("%f",&b);                    // stranica b, ulazna vrijednost

o = obim(a, b);                 // obim pravougaonika, poziv funkcije

printf("Stranica a = %.2f,  stranica b = %.2f, obim pravougaonika = %.2f ", a, b, o);   // ispis vrijednosti
}

return 0;
}

III varijanta   poziv funkcije iz naredbe ispisa - cjelobrojne varijable, type int
// 09351013
#include <stdio.h>

int obim(int a, int b) {            // definisanje funkcije obim pravougaonika
return 2 * a + 2 * b;           // obim pravougaonika - izracunaj i vrati u glavni program
}

int main ()
{
printf("Obim pravougaonika 5x");
int a, b;                       // deklarisanje varijable r

for(int i = 1; i <= 5; i++){  // za i od 1 do 5 ponavljaj
printf("\n%d. stranica a: ", i);   // naziv varijable
scanf("%d",&a);                    // stranica a, ulazna vrijednost
printf("%d. stranica b: ", i);     // naziv varijable
scanf("%d",&b);                    // stranica b, ulazna vrijednost

printf("Stranica a = %d,  stranica b = %d, obim pravougaonika = %d ", a, b, obim(a, b));   // poziv funkcije i ispis vrijednosti
}
return 0;
}

IV varijanta poziv funkcije iz naredbe pridruzivanja - cjelobrojne varijable, type int
// 09351013
#include <stdio.h>

int obim(int a, int b) {            // definisanje funkcije obim pravougaonika
return 2 * a + 2 * b;           // obim pravougaonika - izracunaj i vrati u glavni program
}

int main ()
{
printf("Obim pravougaonika 5x");
int a, b, o;                    // deklarisanje varijable r

for(int i = 1; i <= 5; i++){    // za i od 1 do 5 ponavljaj
printf("\n%d. stranica a: ", i);   // naziv varijable
scanf("%d",&a);                    // stranica a, ulazna vrijednost
printf("%d. stranica b: ", i);     // naziv varijable
scanf("%d",&b);                    // stranica b, ulazna vrijednost

o = obim(a, b);                    // obim pravougaonika, poziv funkcije

printf("Stranica a = %d,  stranica b = %d, obim pravougaonika = %d ", a, b, o);   // poziv funkcije i ispis vrijednosti
}

return 0;
}