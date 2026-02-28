/*
 * ZADATAK 123 - 14111022
 * Ispisati sve dvocifrene brojeve čija je cifra jedinica 6 (koristi dvije petlje i jedna IF naredba).
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14111022.htm
 */

#include <stdio.h>

int main()
{
printf("Dvocifreni brojevi - druga cifra je 6\n");  // naslov
int i, j;                            // deklarisanje varijabli

for (i=1; i <= 9; i++)               // za cifre desetica od 1 do 9 radi
for (j=0; j <= 9; j++)           // za cifre jedinica od 0 do 9 radi
if (j == 6)                  // cifra jedinica je 6?
printf("%d%d, ", i, j);  // ispis

return 0;
}

Ispis na ekranu:
Dvocifreni brojevi - druga cifra je 6
16, 26, 36, 46, 56, 66, 76, 86, 96,