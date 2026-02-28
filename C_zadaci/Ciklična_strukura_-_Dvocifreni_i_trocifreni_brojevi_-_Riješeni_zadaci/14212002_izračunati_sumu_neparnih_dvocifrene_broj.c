/*
 * ZADATAK 202 - 14212002
 * Izračunati sumu neparnih dvocifrene brojeva (nisu djeljivih sa 2).
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14212002.htm
 */

#include <stdio.h>

int main()
{
printf("Dvocifreni - Suma neparnih\n");  // naslov
int i;                          // deklarisanje varijable broj
int s = 0;                      // pocetna vrijednost sume

for (i=10; i <= 99; i++)        // za dvocifrene brojeve radi
if (i % 2 != 0 )            // broj je neparan; ostatak dijeljenja sa 2 je 1?
s = s + i;              // nova vrijednost sume
printf("Suma neparnih = %d", s); // ispis sume

return 0;
}