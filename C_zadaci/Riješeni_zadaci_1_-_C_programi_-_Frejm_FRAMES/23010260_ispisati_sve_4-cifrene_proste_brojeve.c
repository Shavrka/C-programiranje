/*
 * ZADATAK 23010260 - 23010260
 * Ispisati sve 4-cifrene proste brojeve.
 * Kategorija: Riješeni zadaci 1 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010260.htm
 */

#include <stdio.h>
#include <stdbool.h>

int main()
{
int x, i;
bool prost=true;  // pocetna vrijednost indikatora prostih brojeva

printf("Prosti cetverocifreni brojevi\n"); // naslov

for (x = 10000; x < 100000; x++) { // cetverocifreni brojevi - pocetak petlje
prost=true;          // pretpostavimo da je broj prost
for (int i = 2; i < x && prost == true; i++) // kreiramo umnožak svih brojeva do x
if (x % i == 0)       // ako je broj x djeljiv sa brojem i ...
prost=false;      // ...tada je broj složen

if (prost==true)          // ako je indikator prost istinit ...
printf(" %d", x);     // ... tada: broj prost
}

return 0;
}