/*
 * ZADATAK 117 - 14111015
 * Ispisati dvocifrene brojeve kod kojih je pri djeljenju sa 3 ostatak je 1.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14111015.htm
 */

#include <stdio.h>

int main()
{
printf("Dvocifreni - ostatak dijeljenja sa 3 je 1\n");  // naslov
int broj;                          // deklarisanje varijable broj

for (broj=10; broj<=99; broj++) {  // za dvocifrene brojeve radi
if (broj % 3 == 1 )            // ostatak dijeljenja sa 3 je 1?
printf("%d, ", broj);      // ispis
}
return 0;
}