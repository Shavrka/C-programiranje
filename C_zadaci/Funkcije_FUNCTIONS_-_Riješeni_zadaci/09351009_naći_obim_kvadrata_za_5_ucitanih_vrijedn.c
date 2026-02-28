/*
 * ZADATAK 72 - 09351009
 * Naći obim kvadrata za 5 ucitanih vrijednosti (Funkcija koristi nove varijable. Pridruživanje vrijednosti funkcije u glavnom programu o = obim(a).
 * Kategorija: Funkcije /FUNCTIONS/ - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/093c/09351009.htm
 */

#include <stdio.h>

float obim(float a) {      // definisanje funkcije obim kvadrata
return 4 * a;          // obim kvadrata - izracunaj i vrati u glavni program
}

int main ()
{
printf("Obim kvadrata 5x");
float a;                     // deklarisanje varijable a

for(int i = 1; i <= 5; i++){   // za i od 1 do 5 ponavljaj
printf("\n%d. stranica: ", i);  // naziv varijable
scanf("%f",&a);                 // stranica, ulazna vrijednost

printf("Stranica = %.2f, obim kvadrata = %.2f ", a, obim(a));   // poziv funkcije i ispis vrijednosti
}
return 0;
}

II varijanta poziv funkcije iz naredbe pridruzivanja
// 09351009
#include <stdio.h>

float obim(float a) {      // definisanje funkcije kvadrat dva broja
return 4 * a;          // obim kvadrata - izracunaj i vrati u glavni program
}

int main ()
{
printf("Obim kvadrata 5x");
float a, o;                   // deklarisanje varijabli a i o

for(int i = 1; i <= 5; i++){  // za i od 1 do 5 ponavljaj
printf("\n%d. stranica: ", i);  // naziv varijable
scanf("%f",&a);                 // stranica, ulazna vrijednost

o = obim(a);                    // obim kvadrata, poziv funkcije

printf("Stranica = %.2f, obim kvadrata = %.2f ", a, o);   // ispis vrijednosti
}
return 0;
}