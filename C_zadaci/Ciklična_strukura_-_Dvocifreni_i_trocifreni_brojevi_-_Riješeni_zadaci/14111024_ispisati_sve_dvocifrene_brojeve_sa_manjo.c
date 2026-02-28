/*
 * ZADATAK 107 - 14111024
 * Ispisati sve dvocifrene brojeve sa manjom prvom cifrom, tj. cifra desetica manja od cifre jedinica. (koristi dvije petlje i jedna IF naredba, i < j).
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14111024.htm
 */

#include <stdio.h>

int main()
{
printf("Dvocifreni brojevi - prva cifra manja od druge\n");  // naslov
int i, j;                            // deklarisanje varijabli

for (i=1; i <= 9; i++)               // za cifre desetica od 1 do 9 radi
for (j=0; j <= 9; j++)           // za cifre jedinica od 0 do 9 radi
if (i < j)                   // prva cifra manja od druge?
printf("%d%d, ", i, j);  // ispis

return 0;
}