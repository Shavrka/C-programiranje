/*
 * ZADATAK 40_03 - 09311034
 * Napisati program koji izvodi pretvaranja m/s u km/h. Koristiti potprograme.
 * Kategorija: Funkcije /FUNCTIONS/ - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/093c/09311034.htm
 */

#include <stdio.h>

float m_km(float m){      // definisanje funkcije Pretvaranje m/s --> km/h
return (m * 3.6);      // izracunaj i vrati u glavni program
}

int main ()
{
printf("Pretvaranje m/s --> km/h\n");  // naslov
float m, km;                      // deklarisanje varijabli

printf("Brzina m/s: ");
scanf("%f", &m);                     // ulazna vrijednost

printf("Brzina m/s = %.2f   Brzina km/h = %.2f ", m, m_km(m));   // poziv funkcije i ispis

return 0;
}

II varijanta     poziv iz naredbe pridruživanja
// 09311034
#include <stdio.h>

float m_km(float m){      // definisanje funkcije Pretvaranje m/s --> km/h
return (m * 3.6);      // izracunaj i vrati u glavni program
}

int main ()
{
printf("Pretvaranje m/s --> km/h\n");  // naslov
float m, km, brzina_km;                // deklarisanje varijabli

printf("Brzina m/s: ");
scanf("%f", &m);                     // ulazna vrijednost

brzina_km = m_km(m);                 // poziv funkcije i racunaj

printf("Brzina m/s = %.2f   Brzina km/h = %.2f ", m, brzina_km);   // poziv funkcije i ispis

return 0;
}