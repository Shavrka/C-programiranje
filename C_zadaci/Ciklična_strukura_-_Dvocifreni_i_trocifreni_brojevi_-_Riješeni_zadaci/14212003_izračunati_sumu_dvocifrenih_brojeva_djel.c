/*
 * ZADATAK 203 - 14212003
 * Izračunati sumu dvocifrenih brojeva djeljivih sa 3.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14212003.htm
 */

#include <stdio.h>

int main()
{
printf("Dvocifreni - Suma brojeva djeljivih sa 3\n");  // naslov
int i;                        // deklarisanje varijable broj
int s = 0;                    // pocetna vrijednost sume

for (i=10; i <= 99; i++)      // za dvocifrene brojeve radi
if (i % 3 == 0 )          // dijeljiv sa 3; ostatak dijeljenja sa 3 je 0?
s = s + i;            // nova vrijednost sume
printf("Suma = %d", s);       // ispis sume

return 0;
}