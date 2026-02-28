/*
 * ZADATAK 40_01 - 09311032
 * Napisati program koji izvodi pretvaranja km/h u m/s. Koristiti potprograme.
 * Kategorija: Funkcije /FUNCTIONS/ - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/093c/09311032.htm
 */

#include <stdio.h>

float km_m(float km){      // definisanje funkcije Pretvaranje km/h --> m/s
return (km / 3.6);      // izracunaj i vrati u glavni program
}

int main ()
{
printf("Pretvaranje km/h --> m/s\n");  // naslov
float m, km;                      // deklarisanje varijabli

printf("Brzina km/h: ");
scanf("%f", &km);                     // ulazna vrijednost

printf("Brzina km/h = %.2f   Brzina m/s = %.2f ", km, km_m(km));   // poziv funkcije i ispis

return 0;
}

II varijanta     poziv iz naredbe pridruživanja
// 09311032
#include <stdio.h>

float km_m(float km){      // definisanje funkcije Pretvaranje km/h --> m/s
return (km / 3.6);      // izracunaj i vrati u glavni program
}

int main ()
{
printf("Pretvaranje km/h --> m/s\n");  // naslov
float m, km, brzina_m;                 // deklarisanje varijabli

printf("Brzina km/h: ");
scanf("%f", &km);                     // ulazna vrijednost

brzina_m = km_m(km);                  // poziv funkcije i racunaj

printf("Brzina km/h = %.2f   Brzina m/s = %.2f ", km, brzina_m);

return 0;
}