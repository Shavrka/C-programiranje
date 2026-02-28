/*
 * ZADATAK 712 - 14613012
 * Napisati program za izračunavanje proizvoda trocifrenih brojeva djeljive sa 3.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14613012.htm
 */

#include <stdio.h>

int main()
{
printf("Trocifren broj - Proizvod - djeljivih sa 3\n");  // naslov
int broj, exponent = 0;          // deklarisanje varijabli
double p = 1.0;                  // pocetna vrijednost proizvoda

for (broj=100; broj<=999; broj++) { // za trocifrene brojeve radi
if (broj % 3 == 0) {         // ostatak dijeljenja sa 3 je 0?
p = (double)p * broj;    // nova vrijednost proizvoda
if (p>1000) {            // proizvod veci od 1000?
p = p / 1000;       // podijeli proizvod sa 1000
exponent = exponent + 3;   // uvecaj eksponet za 3
} else {                 // proizvod nije veci od 1000
p = p / 10;         // podijeli p sa 10
exponent = exponent + 1;   // uvecaj eksponet za 1
}
}
}
printf("Proizvod = %f  eksponent %d", p, exponent);      // ispis proizvoda

return 0;
}