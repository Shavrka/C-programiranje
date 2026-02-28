/*
 * ZADATAK 23010240 - 23010240
 * Učitati proizvoljan prirodan broj i ispitati da li je to prost broj.
 * Kategorija: Riješeni zadaci 1 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010240.htm
 */

#include <stdio.h>
#include <stdbool.h>

main() {

int a ;

printf("Unesi proizvoljan prirodan broj: "); // ispis parnog broja
scanf("%d", &a);

while (a < 1){
printf("Broj koji ste unijeli nije prirodan. Unesi proizvoljan prirodan broj: ");    // broj manji od 1
scanf("%d", &a);
}

bool prost=true;

for (int i=2; i < a && prost==true; i++)   // ponavljanje za i=2 do i < a - pocetak petlje
if (a%i==0)                  // ako je ucitani broj a djeljiv sa brojem i ...
prost=false;             // ...tada je broj složen

if (prost==true)                 // ako je indikator prost istinit ...
printf("Broj je prost.");    // ... tada: broj prost
else
printf("Broj je slozen.");   // ... inače: broj je složen

return 0;
}