/*
 * ZADATAK 109 - 14111008
 * Ispisati sve dvocifrene brojeve sa drugom cifrom manjom od 4 tj. cifra jedinica manja od 4. (koristi dvije petlje i jedna IF naredba).
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14111008.htm
 */

#include <stdio.h>

int main()
{
printf("Dvocifreni brojevi - druga cifra manja od 4\n");  // naslov
int i, j;                            // deklarisanje varijabli

for (i=1; i <= 9; i++)               // za cifre desetica od 1 do 9 radi
for (j=0; j <= 9; j++)           // za cifre jedinica od 0 do 9 radi
if (j < 4)                   // druga cifra manja od 4?
printf("%d%d, ", i, j);  // ispis

return 0;
}

Ispis na ekranu:
Dvocifreni brojevi - druga cifra manja od 4
10, 11, 12, 13, 20, 21, 22, 23, 30, 31, 32, 33, 40, 41, 42, 43, 50, 51, 52, 53, 60, 61, 62, 63, 70, 71, 72, 73, 80, 81, 82, 83, 90, 91, 92, 93,