/*
 * ZADATAK 124 - 14111023
 * Ispisati sve dvocifrene brojeve čija je cifra jedinica 6 (koristi jednu petlje i jedna IF naredba).
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14111023.htm
 */

#include <stdio.h>

int main()
{
printf("Dvocifreni brojevi - druga cifra je 6\n");  // naslov
int i;                         // deklarisanje varijabli

for (i=10; i <= 99; i++)       // za dvocifrene brojeve od 10 do 99 radi
if (i % 10 == 6)           // cifra jedinica je 6?
printf("%d, ", i);    // ispis

return 0;
}