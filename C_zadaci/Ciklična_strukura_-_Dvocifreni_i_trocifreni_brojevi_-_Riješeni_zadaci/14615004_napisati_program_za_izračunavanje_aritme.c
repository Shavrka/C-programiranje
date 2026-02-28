/*
 * ZADATAK 904 - 14615004
 * Napisati program za izračunavanje aritmetičke sredine trocifrenih brojeva sa različitim prvom i trećom cifrom.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14615004.htm
 */

#include <stdio.h>

int main()
{
printf("Aritmeticka sredina trocifrenih brojeva - Razlicite prve i treca cifra\n");  // naslov

int broj, j, s;             // deklarisanje varijabli
double asr;                 // deklarisanje varijabli
int br = 0, suma = 0;       // pocetne vrijednost

for (broj=100; broj <= 999; broj++){  // za trocifrene brojeve radi
j = broj % 10;          // jedinice
s = broj / 100;         // stotice
if (s != j) {           // različita prva i treća cifra?
suma = suma + broj; // uvecaj sumu
br = br + 1;        // jos jedan broj
}
}

asr = (double)suma / br;     // izracunaj asr
printf("Aritmeticka sredina: %lf", asr);  // ispis

return 0;
}

Ispis na ekranu:
Aritmeticka sredina trocifrenih brojeva - Razlicite prve i treca cifra
Aritmeticka sredina: 549.444444