/*
 * ZADATAK 102 - 14111002
 * Napisati program za ispis cifara tako da se prva mijenja u intervalu od 1 do 3 a druga od 1 do 2 sa dvije petlje.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14111002.htm
 */

#include <stdio.h>

int main()
{
printf("Brojevi od 11 do 32 - sa dvije petlje\n");     // naslov
int i, j;                            // deklarisanje varijabli

for (i=1; i <= 3; i++)               // za cifre desetica od 1 do 3 radi
for (j=1; j <= 2; j++)           // za cifre jedinica od 1 do 2 radi
printf("%d%d, ", i, j);      // ispis

return 0;
}