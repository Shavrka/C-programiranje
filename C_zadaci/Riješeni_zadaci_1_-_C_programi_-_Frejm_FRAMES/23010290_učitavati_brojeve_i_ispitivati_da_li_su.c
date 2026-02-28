/*
 * ZADATAK 23010290 - 23010290
 * Učitavati brojeve i ispitivati da li su prosti pa takve sabirati dok ne unesemo 5 prostih brojeva. Ispisati zbir.
 * Kategorija: Riješeni zadaci 1 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010290.htm
 */

#include <stdio.h>
#include <stdbool.h>

int main()
{
int x, i;
int br=0, suma5=0;   // brojac i suma prostih brojeva
bool prost=true;     // pocetna vrijednost indikatora prostih brojeva
double kor;          // granica trazenja prostog broja

printf("Provjera i sabiranje dok se ne ucita 5 prostih brojeva\n");   // naslov
while (br< 5) {      // dok se ne ucita 5 prostih brojava - petlja ponavljaj
prost=true;
printf("Ucitaj broj: ");
scanf("%d",&x);

kor = sqrt(x);       // korijen, manji broj testiranja
for (int i = 2; i <= kor && prost == true; i++) // kreiramo umnožak svih brojeva do x
if (x % i == 0)       // ako je broj x djeljiv sa brojem i ...
prost=false;      // ...tada je broj složen
if (x==2)
prost=true;

if (prost==true) {      // ako je indikator prost istinit ...
printf("Prost je.\n", x);   // ... tada: broj prost
suma5=suma5+x ;     // uvecaj sumu
br++;               // uvecaj brojac
}
else
printf("Nije prost.\n", x); // ... inace: broj nije prost
}
printf("Suma 5 unesenih prostih brojeva je: %d\n", suma5);   // ... tada: broj prost

return 0;
}