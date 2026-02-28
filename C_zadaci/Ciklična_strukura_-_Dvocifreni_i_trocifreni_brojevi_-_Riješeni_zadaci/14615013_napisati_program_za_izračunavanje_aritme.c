/*
 * ZADATAK 913 - 14615013
 * Napisati program za izračunavanje aritmetičke sredine trocifrenih brojeva koji nisu djeljivi sa 3.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14615013.htm
 */

#include <stdio.h>

int main()
{
printf("Aritmeticka sredina trocifrenih brojeva koji nisu djeljivi sa 3\n");  // naslov

int broj;                   // deklarisanje varijabli
double asr;                 // deklarisanje varijabli
int br = 0, suma = 0;       // pocetne vrijednost

for (broj=100; broj <= 999; broj++){  // za trocifrene brojeva radi
if (broj % 3  != 0) {  // nije djeljiv sa 3?
suma = suma + broj; // uvecaj sumu
br = br + 1;        // jos jedan broj
}
}

asr = (double)suma / br;     // izracunaj asr
printf("Aritmeticka sredina: %lf", asr);  // ispis

return 0;
}

Ispis na ekranu:
Aritmeticka sredina trocifrenih brojeva koji nisu djeljivi sa 3
Aritmeticka sredina: 549.000000