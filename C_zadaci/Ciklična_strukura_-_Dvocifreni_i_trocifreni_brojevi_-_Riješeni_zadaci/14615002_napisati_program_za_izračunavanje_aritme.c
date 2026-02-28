/*
 * ZADATAK 902 - 14615002
 * Napisati program za izračunavanje aritmetičke sredine trocifrenih brojeva sa zadnjom cifrom 3.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14615002.htm
 */

#include <stdio.h>

int main()
{
printf("Aritmeticka sredina trocifrenih brojeva sa zadnjom cifrom 3\n");  // naslov

int broj;                   // deklarisanje varijabli
double asr;                 // deklarisanje varijabli
int br = 0, suma = 0;       // pocetne vrijednost

for (broj=100; broj <= 999; broj++){  // za trocifrene brojeve radi
if (broj % 10  == 3) { // zadnja cifra je 3?
suma = suma + broj; // uvecaj sumu
br = br + 1;        // jos jedan broj
}
}

asr = (double)suma / br;     // izracunaj asr
printf("Aritmeticka sredina: %lf", asr);  // ispis

return 0;
}