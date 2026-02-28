/*
 * ZADATAK 09411332 - 09411332
 * Napisati rekurzivnu funkciju za izračunavanje najvećeg zajednički djelioca dva učitana prirodna broja. Koristiti Euklidov algoritam.
 * Kategorija: Funkcije - Rekurzija /FUNCTIONS - RECURSION/ - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/094c/09411332.htm
 */

#include <stdio.h>

int euklid(int a, int b) {
int ostatak;

ostatak = a % b;
if(ostatak == 0) { // ponavljanje dok ostatak nije nula?
return b;      // pri dijelejnju sa b nema ostatka
}
return euklid(b, a % b);    // a = b i b = ostatak
}

int main ()  {
printf("Najveci zajednicki djelioca dva prirodna broja. Rekurzija\n");
int broj_a, broj_b, temp, nzd;

printf("Prvi broj: ");    // ulazne vrijednosti
scanf("%d", &broj_a);

printf("Drugi broj: ");   // ulazne vrijednosti
scanf("%d", &broj_b);

if (broj_a < broj_b) {    // prvi veci od drugog?
temp = broj_b;        // zamjena redosliejda
broj_b = broj_a;
broj_a = temp;
}

nzd = euklid(broj_a, broj_b);   // poziv Euklid potprograma
printf("Brojevi %d i %d imaju NZD %d", broj_a, broj_b, nzd);   // ispis
return 0;
}

II Varijanta
// 09411332
#include <stdio.h>

int euklid(int a, int b) {
if(b == 0)
return a;
return euklid(b, a % b);
}

int main ()  {
printf("Najveci zajednicki djelioca dva prirodna broja. Rekurzija\n");
int broj_a, broj_b, temp, nzd;

printf("Prvi broj: ");    // ulazne vrijednosti
scanf("%d", &broj_a);

printf("Drugi broj: ");   // ulazne vrijednosti
scanf("%d", &broj_b);

if (broj_a < broj_b) {    // prvi veci od drugog?
temp = broj_b;        // zamjena redosliejda
broj_b = broj_a;
broj_a = temp;
}

nzd = euklid(broj_a, broj_b);   // poziv Euklid potprograma
printf("Brojevi %d i %d imaju NZD %d", broj_a, broj_b, nzd);   // ispis
return 0;
}

Ispis na ekranu:
Najveci zajednicki djelioca dva prirodna broja. Rekurzija
Prvi broj: 8
Drugi broj: 5
Brojevi 8 i 5 imaju NZD 1

II izvršavanje
Najveci zajednicki djelioca dva prirodna broja. Rekurzija
Prvi broj: 45
Drugi broj: 30
Brojevi 45 i 30 imaju NZD 15