/*
 * ZADATAK 501 - 14511001
 * Ispisati trocifrene brojeve sa jednom petljom.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14511001.htm
 */

#include <stdio.h>

int main()
{
printf("Trocifreni brojevi\n");    // naslov
int tro;                           // deklarisanje varijabli
for (tro=100; tro <= 999; tro++)   // za trocifrene brojeve radi
printf("%d ", tro);            // ispis
return 0;
}