/*
 * ZADATAK 726 - 14613026
 * Napisati program za izračunavanje proizvoda trocifrenih brojeva kod kojih je razlika prve dvije cifre djeljiva sa 3.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14613026.htm
 */

#include <stdio.h>

int main()
{
printf("Trocifren broj - Proizvod - razlika prve dvije cifre djeljiva sa 3\n");  // naslov

int broj, d, s, exponent = 0;         // deklarisanje varijabli
double p = 1.0;                       // pocetna vrijednost proizvoda

for (broj=100; broj<=999; broj++) {   // za trocifrene brojeve radi
d = (broj / 10);
d = d % 10;                       // desetice
s = broj / 100;                   // stotice
if ((s - d) % 3 == 0 )  {         // razlika prve dvije cifre djeljiva sa 3?
p = (double)p * broj;         // nova vrijednost proizvoda p = p * broj;
if (p>1000) {                 // proizvod veci od 1000?
p = p / 1000;            // podijeli proizvod sa 1000
exponent = exponent + 3; // uvecaj eksponet za 3
} else {                      // proizvod nije veci od 1000
p = p / 10;              // podijeli p sa 10
exponent = exponent + 1; // uvecaj eksponet za 1
}
}
}
printf("Proizvod = %f  eksponent %d", p, exponent); // ispis proizvoda
return 0;
}