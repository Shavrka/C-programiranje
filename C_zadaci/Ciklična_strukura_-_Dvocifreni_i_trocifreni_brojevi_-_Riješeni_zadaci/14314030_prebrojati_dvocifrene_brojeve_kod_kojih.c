/*
 * ZADATAK 331 - 14314030
 * Prebrojati dvocifrene brojeve kod kojih je suma cifara veća od 7.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14314030.htm
 */

#include <stdio.h>

int main()
{
printf("Brojac dvocifrenih brojeva - suma cifara veca od 7\n");  // naslov

int broj, d, j;                   // deklarisanje varijabli
int br = 0;                       // pocetna vrijednost

for (broj=10; broj <= 99; broj++) {// za dvocifrene brojeva radi
j = broj % 10;                // jedinica
d = broj / 10;                // desetica
if ((d + j) > 7)              // ostatak dijeljenja sa 3 je 1?
br = br + 1;              // jos jedan broj
}
printf("Brojac = %d", br);        // ispis

return 0;
}