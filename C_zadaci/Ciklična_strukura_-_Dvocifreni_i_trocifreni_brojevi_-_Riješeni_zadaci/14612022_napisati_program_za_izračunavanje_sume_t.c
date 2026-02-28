/*
 * ZADATAK 622 - 14612022
 * Napisati program za izračunavanje sume trocifrenih brojeva čija je suma prve dvije cifre djeljiva sa 3.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14612022.htm
 */

#include <stdio.h>
// 14612022

int main()
{
printf("Suma trocifrenih brojeva - suma prve dvije cif djeljive sa 3\n");  // naslov

int broj, d, s;             // deklarisanje varijabli
int suma = 0;               // pocetne vrijednost sume

for (broj=100; broj <= 999; broj++){  // za trocifrene brojeve radi
d = (broj / 10);
d = d % 10;             // desetice
s = broj / 100;         // stotice
if ((s + d) % 3 == 0)   // suma prve dvije cif djeljive sa 3?
suma = suma + broj; // uvecaj sumu
}

printf("Suma: %d", suma);  // ispis

return 0;
}

Ispis na ekranu:
Suma trocifrenih brojeva - suma prve dvije cif djeljive sa 3
Suma: 167850