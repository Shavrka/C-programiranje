/*
 * ZADATAK 104 - 14111004
 * Ispisati dvocifrene brojeve sa istim ciframa (koristi dvije petlje i jedna IF naredba, (i=j).
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14111004.htm
 */

#include <stdio.h>

int main()
{
printf("Dvocifreni brojevi - iste cifre\n");  // naslov
int i, j;                            // deklarisanje varijabli

for (i=1; i <= 9; i++)               // za cifre desetica od 1 do 9 radi
for (j=0; j <= 9; j++)           // za cifre jedinica od 0 do 9 radi
if (i == j)                  // iste cifre?
printf("%d%d, ", i, j);  // ispis

return 0;
}