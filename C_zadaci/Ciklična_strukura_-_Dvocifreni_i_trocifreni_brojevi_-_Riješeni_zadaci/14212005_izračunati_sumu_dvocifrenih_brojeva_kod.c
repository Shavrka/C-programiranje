/*
 * ZADATAK 205 - 14212005
 * Izračunati sumu dvocifrenih brojeva kod kojih je pri djeljenju sa 3 ostatak je 1.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14212005.htm
 */

#include <stdio.h>

int main()
{
printf("Dvocifreni - Suma brojeva ciji je ostatak dijeljenja sa 3 je 1\n");  // naslov
int i;                        // deklarisanje varijable broj
int s = 0;                    // pocetna vrijednost sume

for (i=10; i<=99; i++)        // za dvocifrene brojeve radi
if (i % 3 == 1 )          // ostatak dijeljenja sa 3 je 1?
s = s + i;            // nova vrijednost sume
printf("Suma = %d", s);       // ispis sume

return 0;
}

Ispis na ekranu:
Dvocifreni - Suma brojeva ciji je ostatak dijeljenja sa 3 je 1
Suma = 1605