/*
 * ZADATAK 115 - 14111013
 * Ispisati dvocifrene brojeve djeljive sa 3.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14111013.htm
 */

#include <stdio.h>

int main()
{
printf("Dvocifren broj - djeljivi sa 3\n");  // naslov

int broj;                            // deklarisanje varijabli

for (broj=10; broj<=99; broj++) {    // za dvocifrene brojeve radi
if ((broj) % 3 == 0 )            // broj djeljv sa 3?
printf("%d, ", broj);        // ispis
}
return 0;
}

Ispis na ekranu:
vocifren broj - djeljivi sa 3
12, 15, 18, 21, 24, 27, 30, 33, 36, 39, 42, 45, 48, 51, 54, 57, 60, 63, 66, 69, 72, 75, 78, 81, 84, 87, 90, 93, 96, 99,