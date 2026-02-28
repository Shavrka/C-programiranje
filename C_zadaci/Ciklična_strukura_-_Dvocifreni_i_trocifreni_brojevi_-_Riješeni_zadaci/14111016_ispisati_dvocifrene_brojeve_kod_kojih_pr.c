/*
 * ZADATAK 118 - 14111016
 * Ispisati dvocifrene brojeve kod kojih pri djeljenju sa 3 ostatak nije 1.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14111016.htm
 */

#include <stdio.h>

int main()
{
printf("Dvocifreni - ostatak dijeljenja sa 3 nije 1\n");  // naslov
int broj;                          // deklarisanje varijable broj

for (broj=10; broj<=99; broj++) {  // za dvocifrene brojeve radi
if (broj % 3 != 1 )            // ostatak dijeljenja sa 3 nije 1?
printf("%d, ", broj);      // ispis
}
return 0;
}

Ispis na ekranu:
Dvocifreni - ostatak dijeljenja sa 3 nije 1
11, 12, 14, 15, 17, 18, 20, 21, 23, 24, 26, 27, 29, 30, 32, 33, 35, 36, 38, 39, 41, 42, 44, 45, 47, 48, 50, 51, 53, 54,
56, 57, 59, 60, 62, 63, 65, 66, 68, 69, 71, 72, 74, 75, 77, 78, 80, 81, 83, 84, 86, 87, 89, 90, 92, 93, 95, 96, 98, 99,