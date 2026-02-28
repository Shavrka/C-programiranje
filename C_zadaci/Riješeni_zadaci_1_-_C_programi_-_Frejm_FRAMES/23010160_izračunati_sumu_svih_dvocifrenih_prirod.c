/*
 * ZADATAK 23010160 - 23010160
 * Izračunati sumu svih dvocifrenih  prirodnih bojeva.
 * Kategorija: Riješeni zadaci 1 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010160.htm
 */

#include <stdio.h>

int main()
{
int i, suma;
suma = 0;     // pocetna vrijednost sume

printf( "Suma dvocifrenih brojeva\n");   // naslov   \n - prelazak u novi red
for ( i = 10; i <= 99; i++)   // ponavljanje za i=10 do i=99 - pocetak petlje
suma += i;                // kumulativna suma - na prethodnu sumu dadaj novu vrijednost i

printf( "Suma = %d\n", suma);   // ispis vrijednosti sume

return 0;
}