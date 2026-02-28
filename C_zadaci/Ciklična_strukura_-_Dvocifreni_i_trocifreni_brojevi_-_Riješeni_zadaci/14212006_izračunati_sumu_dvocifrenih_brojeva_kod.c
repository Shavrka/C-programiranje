/*
 * ZADATAK 206 - 14212006
 * Izračunati sumu dvocifrenih brojeva kod kojih pri djeljenju sa 3 ostatak nije 1
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14212006.htm
 */

#include <stdio.h>

int main()
{
printf("Dvocifreni - Suma brojeva ciji je ostatak dijeljenja sa 3 je 2\n");  // naslov
int i;                        // deklarisanje varijable broj
int s = 0;                    // pocetna vrijednost sume

for (i=10; i<=99; i++)        // za dvocifrene brojeve radi
if (i % 3 == 2 )          // ostatak dijeljenja sa 3 je 2?
s = s + i;            // nova vrijednost sume
printf("Suma = %d", s);       // ispis sume

return 0;
}

Ispis na ekranu:
Dvocifreni - Suma brojeva ciji je ostatak dijeljenja sa 3 je 2
Suma = 1635