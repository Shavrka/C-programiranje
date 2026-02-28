/*
 * ZADATAK 108 - 14111007
 * Ispisati sve dvocifrene brojeve sa drugom cifrom većom od 6, tj. cifra jedinica veća od 6  (koristi dvije petlje i jedna IF naredba).
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14111007.htm
 */

#include <stdio.h>

int main()
{
printf("Dvocifreni brojevi - druga cifra veca od 6\n");  // naslov
int i, j;                            // deklarisanje varijabli

for (i=1; i <= 9; i++)               // za cifre desetica od 1 do 9 radi
for (j=0; j <= 9; j++)           // za cifre jedinica od 0 do 9 radi
if (j > 6)                   // druga cifra veca od 6?
printf("%d%d, ", i, j);  // ispis

return 0;
}

II verzija
// 14111007
#include <stdio.h>

int main()
{
printf("Dvocifreni brojevi - druga cifra veca od 6\n");  // naslov
int i, j;                            // deklarisanje varijabli

for (i=1; i <= 9; i++)               // za cifre desetica od 1 do 9 radi
for (j=7; j <= 9; j++)           // za cifre jedinica od 7 do 9 radi
printf("%d%d, ", i, j);  // ispis

return 0;
}