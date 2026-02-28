/*
 * ZADATAK 514 - 14511014
 * Ispisati trocifrene brojeve kod kojih je pri djeljenju sa 3 ostatak je 1 (jedna petlja).
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14511014.htm
 */

#include <stdio.h>

int main()
{
printf("Trocifreni brojevi  - Ostatak dijeljenja sa 3 je 1\n");  // naslov
int broj;                       // deklarisanje varijabli
for (broj=100; broj <= 999; broj++)   // za trocifrene brojeve radi
if (broj % 3  == 1)       // ostatak dijeljenja sa 3 je 1?
printf("%d, ", broj);  // ispis

return 0;
}