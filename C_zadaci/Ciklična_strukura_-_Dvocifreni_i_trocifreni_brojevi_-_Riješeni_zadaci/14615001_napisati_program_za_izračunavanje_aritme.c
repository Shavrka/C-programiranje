/*
 * ZADATAK 901 - 14615001
 * Napisati program za izračunavanje aritmetičke sredine trocifrenih brojeva.
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14615001.htm
 */

#include <stdio.h>

int main()
{
printf("Aritmeticka sredina trocifrenih brojeva\n");  // naslov

int broj;                   // deklarisanje varijabli
double asr;                 // deklarisanje varijabli
int br = 0, suma = 0;       // pocetne vrijednost

for (broj=100; broj <= 999; broj++){  // za trocifrene brojeve radi
suma = suma + broj;   // uvecaj sumu
br = br + 1;          // jos jedan broj
}

asr = (double)suma / br;    // izracunaj asr
printf("Aritmeticka sredina: %lf", asr);  // ispis

return 0;
}

II verzija     suma += broj, brojac: br++
// 14615001
#include <stdio.h>

int main()
{
printf("Aritmeticka sredina trocifrenih brojeva\n");  // naslov

int broj;                   // deklarisanje varijabli
double asr;                 // deklarisanje varijabli
int br = 0, suma = 0;       // pocetne vrijednost

for (broj=100; broj <= 999; broj++){  // za trocifrene brojeve radi
suma += broj;          // da, uvecaj vrijednost suma: suma = suma + broj
br++;                  // da, uvecaj vrijednost brojaca,br = br + 1
}

asr = (double)suma / br;    // izracunaj asr
printf("Aritmeticka sredina: %lf", asr);  // ispis

return 0;
}