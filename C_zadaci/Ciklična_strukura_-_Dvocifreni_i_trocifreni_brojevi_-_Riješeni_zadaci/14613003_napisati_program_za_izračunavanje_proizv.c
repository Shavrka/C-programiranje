/*
 * ZADATAK 703 - 14613003
 * Napisati program za izračunavanje proizvoda trocifrenih brojeva sa istim ciframa.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14613003.htm
 */

#include <stdio.h>

int main()
{
printf("Trocifreni brojevi - Proizvod brojeva sa istim ciframa\n");  // naslov
int broj, j, d, s;                // deklarisanje varijabli
double p = 1.0;                  // pocetna vrijednost proizvoda
int exponent = 0;                // pocetna vrijednost eksponenta

for (broj=100; broj<=999; broj++) { // za trocifrene brojeve radi
j = broj % 10;               // jedinice
d = (broj / 10);
d = d % 10;                  // desetice
s = broj / 100;              // stotice
if (s == d && d == j) {      // iste cifre?
p = (double)p * broj;    // nova vrijednost proizvoda
if (p>1000) {            // proizvod veci od 1000?
p = p / 1000;       // podijeli proizvod sa 1000
exponent = exponent + 3;   // uvecaj eksponet za 3
} else {                 // proizvod nije veci od 1000
p = p / 10;         // podijeli p sa 10
exponent = exponent + 1;  // uvecaj eksponet za 1
}
}
}
printf("Proizvod = %f  eksponent %d", p, exponent);      // ispis proizvoda

return 0;
}