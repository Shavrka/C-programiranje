/*
 * ZADATAK 920 - 14615020
 * Napisati program za izračunavanje aritmetičke sredine trocifrenih brojeva čija je prva cifra djeljiva sa 3 a druga cifra djeljiva sa 4.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14615020.htm
 */

#include <stdio.h>

int main()
{
printf("Aritmeticka sredina trocifrenih brojeva - prva cifra djeljiva sa 3 a druga cifra djeljiva sa 4\n");  // naslov

int broj, d, s;             // deklarisanje varijabli
double asr;                 // deklarisanje varijabli
int br = 0, suma = 0;       // pocetne vrijednost

for (broj=100; broj <= 999; broj++){  // za trocifrene brojeve radi
d = (broj / 10);
d = d % 10;             // desetice
s = broj / 100;         // stotice

if (s % 3 == 0 && d % 4 == 0){ // prva cifra djeljiva sa 3 a druga cifra djeljiva sa 4?
suma = suma + broj; // uvecaj sumu
br = br + 1;        // jos jedan broj
}
}

asr = (double)suma / br;     // izracunaj asr
printf("Aritmeticka sredina: %lf", asr);  // ispis

return 0;
}