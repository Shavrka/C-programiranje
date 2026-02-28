/*
 * ZADATAK 23010262 - 23010262
 * Ispisati broj 4-cifrenih prostih brojeva.
 * Kategorija: Riješeni zadaci 1 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010262.htm
 */

#include <stdio.h>
#include <stdbool.h>

int main()
{
int x, i, br;
br = 0;             // brojac prostih brojeva
bool prost=true;

printf("Brojac prostih cetverocifrenih brojeva\n"); // naslov

for (x = 10000; x < 100000; x++) { // cetverocifreni brojevi - pocetak petlje
prost=true;          // pretpostavimo da je broj prost
for (int i = 2; i < x && prost == true; i++) // kreiramo umnožak svih brojeva do x
if (x % i == 0)    // ako je broj x djeljiv sa brojem i ...
prost=false;   // ...tada je broj složen

if (prost==true) {     // ako je indikator prost istinit ...
br++;             // ... tada:uvecaj brojac prostih brojeva
}
}
printf("Ima %d prostih cetverocifrenih brojeva.", br); // prost broj

return 0;
}