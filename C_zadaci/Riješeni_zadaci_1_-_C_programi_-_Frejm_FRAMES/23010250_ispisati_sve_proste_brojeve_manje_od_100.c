/*
 * ZADATAK 23010250 - 23010250
 * Ispisati sve proste brojeve manje od 1000.
 * Kategorija: Riješeni zadaci 1 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010250.htm
 */

#include <stdio.h>
#include <stdbool.h>

int main() {
int x, i;
bool prost=true;  // pocetna vrijednost indikatora prostih brojeva

printf("Prosti brojevi do 1000\n"); // naslov

for (x = 2; x < 1000; x++) { // brojevi od 2 do 10000
prost=true;          // pretpostavimo da je broj prost
for (int i = 2; i < x && prost == true; i++) // kreiramo umnožak svih brojeva do x
if (x % i == 0)       // ako je broj x djeljiv sa brojem i ...
prost=false;      // ...tada je broj složen

if (prost==true)          // ako je indikator prost istinit ...
printf(" %d", x);     // ... tada: broj prost
}

return 0;
}