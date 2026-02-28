/*
 * ZADATAK 921 - 14615021
 * Napisati program za izračunavanje aritmetičke sredine trocifrernih bojeva čija je suma prve dvije cifre parna.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14615021.htm
 */

#include <stdio.h>

int main()
{
printf("Aritmeticka sredina trocifrenih brojeva suma prve dvije cifre parna\n");  // naslov
int broj, d, s;               // deklarisanje varijabli
double asr;                   // deklarisanje varijabli
int br = 0, suma = 0;         // pocetne vrijednost

for (broj=100; broj <= 999; broj++){  // za trocifrene brojeve radi
d = (broj / 10);
d = d % 10;               // desetice
s = broj / 100;           // stotice
if ((s + d) % 2 == 0 ) {  // suma prve dvije cifre parna?
suma = suma + broj;   // uvecaj sumu
br = br + 1;          // jos jedan broj
}
}

asr = (double)suma / br;     // izracunaj asr
printf("Aritmeticka sredina: %lf", asr);  // ispis

return 0;
}

Ispis na ekranu:
Aritmeticka sredina trocifrenih brojeva suma prve dvije cifre parna
Aritmeticka sredina: 550.055556