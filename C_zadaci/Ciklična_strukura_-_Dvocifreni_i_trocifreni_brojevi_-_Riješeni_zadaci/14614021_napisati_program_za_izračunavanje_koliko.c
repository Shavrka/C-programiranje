/*
 * ZADATAK 821 - 14614021
 * Napisati program za izračunavanje koliko ima (prebrojati) trocifrernih bojeva čija je suma prve dvije cifre parna.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14614021.htm
 */

#include <stdio.h>

int main()
{
printf("Broj trocifrenih brojeva suma prve dvije cifre parna\n");  // naslov

int broj, d, s;              // deklarisanje varijabli
int br = 0;                  // pocetne vrijednost

for (broj=100; broj <= 999; broj++) {   // za trocifrene brojeve radi
d = (broj / 10);
d = d % 10;              // desetice
s = broj / 100;          // stotice
if ((s + d) % 2 == 0)    // razlika prve dvije cifre djeljiva sa 3?
br = br + 1;         // uvecaj brojac
}

printf("Broj = %d", br);     // ispis

return 0;
}