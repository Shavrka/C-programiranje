/*
 * ZADATAK 621 - 14612021
 * Napisati program za izračunavanje sume trocifrernih bojeva čija je suma prve dvije cifre parna.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14612021.htm
 */

#include <stdio.h>

int main()
{
printf("Trocifren broj - Suma - suma prve dvije cifre parna\n");  // naslov

int broj, d, s, suma = 0;            // pocetna vrijednost

for (broj=100; broj<=999; broj++) {  // za trocifrene brojeve radi
d = (broj / 10);
d = d % 10;                      // desetice
s = broj / 100;                  // stotice
if ((s + d) % 2 == 0 )           // suma prve dvije cifre parna?
suma = suma + broj;
}

printf("Suma prema uslovu = %d ", suma); // ispis
return 0;
}

Ispis na ekranu:
Trocifren broj - Suma - suma prve dvije cifre parna
Suma prema uslovu = 247525