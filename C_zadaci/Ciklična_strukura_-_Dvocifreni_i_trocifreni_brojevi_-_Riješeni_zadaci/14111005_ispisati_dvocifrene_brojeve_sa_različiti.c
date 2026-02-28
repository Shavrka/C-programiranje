/*
 * ZADATAK 105 - 14111005
 * Ispisati dvocifrene brojeve sa različitim ciframa (koristi dvije petlje i jedna IF naredba, i<>j).
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14111005.htm
 */

#include <stdio.h>

int main()
{
printf("Dvocifreni brojevi - razlicite cifre\n");  // naslov
int i, j;                            // deklarisanje varijabli

for (i=1; i <= 9; i++)               // za cifre desetica od 1 do 9 radi
for (j=0; j <= 9; j++)           // za cifre jedinica od 0 do 9 radi
if (i != j)                  // razlicite cifre?
printf("%d%d, ", i, j);  // ispis

return 0;
}