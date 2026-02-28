/*
 * ZADATAK 23010310 - 23010310
 * Učitavati brojeve i ispitivati da li su prosti pa takve množiti dok ne unesemo 3 prosta broja. Ispisati proizvod.
 * Kategorija: Riješeni zadaci 1 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010310.htm
 */

#include <stdio.h>
#include <stdbool.h>

int main()
{
bool prost;     // pocetna vrijednost indikatora prostih brojeva
int x, i;
int br = 0;     // broj prostih ucitanih brojeva
int pro3 = 1;   // pocetna vrijednost proizvoda
double kor;

while (br< 3) {      // provjera broja ucitanih prostih brojeva
prost = true;          // pretpostavimo da je broj prost
printf("Ucitati broj: ");
scanf("%d", &x);
kor = sqrt(x);         // korijen, manji broj testiranja

for (i = 2; i <= kor && prost == true; i++) // kreiramo umnožak svih brojeva do x
if (x % i == 0)      // ako je broj x djeljiv sa brojem i ...
prost = false;   // ...tada je broj složen

if (x==2)
prost=true;

if (prost == true) {     // ako je indikator prost istinit ...
pro3 = pro3 * x ;    // pomnozi priyvod
br++;                // uvecaj brojac
printf(" Broj je prost. \n");   // ... tada: broj prost
}
else
printf(" Broj nije prost. \n");   // ... tada: broj prost
}
printf("Proizvod 3 prosta broja %d", pro3);   // ... tada: broj prost

return 0;
}