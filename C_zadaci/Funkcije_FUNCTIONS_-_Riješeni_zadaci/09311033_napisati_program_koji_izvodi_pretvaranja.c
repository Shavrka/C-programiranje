/*
 * ZADATAK 40_02 - 09311033
 * Napisati program koji izvodi pretvaranja 5 ucitanih vrijednosti brzine u km/h u m/s. Koristiti potprograme.
 * Kategorija: Funkcije /FUNCTIONS/ - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/093c/09311033.htm
 */

#include <stdio.h>

float km_m(float km){      // definisanje funkcije Pretvaranje km/h --> m/s
return (km / 3.6);      // izracunaj i vrati u glavni program
}

int main ()
{
printf("Pretvaranje km/h --> m/s 5x\n");  // naslov
float m, km;                        // deklarisanje varijabli

for (int i= 1; i <= 5; i++) {       // za 1 do 5 radi
printf("%d. brzina km/h: ", i);
scanf("%f", &km);               // ulazna vrijednost
printf("%d. brzina km/h = %.2f   Brzina m/s = %.2f\n", i, km, km_m(km));   // poziv funkcije i ispis
}
return 0;
}

II varijanta     poziv iz naredbe pridruživanja
// 09311033
#include <stdio.h>

float km_m(float km){      // definisanje funkcije Pretvaranje km/h --> m/s
return (km / 3.6);      // izracunaj i vrati u glavni program
}

int main ()
{
printf("Pretvaranje km/h --> m/s 5x\n");  // naslov
float m, km, brzina_m;                 // deklarisanje varijabli

for (int i= 1; i <= 5; i++) {          // za 1 do 5 radi
printf("%d. brzina km/h: ", i);
scanf("%f", &km);                  // ulazna vrijednost

brzina_m = km_m(km);               // poziv funkcije i racunaj

printf("%d. brzina km/h = %.2f   Brzina m/s = %.2f\n", i, km, brzina_m);   // poziv funkcije i ispis
}
return 0;
}

III varijanta     do-while petlja
// 09311033
#include <stdio.h>

float km_m(float km){      // definisanje funkcije Pretvaranje km/h --> m/s
return (km / 3.6);      // izracunaj i vrati u glavni program
}

int main ()
{
printf("Pretvaranje km/h --> m/s 5x\n");  // naslov
float m, km, brzina_m;                    // deklarisanje varijabli
int i=1;

do {                                      // pocetak do-while petlje i
printf("%d. brzina km/h: ", i);
scanf("%f", &km);                     // ulazna vrijednost

brzina_m = km_m(km);                  // poziv funkcije i racunaj

printf("%d. brzina km/h = %.2f   Brzina m/s = %.2f\n", i, km, brzina_m);   // poziv funkcije i ispis
++i;
} while(i<=5);                            // sve dok je i <= 5 ponavljaj
return 0;
}