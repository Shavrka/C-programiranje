/*
 * ZADATAK 113 - 14111011
 * Ispisati dvocifrene brojeve djeljive sa 2 (parni).
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14111011.htm
 */

#include <stdio.h>

int main()
{
printf("Dvocifren broj - parni\n");  // naslov

int broj;                            // deklarisanje varijabli

for (broj=10; broj<=99; broj++) {    // za dvocifrene brojeve radi
if ((broj) % 2 == 0 )            // paran broj?
printf("%d, ", broj);        // ispis
}
return 0;
}

Ispis na ekranu:
Dvocifren broj - parni
10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54,
56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98,