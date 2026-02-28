/*
 * ZADATAK 603 - 14612003
 * Napisati program za izračunavanje sume trocifrenih brojeva sa istim ciframa.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14612003.htm
 */

#include <stdio.h>

int main()
{
printf("Suma trocifrenih brojeva sa istim ciframa\n");  // naslov

int broj, j, d, s;          // deklarisanje varijabli
int suma = 0;               // pocetna vrijednost

for (broj=100; broj <= 999; broj++){  // za trocifrene brojeve radi
j = broj % 10;          // jedinice
d = (broj / 10);
d = d % 10;             // desetice
s = broj / 100;         // stotice
if (s == d && d == j)   // iste cifre?
suma = suma + broj; // da, uvecaj vrijednost sumu
}

printf("Suma: %d", suma);  // ispis

return 0;
}