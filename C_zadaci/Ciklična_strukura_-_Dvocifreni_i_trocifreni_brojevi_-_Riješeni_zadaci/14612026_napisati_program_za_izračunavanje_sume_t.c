/*
 * ZADATAK 626 - 14612026
 * Napisati program za izračunavanje sume trocifrenih brojeva kod kojih je razlika prve dvije cifre djeljiva sa 3.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14612026.htm
 */

#include <stdio.h>

int main()
{
printf("Suma trocifrenih brojeva razlika prve dvije cifre djeljiva sa 3\n");  // naslov

int broj, d, s;               // deklarisanje varijabli
int suma = 0;                 // pocetne vrijednost

for (broj=100; broj<=999; broj++) {   // za trocifrene brojeve radi
d = (broj / 10);
d = d % 10;               // desetice
s = broj / 100;           // stotice
if ((s - d) % 3 == 0 )    // razlika prve dvije cifre djeljiva sa 3?
suma = suma + broj;   // uvecaj sumu
}

printf("Suma: %d", suma);     // ispis

return 0;
}