/*
 * ZADATAK 702 - 14613002
 * Napisati program za izračunavanje proizvoda trocifrenih brojeva sa zadnjom cifrom 3.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14613002.htm
 */

#include <stdio.h>

int main()
{
printf("Trocifren broj - Proizvod - zadnja cifra je 3\n");  // naslov
int broj;                         // deklarisanje varijable broj
double p = 1.0;                   // pocetna vrijednost proizvoda

for (broj=100; broj<=999; broj++) // za trocifrene brojeve radi
if (broj % 10 == 3)           // zadnja cifra 3?
p = (double)p * broj;     // nova vrijednost proizvoda  p = p * broj;

printf("Proizvod = %e", p);       // ispis proizvoda u eksponcijalnom formatu
return 0;
}

Ispis na ekranu:
Trocifren broj - Proizvod - zadnja cifra je 3
Proizvod = 5.180518e+240

II varijanta - program kreira vrijedost eksponenta
// 14613002
#include <stdio.h>

int main()
{
printf("Trocifren broj - Proizvod - zadnja cifra je 3\n");  // naslov
int broj, exponent = 0;          // deklarisanje varijabli
double p = 1.0;                  // pocetna vrijednost proizvoda

for (broj=100; broj<=999; broj++) { // za trocifrene brojeve radi
if (broj % 10 == 3) {        // zadnja cifra 3?
p = (double)p * broj;    // nova vrijednost proizvoda
if (p>1000) {            // proizvod veci od 1000?
p = p / 1000;       // podijeli proizvod sa 1000
exponent = exponent + 3;   // uvecaj eksponet za 3
} else {                 // proizvod nije veci od 1000
p = p / 10;         // podijeli p sa 10
exponent = exponent + 1;   // uvecaj eksponet za 1
}
}
}
printf("Proizvod = %f  eksponent %d", p, exponent);      // ispis proizvoda

return 0;
}