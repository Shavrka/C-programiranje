/*
 * ZADATAK 40_04 - 09311035
 * Napisati program koji izvodi pretvaranja 5 ucitanih vrijednosti brzine u m/s u km/h. Koristiti potprograme.
 * Kategorija: Funkcije /FUNCTIONS/ - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/093c/09311035.htm
 */

#include <stdio.h>

float m_km(float m){      // definisanje funkcije Pretvaranje m/s --> km/h
return (m * 3.6);      // izracunaj i vrati u glavni program
}

int main ()
{
printf("Pretvaranje m/s --> km/h 5x\n");  // naslov
float m, km;                        // deklarisanje varijabli

for (int i= 1; i <= 5; i++) {       // za 1 do 5 radi
printf("%d. brzina m/s: ", i);
scanf("%f", &m); ;               // ulazna vrijednost
printf("%d. brzina m/s = %.2f   Brzina km/h = %.2f\n", i, km, m_km(m));   // poziv funkcije i ispis
}
return 0;
}

II varijanta     poziv iz naredbe pridruživanja
// 09311035
#include <stdio.h>

float m_km(float m){      // definisanje funkcije Pretvaranje m/s --> km/h
return (m * 3.6);      // izracunaj i vrati u glavni program
}

int main ()
{
printf("Pretvaranje m/s --> km/h 5x\n");  // naslov
float m, km, brzina_m;                 // deklarisanje varijabli

for (int i= 1; i <= 5; i++) {          // za 1 do 5 radi
printf("%d. brzina m/s: ", i);
scanf("%f", &m); ;                  // ulazna vrijednost

brzina_m = m_km(m);               // poziv funkcije i racunaj

printf("%d. brzina m/s = %.2f   Brzina km/h = %.2f\n", i, m, brzina_m);   // poziv funkcije i ispis
}
return 0;
}

III varijanta     do-while petlja
// 09311035
#include <stdio.h>

float m_km(float m){      // definisanje funkcije Pretvaranje m/s --> km/h
return (m * 3.6);      // izracunaj i vrati u glavni program
}

int main ()
{
printf("Pretvaranje m/s --> km/h 5x\n");  // naslov
float m, km, brzina_m;                    // deklarisanje varijabli
int i=1;

do {                                      // pocetak do-while petlje i
printf("%d. brzina m/s: ", i);
scanf("%f", &m); ;                     // ulazna vrijednost

brzina_m = m_km(m);               // poziv funkcije i racunaj

printf("%d. brzina m/s = %.2f   Brzina km/h = %.2f\n", i, km, brzina_m);   // poziv funkcije i ispis
++i;
} while(i<=5);                            // sve dok je i <= 5 ponavljaj
return 0;
}