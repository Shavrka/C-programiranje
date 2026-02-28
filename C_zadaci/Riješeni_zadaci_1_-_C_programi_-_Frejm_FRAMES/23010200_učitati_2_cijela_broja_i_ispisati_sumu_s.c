/*
 * ZADATAK 23010200 - 23010200
 * Učitati 2 cijela broja i Ispisati sumu svih parnih brojeva između njih.
 * Kategorija: Riješeni zadaci 1 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010200.htm
 */

#include <stdio.h>

int main ()
{
int i, a, b, pom, suma;

printf("Prvi broj: ");
scanf("%d",&a);
printf("Drugi broj ");
scanf("%d",&b);

if (a > b){   // a prima manju vrijednost - swap
pom = a;
a = b;
b = pom;
}

printf( "Izmedju brojeva: %d i %d \n", a, b);   // naslov i opseg ispisa

suma = 0;      // pocetna vrijednost sume
for ( i= a+1; i < b; i++)  // ponavljanje za i=a+1 do i=b-1 - pocetak petlje
if(i%2 == 0) {        // da li je broj parana
suma += i;        // kumulativna suma - na prethodnu sumu dadaj vrijednost i
printf("Broj= %d,  suma parnih = %d\n", i, suma);   // ispis vrijednosti
}

printf( "Suma parnih u intervalu je %d", suma);   // ispis vrijednosti

return 0;
}