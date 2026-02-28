/*
 * ZADATAK 120 - 14111018
 * Ispisati dvocifrene brojeve kod kojih pri djeljenju sa 3 ostatak je 2.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14111018.htm
 */

#include <stdio.h>

int main()
{
printf("Dvocifreni - ostatak dijeljenja sa 3 je 2\n");  // naslov
int broj;                          // deklarisanje varijable broj

for (broj=10; broj<=99; broj++) {  // za dvocifrene brojeve radi
if (broj % 3 == 2 )            // ostatak dijeljenja sa 3 je 2?
printf("%d, ", broj);      // ispis
}
return 0;
}

Ispis na ekranu:
Dvocifreni - ostatak dijeljenja sa 3 je 2
11, 14, 17, 20, 23, 26, 29, 32, 35, 38, 41, 44, 47, 50, 53, 56, 59, 62, 65, 68, 71, 74, 77, 80, 83, 86, 89, 92, 95, 98,