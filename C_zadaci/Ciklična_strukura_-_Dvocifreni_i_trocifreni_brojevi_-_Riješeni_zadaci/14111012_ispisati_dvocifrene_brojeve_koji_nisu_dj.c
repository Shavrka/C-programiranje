/*
 * ZADATAK 114 - 14111012
 * Ispisati dvocifrene brojeve koji nisu djeljivi sa 2.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14111012.htm
 */

#include <stdio.h>

int main()
{
printf("Dvocifren broj - neparni\n");// naslov

int broj;                            // deklarisanje varijabli

for (broj=10; broj<=99; broj++) {    // za dvocifrene brojeve radi
if (broj % 2 != 0 )              // neparan broj?
printf("%d, ", broj);        // ispis
}
return 0;
}

Ispis na ekranu:
Dvocifren broj - neparni
Dvocifren broj - neparni
11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61,
63, 65, 67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97, 99,