/*
 * ZADATAK 85 - 09351006
 * Naći površinu kruga (Funkcija koristi nove varijable. Pridruživanje vrijednosti funkcije u glavnom programu p = površina(r).
 * Kategorija: Funkcije /FUNCTIONS/ - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/093c/09351006.htm
 */

#include <stdio.h>
#include <math.h>       //  ugradjena funkcija sadrzi vrijednosti broja PI (M_PI)

float povrsina(float r) {  // definisanje funkcije povrsina kruga
return r * r * M_PI;   // povrsina kruga
}

int main ()
{
printf("Povrsina kruga\n");
float r;                      // deklarisanje varijable r

printf("Poluprecnik: ");      // ulazna vrijednost
scanf("%f",&r);

printf("Poluprecnik = %.2f, povrsina kruga = %.2f ", r, povrsina(r));   // poziv funkcije i ispis vrijednosti

return 0;
}

II varijanta poziv funkcije iz naredbe pridruzivanja
// 09351006
#include <stdio.h>
#include <math.h>       //  ugradjena funkcija sadrzi vrijednosti broja PI (M_PI)

float povrsina(float r) {  // definisanje funkcije povrsina kruga
return r * r * M_PI;   // povrsina kruga
}

int main ()
{
printf("Povrsina kruga\n");
float r, p;                   // deklarisanje varijable r

printf("Poluprecnik: ");      // naziv varijable
scanf("%f",&r);               // ulazna vrijednost

p = povrsina(r);               // povrsina kvadrata, poziv funkcije

printf("Poluprecnik = %.2f, povrsina kruga = %.2f ", r, p);   // ispis

return 0;
}