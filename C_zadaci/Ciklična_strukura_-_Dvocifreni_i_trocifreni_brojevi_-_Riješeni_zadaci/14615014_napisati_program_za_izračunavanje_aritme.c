/*
 * ZADATAK 914 - 14615014
 * Napisati program za izračunavanje aritmetičke sredine trocifrenih brojeva kod kojih je pri djeljenju sa 3 ostatak je 1.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14615014.htm
 */

#include <stdio.h>

int main()
{
printf("Aritmeticka sredina trocifrenih brojeva - Ostatak dijeljenja sa 3 je 1\n");  // naslov

int broj;                   // deklarisanje varijabli
double asr;                 // deklarisanje varijabli
int br = 0, suma = 0;       // pocetne vrijednost

for (broj=100; broj <= 999; broj++){  // za trocifrene brojeva radi
if (broj % 3  == 1) {  // ostatak dijeljenja sa 3 je 1?
suma = suma + broj; // uvecaj sumu
br = br + 1;        // jos jedan broj
}
}

asr = (double)suma / br;     // izracunaj asr
printf("Aritmeticka sredina: %lf", asr);  // ispis

return 0;
}

Ispis na ekranu:
Aritmeticka sredina trocifrenih brojeva - Ostatak dijeljenja sa 3 je 1
Aritmeticka sredina: 550.000000