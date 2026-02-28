/*
 * ZADATAK 119 - 14111017
 * Ispisati dvocifrene brojeve kod kojih pri djeljenju sa 3 ostatak nije 2.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14111017.htm
 */

#include <stdio.h>

int main()
{
printf("Dvocifreni - ostatak dijeljenja sa 3 nije 2\n");  // naslov
int broj;                          // deklarisanje varijable broj

for (broj=10; broj<=99; broj++) {  // za dvocifrene brojeve radi
if (broj % 3 != 2 )            // ostatak dijeljenja sa 3 nije 2?
printf("%d, ", broj);      // ispis
}
return 0;
}

Ispis na ekranu:
Dvocifreni - ostatak dijeljenja sa 3 nije 2
10, 12, 13, 15, 16, 18, 19, 21, 22, 24, 25, 27, 28, 30, 31, 33, 34, 36, 37, 39, 40, 42, 43, 45, 46, 48, 49, 51, 52, 54,
55, 57, 58, 60, 61, 63, 64, 66, 67, 69, 70, 72, 73, 75, 76, 78, 79, 81, 82, 84, 85, 87, 88, 90, 91, 93, 94, 96, 97, 99,