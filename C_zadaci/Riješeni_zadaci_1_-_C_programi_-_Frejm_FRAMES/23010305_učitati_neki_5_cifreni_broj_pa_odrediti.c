/*
 * ZADATAK 23010305 - 23010305
 * Učitati neki 5 cifreni broj pa odrediti i Ispisati njemu najbliži prost broj.
 * Kategorija: Riješeni zadaci 1 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010305.htm
 */

#include <stdio.h>
#include <stdbool.h>

int main()
{
int x, i;
int xgore = 0, xdole = 0;   // gornji i donji prost petocifren broj

bool prost=true;  // pocetna vrijednost indikatora prostih brojeva

printf("Ucitati petocifren broj: ");
scanf("%d",&x);
while (x < 100 || x > 99999) {
printf("Broj nije petocifren. Unesi petocifren broj:: ");
scanf("%d",&x);
}

for (int y = x + 1; y < 100000; y++) {  // trazi se prvi prost broj na vise
prost = true;            // pretpostavimo da je broj prost
for (int i = 2; i < y && prost == true; i++) // kreiramo umnožak svih brojeva do x
if (y % i == 0)      // ako je broj x djeljiv sa brojem i ...
prost = false;   // ...tada je broj složen
if (prost == true) {     // ako je indikator prost istinit ...
xgore = y;     // ... tada: broj prost i to postaje gornji prost broj
break;         // izlzak if for petlje za grornje brojeve
}
}
for (int y = x - 1; y > 1; y--) {  // trazi se prvi prost broj na nize
prost = true;          // pretpostavimo da je broj prost
for (int i = 2; i < y && prost == true; i++) // kreiramo umnožak svih brojeva do x
if (y % i == 0)      // ako je broj x djeljiv sa brojem i ...
prost = false;   // ...tada je broj složen
if (prost == true) {     // ako je indikator prost istinit ...
xdole = y;     // ... tada: broj prost i to postaje donji prost broj
break;         // izlzak if for petlje za grornje brojeve
}
}
if (xgore - x < x - xdole)
printf("Najblizi prost broj: %d", xgore);
if (xgore - x > x - xdole)
printf("Najblizi prost broj: %d", xdole);
if (xgore - x == x - xdole)
printf("Jednako blizu prosti brojevi su: %d i %d", xdole,  xgore);
return 0;
}