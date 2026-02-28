/*
 * ZADATAK 620 - 14612020
 * Napisati program za izračunavanje sume trocifrenih brojeva čija je prva cifra djeljiva sa 3 a druga cifra djeljiva sa 4.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14612020.htm
 */

#include <stdio.h>

int main()
{
printf("Suma trocifrenih brojeva - prva cifra djeljiva sa 3 a druga cifra djeljiva sa 4\n");  // naslov

int broj, d, s;             // deklarisanje varijabli
int suma = 0;               // pocetne vrijednost

for (broj=100; broj <= 999; broj++){  // za trocifrene brojeve radi
d = (broj / 10);
d = d % 10;             // desetice
s = broj / 100;         // stotice
if (s % 3 == 0 && d % 4 == 0) // prva cifra djeljiva sa 3 a druga cifra djeljiva sa 4?
suma = suma + broj; // uvecaj sumu
}

printf("Suma: %d", suma);  // ispis

return 0;
}

Ispis na ekranu:
Suma trocifrenih brojeva - prva cifra djeljiva sa 3 a druga cifra djeljiva sa 4
Suma: 58005