/*
 * ZADATAK 23010170 - 23010170
 * Izračunati proizvod svih jednocifrenih brojeva i od njega oduzeti sumu svih trocifrenih brojeva.
 * Kategorija: Riješeni zadaci 1 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010170.htm
 */

#include <stdio.h>

int main()
{
int i, suma, proizvod;

printf( "Proizvod jednocifrenih - suma trocifrenih brojeva\n");   // naslov   \n - prelazak u novi red
proizvod = 1;      // pocetna vrijednost proizvoda
for ( i = 1; i <= 9; i++)   // ponavljanje za i=1 do i=9 - pocetak petlje
proizvod *= i;           // kumulativni proizvod - proizvod pomnozi sa novom vrijednoscu i

suma = 0;          // pocetna vrijednost sume
for ( i = 100; i <= 999; i++)   // ponavljanje za i=100 do i=999 - pocetak petlje
suma += i;                  // kumulativna suma - na prethodnu sumu dadaj novu vrijednost i

printf( "Proizvod - suma = %d - %d = %d", proizvod, suma, proizvod - suma);  // ispis vrijednosti razlike proizvoda i sume

return 0;
}