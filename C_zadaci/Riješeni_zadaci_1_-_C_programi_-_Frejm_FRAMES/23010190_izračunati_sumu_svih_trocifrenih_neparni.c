/*
 * ZADATAK 23010190 - 23010190
 * Izračunati sumu svih trocifrenih neparnih brojeva.
 * Kategorija: Riješeni zadaci 1 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010190.htm
 */

#include <stdio.h>

int main()
{
int i, suma;

printf( "Suma neparnih trocifrenih\n");   // naslov   \n - prelazak u novi red
suma = 0;      // pocetna vrijednost sume
for ( i=101; i < 1000; i+=2){     // ponavljanje za i=101 do i=999 - pocetak petlje
suma += i;        // kumulativna suma - na prethodnu sumu dadaj vrijednost i
printf("i= %d  Suma neparnih = %d\n", i, suma);   // ispis vrijednosti
}

printf( "Suma neparnih trocifrenih: %d", suma);   // ispis vrijednosti

return 0;
}