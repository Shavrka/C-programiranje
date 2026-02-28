/*
 * ZADATAK 82 - 09351003
 * Za upisani poluprečnik izračunati obim kruga (pet puta upis se izvodi u glavnom programu).
 * Kategorija: Funkcije /FUNCTIONS/ - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/093c/09351003.htm
 */

#include <stdio.h>
#include <math.h>       //  ugradjena funkcija sadrzi vrijednosti broja PI (M_PI)

float obim(float r) {      // definisanje funkcije obim kruga
return 2 * r * M_PI;   // obim kruga
}

int main ()
{
printf("Obim kruga 5x poluprecnik");
int i;                        // dekrlarisanje varijabeli
float r;                      // deklarisanje varijable r
for(int i = 1; i <= 5; i++){  // za i od 1 do 5 ponavljaj
printf("\n%d.poluprecnik: ", i);      // ulazna vrijednost
scanf("%f",&r);           // ulazna vrijednost
printf("Poluprecnik = %.2f, obim kruga = %.2f ", r, obim(r));   // ispis obima
}
return 0;
}

II varijanta poziv funkcije iz naredbe pridruzivanja

// 09351003
#include <stdio.h>
#include <math.h>       //  ugradjena funkcija sadrzi vrijednosti broja PI (M_PI)

float obim(float r) {      // definisanje funkcije obim kruga
return 2 * r * M_PI;   // obim kruga
}

int main ()
{
printf("Obim kruga 5x poluprecnik");
int i;                        // dekrlarisanje varijabeli
float r, o;                   // deklarisanje varijable r
for(int i = 1; i <= 5; i++){  // za i od 1 do 5 ponavljaj
printf("\n%d.poluprecnik: ", i);      // naziv varijable
scanf("%f",&r);           // ulazna vrijednost

o = obim(r);                  // obim kvadrata, poziv funkcije
printf("Poluprecnik = %.2f, obim kruga = %.2f ", r, o);   // ispis obima
}
return 0;
}

Ispis na ekranu:
Obim kruga
1.poluprecnik: 1
Poluprecnik = 1.00, obim kruga = 6.28
2.poluprecnik: 2
Poluprecnik = 2.00, obim kruga = 12.57
3.poluprecnik: 2.2
Poluprecnik = 2.20, obim kruga = 13.82
4.poluprecnik: 3.5
Poluprecnik = 3.50, obim kruga = 21.99
5.poluprecnik: 4.1
Poluprecnik = 4.10, obim kruga = 25.76