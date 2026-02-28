/*
 * ZADATAK 922 - 14615022
 * Napisati program za izračunavanje aritmetičke sredine trocifrenih brojeva čija je suma prve dvije cifre djeljiva sa 3.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14615022.htm
 */

#include <stdio.h>

int main()
{
printf("Aritmeticka sredina trocifrenih brojeva - suma prve dvije cifre djeljive sa 3\n");  // naslov

int broj, d, s;             // deklarisanje varijabli
double asr;                 // deklarisanje varijabli
int br = 0, suma = 0;       // pocetne vrijednost

for (broj=100; broj <= 999; broj++){  // za trocifrene brojeve radi
d = (broj / 10);
d = d % 10;             // desetice
s = broj / 100;         // stotice

if ((s + d) % 3 == 0) { // suma prve dvije cif djeljive sa 3?
suma = suma + broj; // uvecaj sumu
br = br + 1;        // jos jedan broj
}
}

asr = (double)suma / br;     // izracunaj asr
printf("Aritmeticka sredina: %lf", asr);  // ispis

return 0;
}

II verzija     suma += broj, brojac: br++
// 14615022
#include <stdio.h>

int main()
{
printf("Aritmeticka sredina trocifrenih brojeva - suma prve dvije cifre djeljive sa 3\n");  // naslov

int broj, d, s;             // deklarisanje varijabli
double asr;                 // deklarisanje varijabli
int br = 0, suma = 0;       // pocetne vrijednost

for (broj=100; broj <= 999; broj++){  // za trocifrene brojeve radi
d = (broj / 10);
d = d % 10;             // desetice
s = broj / 100;         // stotice

if ((s + d) % 3 == 0) { // suma prve dvije cif djeljive sa 3?
suma += broj;       // uvecaj sumu
br++;               // jos jedan broj
}
}

asr = (double)suma / br;     // izracunaj asr
printf("Aritmeticka sredina: %lf", asr);  // ispis

return 0;
}