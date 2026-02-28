/*
 * ZADATAK 101 - 14111001
 * Ispisati dvocifrene brojeve sa dvije petlje.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14111001.htm
 */

#include <stdio.h>

int main()
{
printf("Dvocifreni brojevi\n");      // naslov
int i, j;                            // deklarisanje varijabli

for (i=1; i <= 9; i++)               // za cifre desetica od 1 do 9 radi
for (j=0; j <= 9; j++)           // za cifre jedinica od 0 do 9 radi
printf("%d%d, ", i, j);      // ispis

return 0;
}