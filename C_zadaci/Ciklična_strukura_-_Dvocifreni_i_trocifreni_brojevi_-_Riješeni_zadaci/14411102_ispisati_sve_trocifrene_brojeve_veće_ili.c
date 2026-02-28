/*
 * ZADATAK 402 - 14411102
 * Ispisati sve trocifrene brojeve veće ili jednake 600.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14411102.htm
 */

#include <stdio.h>

int main()
{
printf("Trocifreni brojevi od 600 do 999\n");  // naslov
int i, j, k;                         // deklarisanje varijabli

for (i=6; i <= 9; i++)               // za cifre stotica od 6 do 9 radi
for (j=0; j <= 9; j++)           // za cifre desetica od 0 do 9 radi
for (k=0;  k <= 9; k++)      // za cifre jedinica od 0 do 9 radi
printf("%d%d%d, ", i, j, k); // ispis

return 0;
}