/*
 * ZADATAK 23010284 - 23010284
 * Ispisati najveći četverocifreni prost broj.
 * Kategorija: Riješeni zadaci 1 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010284.htm
 */

#include <stdio.h>
#include <stdbool.h>

int main()
{
int x, i;
float kor;

bool prost=true;  // pocetna vrijednost indikatora prostih brojeva

printf("Najveci cetverocifreni prost broj\n"); // naslov

for (x = 9999; x >= 1000; x--) { // cetverocifreni brojevi - pocetak petlje
prost=true;          // pretpostavimo da je broj prost
kor = sqrt(x);       // korijen, manji broj testiranja
for (int i = 2; i <= kor && prost == true; i++) // kreiramo umnožak svih brojeva do x
if (x % i == 0)       // ako je broj x djeljiv sa brojem i ...
prost=false;      // ...tada je broj složen

if (prost==true) {        // ako je indikator prost istinit ...
printf("%d", x);     // ... tada: broj prost
break;}
}

return 0;
}