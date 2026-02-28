/*
 * ZADATAK 822 - 14614022
 * Napisati program za izračunavanje koliko ima (prebrojati) trocifrenih brojeva čija je suma prve dvije cifre djeljiva sa 3.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14614022.htm
 */

#include <stdio.h>

int main()
{
printf("Brojanje trocifrenih brojeva - suma prve dvije cif djeljive sa 3\n");  // naslov
int broj, d, s;              // deklarisanje varijabli
int br = 0;                  // pocetna vrijednost

for (broj=100; broj <= 999; broj++){ // za trocifrene brojeve radi
d = (broj / 10);
d = d % 10;               // desetice
s = broj / 100;           // stotice

if ((s + d) % 3 == 0) {   // suma prve dvije cif djeljive sa 3
br = br + 1;          // jos jedan broj
}
}

printf("Brojac: %d", br);      // ispis

return 0;
}

Ispis na ekranu:
Brojanje trocifrenih brojeva - suma prve dvije cif djeljive sa 3
Brojac: 300