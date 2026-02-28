/*
 * ZADATAK 214 - 14212014
 * Izračunati sumu dvocifrenih brojeva kod kojih je suma cifara manja od 7.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14212014.htm
 */

#include <stdio.h>

int main()
{
printf("Dvocifreni - Suma cifara manja od 7\n");  // naslov
int i, d, j;                  // deklarisanje varijable broj
int s = 0;                    // pocetna vrijednost sume

for (i=10; i <= 99; i++) {    // za dvocifrene brojeve radi
d = i / 10;               // cifra desetica
j = i % 10;               // cifra jedinica
if ((d + j) < 7 )         // suma cifara manja od 7?
s = s + i;            // nova vrijednost sume
}
printf("Suma = %d", s);       // ispis sume

return 0;
}