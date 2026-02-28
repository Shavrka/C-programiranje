/*
 * ZADATAK 820 - 14614020
 * Napisati program za izračunavanje koliko ima (prebrojati) trocifrenih brojeva čija je prva cifra djeljiva sa 3 a druga cifra djeljiva sa 4.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14614020.htm
 */

#include <stdio.h>

int main()
{
printf("Brojanje trocifrenih brojeva - prva cifra djeljiva sa 3 a druga cifra djeljiva sa 4\n");  // naslov

int broj, d, s;             // deklarisanje varijabli
int br = 0;                 // pocetne vrijednost

for (broj=100; broj <= 999; broj++){  // za trocifrene brojeve radi
d = (broj / 10);
d = d % 10;             // desetice
s = broj / 100;         // stotice
if (s % 3 == 0 && d % 4 == 0) // prva cifra djeljiva sa 3 a druga cifra djeljiva sa 4?
br = br + 1;        // jos jedan broj
}

printf("Brojac: %d", br); // ispis

return 0;
}

Ispis na ekranu:
Brojanje trocifrenih brojeva - prva cifra djeljiva sa 3 a druga cifra djeljiva sa 4
Brojac: 90