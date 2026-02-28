/*
 * ZADATAK 71 - 09351008
 * Napisati program sa funkcijom za izračunavanje obima kvadrata za učitanu stranicu.
 * Kategorija: Funkcije /FUNCTIONS/ - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/093c/09351008.htm
 */

#include <stdio.h>

float obim(float a) {      // definisanje funkcije obim kvadrata
return 4 * a;          // obim kvadrata - izracunaj i vrati u glavni program
}

int main ()
{
printf("Obim kvadrata\n");
float a;                     // deklarisanje varijable a

printf("Stranica: ");        // naziv varijable
scanf("%f",&a);              // stranica, ulazna vrijednost

printf("Stranica = %.2f, obim kvadrata = %.2f ", a, obim(a));   // poziv funkcije i ispis vrijednosti

return 0;
}

II varijanta poziv funkcije iz naredbe pridruzivanja
// 09351008
#include <stdio.h>

float obim(float a) {      // definisanje funkcije obim kvadrata
return 4 * a;          // obim kvadrata - izracunaj i vrati u glavni program
}

int main ()
{
printf("Obim kvadrata\n");
float a, o;                  // deklarisanje varijabli a i o

printf("Stranica: ");        // naziv varijable
scanf("%f",&a);              // stranica, ulazna vrijednost

o = obim(a);                 // obim kvadrata, poziv funkcije

printf("Stranica = %.2f, obim kvadrata = %.2f ", a, o);   // ispis vrijednosti

return 0;
}

III varijanta   poziv funkcije iz naredbe ispisa - cjelobrojne varijable, type int
// 09351008
#include <stdio.h>

int obim(int a) {      // definisanje funkcije obim kvadrata
return 4 * a;      // obim kvadrata - izracunaj i vrati u glavni program
}

int main ()
{
printf("Obim kvadrata\n");
int a;                       // deklarisanje varijable a

printf("Stranica: ");        // naziv varijable
scanf("%d",&a);              // stranica, ulazna vrijednost

printf("Stranica = %d, obim kvadrata = %d ", a, obim(a));   // poziv funkcije i ispis vrijednosti

return 0;
}

IV varijanta poziv funkcije iz naredbe pridruzivanja - cjelobrojne varijable, type int
// 09351008
#include <stdio.h>

int obim(int a) {      // definisanje funkcije obim kvadrata
return 4 * a;      // obim kvadrata - izracunaj i vrati u glavni program
}

int main ()
{
printf("Obim kvadrata\n");
int a, o;                    // deklarisanje varijabli a i o

printf("Stranica: ");        // naziv varijable
scanf("%d",&a);              // stranica, ulazna vrijednost

o = obim(a);                 // obim kvadrata, poziv funkcije

printf("Stranica = %d, obim kvadrata = %d ", a, o);   // ispis vrijednosti

return 0;
}