/*
 * ZADATAK 23010180 - 23010180
 * Izračunati proizvod svih dvocifrenih parnih brojeva.
 * Kategorija: Riješeni zadaci 1 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010180.htm
 */

#include <stdio.h>

int main()
{
int i;
double proizvod;

printf( "Proizvod parnih dvocifrenih\n");   // naslov   \n - prelazak u novi red
proizvod = 1;                    // pocetna vrijednost proizvoda
for ( i = 10; i < 100; i=i+2 ){  // ponavljanje za i=10 do i=99 - pocetak petlje
proizvod = proizvod *i;      // kumulativni proizvod - na prethodni proizvod dadaj novu vrijednost i (proizvod *= i);
printf("i= %d  Proizvod= %le\n", i, proizvod);   // ispis vrijednosti
}

printf( "Proizvod parnih dvocifrenih: %le", proizvod);   // ispis vrijednosti

return 0;
}