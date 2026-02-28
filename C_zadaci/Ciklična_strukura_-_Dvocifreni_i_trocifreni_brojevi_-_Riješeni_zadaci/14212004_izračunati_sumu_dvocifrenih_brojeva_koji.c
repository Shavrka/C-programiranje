/*
 * ZADATAK 204 - 14212004
 * Izračunati sumu dvocifrenih brojeva koji nisu djeljivi sa 3.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14212004.htm
 */

#include <stdio.h>

int main()
{
printf("Dvocifreni - Suma brojeva koji nisu dijeljivi sa 3\n");  // naslov
int i;                        // deklarisanje varijable broj
int s = 0;                    // pocetna vrijednost sume

for (i=10; i <= 99; i++)      // za dvocifrene brojeve radi
if (i % 3 != 0 )          // nije dijeljiv sa 3; ostatak dijeljenja sa 3 nije 0?
s = s + i;            // nova vrijednost sume
printf("Suma = %d", s);       // ispis sume

return 0;
}

II verzija   s += i
// 14212004
#include <stdio.h>

int main()
{
printf("Dvocifreni - Suma brojeva koji nisu dijeljivi sa 3\n");  // naslov
int i;                        // deklarisanje varijable broj
int s = 0;                    // pocetna vrijednost sume

for (i=10; i <= 99; i++)      // za dvocifrene brojeve radi
if (i % 3 != 0 )          // nije dijeljiv sa 3; ostatak dijeljenja sa 3 nije 0?
s += i;               // nova vrijednost sume
printf("Suma = %d", s);       // ispis sume

return 0;
}