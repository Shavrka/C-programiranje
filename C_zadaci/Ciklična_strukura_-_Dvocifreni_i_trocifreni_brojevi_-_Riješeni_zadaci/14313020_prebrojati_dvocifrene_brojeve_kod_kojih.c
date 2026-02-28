/*
 * ZADATAK 321 - 14313020
 * Prebrojati dvocifrene brojeve kod kojih je pri djeljenju sa 3 ostatak je 1.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14313020.htm
 */

#include <stdio.h>

int main()
{
printf("Brojac dvocifrenih brojeva - Ostatak dijeljenja sa 3 je 1\n");  // naslov

int broj;                         // deklarisanje varijabli
int br = 0;                       // pocetna vrijednost

for (broj=10; broj <= 99; broj++) // za dvocifrene brojeva radi
if (broj % 3  == 1)           // ostatak dijeljenja sa 3 je 1?
br = br + 1;              // jos jedan broj

printf("Brojac: %d", br);         // ispis

return 0;
}