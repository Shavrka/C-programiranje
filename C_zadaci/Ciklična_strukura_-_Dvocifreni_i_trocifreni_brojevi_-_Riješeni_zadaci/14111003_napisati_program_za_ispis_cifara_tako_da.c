/*
 * ZADATAK 103 - 14111003
 * Napisati program za ispis cifara tako da se prva mijenja u intervalu od 1 do 6 a druga od 0 do 4 sa dvije petlje.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14111003.htm
 */

#include <stdio.h>

int main()
{
printf("Brojevi od 10 do 64 - sa dvije petlje\n");     // naslov
int i, j;                            // deklarisanje varijabli

for (i=1; i <= 6; i++)               // za cifre desetica od 1 do 6 radi
for (j=0; j <= 4; j++)           // za cifre jedinica od 0 do 4 radi
printf("%d%d, ", i, j);      // ispis

return 0;
}