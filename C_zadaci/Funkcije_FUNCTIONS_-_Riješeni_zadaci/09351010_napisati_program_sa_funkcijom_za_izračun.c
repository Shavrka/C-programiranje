/*
 * ZADATAK 73 - 09351010
 * Napisati program sa funkcijom za izračunavanje površine kvadrata.
 * Kategorija: Funkcije /FUNCTIONS/ - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/093c/09351010.htm
 */

#include <stdio.h>

float povrsina(float a) {    // definisanje funkcije povrsina kvadrata
return a * a;            // povrsina kvadrata - izracunaj i vrati u glavni program
}

int main ()
{
printf("Povrsina kvadrata\n");
float a;                     // deklarisanje

printf("Stranica: ");        // naziv varijable
scanf("%f",&a);              // stranica, ulazna vrijednost

printf("Stranica = %.2f, povrsina kvadrata = %.2f ", a, povrsina(a));   // poziv funkcije i ispis vrijednosti

return 0;
}

II varijanta poziv funkcije iz naredbe pridruzivanja
// 09351010
#include <stdio.h>

float povrsina(float a) {    // definisanje funkcije povrsina kvadrata
return a * a;            // povrsina kvadrata - izracunaj i vrati u glavni program
}

int main ()
{
printf("Povrsina kvadrata\n");
float a, p;                  // deklarisanje varijabli

printf("Stranica: ");        // naziv varijable
scanf("%f",&a);              // stranica, ulazna vrijednost

p = povrsina(a);             // povrsina kvadrata, poziv funkcije

printf("Stranica = %.2f, povrsina kvadrata = %.2f ", a, p);   // ispis vrijednosti

return 0;
}