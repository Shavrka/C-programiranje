/*
 * ZADATAK 116 - 14111014
 * Ispisati dvocifrene brojeve koji nisu djeljivi sa 3.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14111014.htm
 */

#include <stdio.h>

int main()
{
printf("Dvocifren broj - nije djeljiv sa 3\n");  // naslov

int broj;                            // deklarisanje varijabli

for (broj=10; broj<=99; broj++) {    // za dvocifrene brojeve radi
if (broj % 3 != 0)               // broj nije djeljv sa 3?
printf("%d, ", broj);        // ispis
}
return 0;
}

Ispis na ekranu:
Dvocifren broj - nije djeljiv sa 3
10, 11, 13, 14, 16, 17, 19, 20, 22, 23, 25, 26, 28, 29, 31, 32, 34, 35, 37, 38, 40, 41, 43, 44,
46, 47, 49, 50, 52, 53, 55, 56, 58, 59, 61, 62, 64, 65, 67, 68, 70, 71, 73, 74, 76, 77, 79, 80,
82, 83, 85, 86, 88, 89, 91, 92, 94, 95, 97, 98,