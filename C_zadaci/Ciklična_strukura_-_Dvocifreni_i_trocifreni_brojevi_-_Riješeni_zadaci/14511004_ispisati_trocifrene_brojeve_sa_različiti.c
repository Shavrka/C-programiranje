/*
 * ZADATAK 504 - 14511004
 * Ispisati trocifrene brojeve sa različitim prvom i trećom cifrom (koristi jednu petlju).
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14511004.htm
 */

#include <stdio.h>

int main()
{
printf("Trocifreni brojevi koji nemaju istu prvu i trecu cifru\n");  // naslov
int broj, j, s;                 // deklarisanje varijabli
for (broj=100; broj <= 999; broj++){  // za trocifrene brojeve radi
j = broj % 10;              // cifra jedinica
s = broj / 100;             // cifra stotica
if (s != j)                 // razlicita prva i treca cifra?
printf("%d, ", broj);   // ispis
}

return 0;
}