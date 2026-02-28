/*
 * ZADATAK 134 - 08702313
 * Od dvocifrenih brojeva ispisati one čiji je proizvod cifara iz intervala [20, 30].
 * Kategorija: Ciklična strukura - kombinovani zadaci - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/087c/08702313.htm
 */

#include <stdio.h>

int main()
{
printf("Dvocifreni - Proizvod cifara 10 <= p <= 20\n");  // naslov
int i, d, j;                  // deklarisanje varijable broj
int p = 0;                    // pocetna vrijednost sume

for (i=10; i <= 99; i++) {    // za dvocifrene brojeve radi
d = i / 10;               // cifra desetica
j = i % 10;               // cifra jedinica
p = d * j;                // proizvod cifra
if ((p >= 10) && (p <= 20) )  // 10 <= p <= 20?
printf("%d, ", i);   // da proizvod je u opsegu, ispis
}
return 0;
}

Ispis na ekranu:
Dvocifreni - Proizvod cifara 10 <= p <= 20
25, 26, 27, 28, 29, 34, 35, 36, 43, 44, 45, 52, 53, 54, 62, 63, 72, 82, 92,