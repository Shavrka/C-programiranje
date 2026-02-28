/*
 * ZADATAK 74 - 09351011
 * Naći površinu kvadrata za 5 ucitanih vrijednosti (Funkcija koristi nove varijable. Pridruživanje vrijednosti funkcije u glavnom programu p = površina(a) )
 * Kategorija: Funkcije /FUNCTIONS/ - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/093c/09351011.htm
 */

#include <stdio.h>

float povrsina(float a) {    // definisanje funkcije povrsina kvadrata
return a * a;            // povrsina kvadrata - izracunaj i vrati u glavni program
}

int main ()
{
printf("Povrsina kvadrata 5x");
float a;                            // deklarisanje varijable

for(int i = 1; i <= 5; i++){        // za i od 1 do 5 ponavljaj
printf("\n%d. stranica: ", i);  // naziv varijable
scanf("%f",&a);                 // stranica, ulazna vrijednost

printf("Stranica = %.2f, povrsina kvadrata = %.2f ", a, povrsina(a));   // poziv funkcije i ispis vrijednosti
}

return 0;
}

II varijanta poziv funkcije iz naredbe pridruzivanja
// 09351011
#include <stdio.h>

float povrsina(float a) {    // definisanje funkcije povrsina kvadrata
return a * a;            // povrsina kvadrata - izracunaj i vrati u glavni program
}

int main ()
{
printf("Povrsina kvadrata 5x");
float a, p;                         // deklarisanje varijabli

for(int i = 1; i <= 5; i++){        // za i od 1 do 5 ponavljaj
printf("\n%d. stranica: ", i);  // naziv varijable
scanf("%f",&a);                 // stranica, ulazna vrijednost

p = povrsina(a);                // povrsina kvadrata, poziv funkcije

printf("Stranica = %.2f, povrsina kvadrata = %.2f ", a, p);   // ispis vrijednosti
}

return 0;
}