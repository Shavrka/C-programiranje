/*
 * ZADATAK 60 - 08702108
 * Ispisati tablicu množenje učitanog broja.
 * Kategorija: Ciklična strukura - kombinovani zadaci - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/087c/08702108.htm
 */

#include <stdio.h>

int main() {
int broj, i = 1;
printf("Ucitati broj:");
scanf("%d", &broj);
printf("Tablica mnozenja broja %d: \n", broj);

while (i <= 10) {  // dok je i <= 10 ponavljaj - pocetak petlje
printf("%d x %d = %d \t%d x %d = %d \n", broj, i, broj * i, i, broj, broj * i);   // ispis broja izračutag proizvoda
i++;           // slijedeca vrijednost kontrolne varijable i
}
return 0;
}

Ispis na ekranu:
Ucitati broj: 4
Tablica mnozenja broja 4:
x 1 = 4       1 x 4 = 4
x 2 = 8       2 x 4 = 8
x 3 = 12      3 x 4 = 12
x 4 = 16      4 x 4 = 16
x 5 = 20      5 x 4 = 20
x 6 = 24      6 x 4 = 24
x 7 = 28      7 x 4 = 28
x 8 = 32      8 x 4 = 32
x 9 = 36      9 x 4 = 36
x 10 = 40     10 x 4 = 40