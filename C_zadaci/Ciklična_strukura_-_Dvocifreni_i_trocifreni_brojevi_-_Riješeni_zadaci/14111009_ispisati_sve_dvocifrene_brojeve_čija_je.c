/*
 * ZADATAK 110 - 14111009
 * Ispisati sve dvocifrene brojeve čija je suma cifara manja od 5. (koristi dvije petlje i jedna IF naredba).
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14111009.htm
 */

#include <stdio.h>

int main()
{
printf("Dvocifreni brojevi - suma cifara manja od 5\n");  // naslov
int i, j;                            // deklarisanje varijabli

for (i=1; i <= 9; i++)               // za cifre desetica od 1 do 9 radi
for (j=0; j <= 9; j++)           // za cifre jedinica od 0 do 9 radi
if (i + j < 5)                // prva cifra veca od druge?
printf("%d%d, ", i, j);  // ispis

return 0;
}

Ispis na ekranu:
Dvocifreni brojevi - suma cifara manja od 5
10, 11, 12, 13, 20, 21, 22, 30, 31, 40,