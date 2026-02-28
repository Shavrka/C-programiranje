/*
 * ZADATAK 906 - 14615006
 * Napisati program za izračunavanje aritmetičke sredine trocifrenih brojeva brojeve sa većom drugom cifrom od treće.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14615006.htm
 */

#include <stdio.h>

int main()
{
printf("Aritmeticka sredina trocifrenih brojeva - Veca druga cifra od trece cifre\n");  // naslov

int broj, j, d, s;          // deklarisanje varijabli
double asr;                 // deklarisanje varijabli
int br = 0, suma = 0;       // pocetne vrijednost

for (broj=100; broj <= 999; broj++){  // za trocifrene brojeve radi
j = broj % 10;          // jedinice
d = (broj / 10);
d = d % 10;             // desetice
s = broj / 100;         // stotice
if (d > j) {            // veca druga od trece cifre?
suma = suma + broj; // uvecaj sumu
br = br + 1;        // jos jedan broj
}
}

asr = (double)suma / br;     // izracunaj asr
printf("Aritmeticka sredina: %lf", asr);  // ispis

return 0;
}

Ispis na ekranu:
Aritmeticka sredina trocifrenih brojeva - Veca druga cifra od trece cifre
Aritmeticka sredina: 566.000000