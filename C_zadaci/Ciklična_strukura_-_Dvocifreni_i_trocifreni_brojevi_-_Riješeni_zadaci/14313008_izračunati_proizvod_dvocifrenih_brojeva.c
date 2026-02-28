/*
 * ZADATAK 308 - 14313008
 * Izračunati proizvod dvocifrenih brojeva kod kojih pri djeljenju sa 3 ostatak je 2.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14313008.htm
 */

#include <stdio.h>

int main()
{
printf("Dvocifreni - Proizvod brojeva ciji ostatak dijeljenja sa 3 je 2\n");  // naslov
int broj;                        // deklarisanje varijable broj
double p = 1.0;                  // pocetna vrijednost proizvoda

for (broj=10; broj<=99; broj++)  // za dvocifrene brojeve radi
if (broj % 3 == 2 )          // ostatak dijeljenja sa 3 je 2?
p = (double)p * broj;    // nova vrijednost proizvoda
printf("Proizvod = %e", p);      // ispis proizvoda

return 0;
}

Ispis na ekranu:
Dvocifreni - Proizvod brojeva ciji ostatak dijeljenja sa 3 je 2
Proizvod = 1.384553e+50

II varijanta - program kreira vrijedost eksponenta
// 14313008
#include <stdio.h>

int main()
{
printf("Dvocifreni - Proizvod brojeva ciji ostatak dijeljenja sa 3 je 2\n");  // naslov
int broj, exponent = 0;          // deklarisanje varijabli
double p = 1.0;                  // pocetna vrijednost proizvoda

for (broj=10; broj<=99; broj++){ // za trocifrene brojeve radi
if (broj % 3 == 2 ) {        // ostatak dijeljenja sa 3 je 2?
p = (double)p * broj;    // nova vrijednost proizvoda
if (p>100) {             // proizvod veci od 100?
p = p / 100;        // podijeli sa 100
exponent = exponent + 2;   // uvecaj eksponet za 2
} else {                 // proizvod nije veci od 100
p = p / 10;         // podijeli sa 10
exponent = exponent + 1;   // uvecaj eksponet za 1
}
}
}
printf("Proizvod = %f  eksponent %d", p, exponent);      // ispis proizvoda

return 0;
}