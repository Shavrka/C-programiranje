/*
 * ZADATAK 521 - 14511021
 * Ispisati trocifrene brojeve čija je suma prve dvije cifre parna (jedna petlja).
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14511021.htm
 */

#include <stdio.h>

int main()
{
printf("Trocifren broj - suma prve dvije cifre parna\n");  // naslov

int broj, d, s;                      // deklarisanje varijabli

for (broj=100; broj<=999; broj++) {  // za trocifrene brojeve radi
d = (broj / 10);
d = d % 10;                      // desetice
s = broj / 100;                  // stotice
if ((s + d) % 2 == 0 )           // suma prve dvije cifre parna?
printf("%d, ", broj);        // ispis
}
return 0;
}