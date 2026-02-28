/*
 * ZADATAK 604 - 14612004
 * Napisati program za izračunavanje sume trocifrenih brojeva sa različitom prvom i trećom cifrom.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14612004.htm
 */

#include <stdio.h>

int main()
{
printf("Trocifreni brojevi - Suma brojeva sa razlicitom prvom i trecom cifrom\n");  // naslov
int broj, j, s;             // deklarisanje varijabli
int suma = 0;               // pocetna vrijednost

for (broj=100; broj <= 999; broj++){  // za trocifrene brojeve radi
j = broj % 10;          // jedinice
s = broj / 100;         // stotice
if (s != j)             // različita prva i treća cifra?
suma = suma + broj; // uvecaj sumu
}

printf("Suma: %d", suma);  // ispis

return 0;
}

II verzija   suma += broj
// 14612004
#include <stdio.h>
int main()
{
printf("Trocifreni brojevi - Suma brojeva sa razlicitom prvom i trecom cifrom\n");  // naslov

int broj, j, s;             // deklarisanje varijabli
int suma = 0;               // pocetna vrijednost

for (broj=100; broj <= 999; broj++){  // za trocifrene brojeve radi
j = broj % 10;          // jedinice
s = broj / 100;         // stotice
if (s != j)             // različita prva i treća cifra?
suma += broj;       // da, uvecaj vrijednost suma: suma = suma + broj
}

printf("Suma: %d", suma);  // ispis

return 0;
}