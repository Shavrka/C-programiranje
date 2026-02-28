/*
 * ZADATAK 78 - 09351015
 * Naći površinu pravougaonika za 5 ucitanih vrijednosti (Funkcija koristi nove varijable. Pridruživanje vrijednosti funkcije u glavnom programu p = površina(a, b) ).
 * Kategorija: Funkcije /FUNCTIONS/ - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/093c/09351015.htm
 */

#include <stdio.h>

float povrsina(float a, float b) {  // definisanje funkcije povrsina pravougaonika
return a * b;                   // povrsina pravougaonika - izracunaj i vrati u glavni program
}

int main ()
{
printf("Povrsina pravougaonika 5x");
float a, b;                     // deklarisanje varijabli

for(int i = 1; i <= 5; i++){  // za i od 1 do 5 ponavljaj
printf("\n%d. stranica a: ", i);   // naziv varijable
scanf("%f",&a);                    // stranica a, ulazna vrijednost
printf("%d. stranica b: ", i);     // naziv varijable
scanf("%f",&b);                    // stranica b, ulazna vrijednost

printf("Stranica a = %.2f,  stranica b = %.2f, povrsina pravougaonika = %.2f ", a, b, povrsina(a, b));   // poziv funkcije i ispis vrijednosti
}

return 0;
}

II varijanta poziv funkcije iz naredbe pridruzivanja
// 09351015
#include <stdio.h>

float povrsina(float a, float b) {  // definisanje funkcije povrsina pravougaonika
return a * b;                   // povrsina pravougaonika - izracunaj i vrati u glavni program
}

int main ()
{
printf("Povrsina pravougaonika 5x");
float a, b, p;                  // deklarisanje varijabli

for(int i = 1; i <= 5; i++){  // za i od 1 do 5 ponavljaj
printf("\n%d. stranica a: ", i);   // naziv varijable
scanf("%f",&a);                    // stranica a, ulazna vrijednost
printf("%d. stranica b: ", i);     // naziv varijable
scanf("%f",&b);                    // stranica b, ulazna vrijednost

p = povrsina(a, b);             // povrsina pravougaonika, poziv funkcije

printf("Stranica a = %.2f,  stranica b = %.2f, povrsina pravougaonika = %.2f ", a, b, p);   // ispis vrijednosti
}
return 0;
}