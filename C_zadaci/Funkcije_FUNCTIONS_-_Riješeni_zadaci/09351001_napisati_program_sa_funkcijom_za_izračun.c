/*
 * ZADATAK 80 - 09351001
 * Napisati program sa funkcijom za izračunavanje obima kruga.
 * Kategorija: Funkcije /FUNCTIONS/ - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/093c/09351001.htm
 */

#include <stdio.h>
#include <math.h>       //  ugradjena funkcija sadrzi vrijednosti broja PI (M_PI)

float obim(float r) {      // definisanje funkcije obim kruga
return 2 * r * M_PI;   // obim kruga
}

int main ()
{
printf("Obim kruga\n");
float r;                      // deklarisanje varijable r

printf("Poluprecnik: ");      // ulazna vrijednost
scanf("%f",&r);

printf("Poluprecnik = %.2f, obim kruga = %.2f ", r, obim(r));   // poziv funkcije i ispis vrijednosti

return 0;
}

II varijanta poziv funkcije iz naredbe pridruzivanja
// 09351001
#include <stdio.h>
#include <math.h>       //  ugradjena funkcija sadrzi vrijednosti broja PI (M_PI)

float obim(float r) {      // definisanje funkcije obim kruga
return 2 * r * M_PI;   // obim kruga
}

int main ()
{
printf("Obim kruga\n");
float r, o;                   // deklarisanje varijable r

printf("Poluprecnik: ");      // naziv varijable
scanf("%f",&r);               // ulazna vrijednost

o = obim(r);                  // obim kvadrata, poziv funkcije

printf("Poluprecnik = %.2f, obim kruga = %.2f ", r, o);   // ispis obima

return 0;
}