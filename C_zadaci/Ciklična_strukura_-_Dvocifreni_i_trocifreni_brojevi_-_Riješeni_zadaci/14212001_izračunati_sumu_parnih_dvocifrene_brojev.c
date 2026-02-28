/*
 * ZADATAK 201 - 14212001
 * Izračunati sumu parnih dvocifrene brojeva (djeljivih sa 2).
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14212001.htm
 */

#include <stdio.h>

int main()
{
printf("Dvocifreni - Suma parnih\n");  // naslov
int i;                          // deklarisanje varijable broj
int s = 0;                      // pocetna vrijednost sume

for (i=10; i <= 99; i++)        // za dvocifrene brojeve radi
if (i % 2 == 0 )            // broj je paran; ostatak dijeljenja sa 2 je 0?
s = s + i;              // nova vrijednost sume
printf("Suma parnih = %d", s);  // ispis sume

return 0;
}