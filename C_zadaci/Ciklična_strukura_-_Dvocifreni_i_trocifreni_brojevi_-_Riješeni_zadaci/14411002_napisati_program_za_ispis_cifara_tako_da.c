/*
 * ZADATAK 403 - 14411002
 * Napisati program za ispis cifara tako da se prva mijenja u intervalu od 1 do 3 a druga od 0 do 4, a treća od 0 do 5.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14411002.htm
 */

#include <stdio.h>

int main()
{
printf("Trocifreni brojevi od 100 do 345\n");  // naslov
int i, j, k;                         // deklarisanje varijabli

for (i=1; i <= 3; i++)               // za cifre stotica od 1 do 3 radi
for (j=0; j <= 4; j++)           // za cifre desetica od 0 do 4 radi
for (k=0;  k <= 5; k++)      // za cifre jedinica od 0 do 5 radi
printf("%d%d%d, ", i, j, k); // ispis

return 0;
}