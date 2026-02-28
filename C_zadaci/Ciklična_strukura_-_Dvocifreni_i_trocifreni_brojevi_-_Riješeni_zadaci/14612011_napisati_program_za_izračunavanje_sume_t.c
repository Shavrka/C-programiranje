/*
 * ZADATAK 611 - 14612011
 * Napisati program za izračunavanje sume trocifrenih brojeva koji nisu djeljivi sa 2 (neparni).
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14612011.htm
 */

#include <stdio.h>

int main()
{
printf("Suma trocifrenih brojeva - nije djeljivih sa 2 - neparan\n");  // naslov

int broj;                   // deklarisanje varijabli
int suma = 0;               // pocetne vrijednost

for (broj=100; broj <= 999; broj++) // za trocifrene brojeve radi
if (broj % 2  != 0)             // nije djeljiv sa 2 (neparan)?
suma = suma + broj;         // da - nije djeljiv sa 2 - nepran je; uvecaj sumu

printf("Suma: %d", suma);   // ispis

return 0;
}

Ispis na ekranu:
Suma trocifrenih brojeva - nije djeljivih sa 2 - neparan
Suma: 247500