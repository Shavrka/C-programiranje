/*
 * ZADATAK 97 - 08702213
 * Za učitano n učitati n brojeva te izračunati aritmetičku sredinu jednocifrenih brojeva.
 * Kategorija: Ciklična strukura - kombinovani zadaci - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/087c/08702213.htm
 */

#include <stdio.h>

int main()
{
int n, a;
double asr;

printf("Koliko brojeva : ");
scanf("%d",&n);                 // koliko brojeva će se ucitati
int br = 0, s = 0;              // pocetna vrijednost

for (int i=1; i<= n; i++){      // ponavljaj n puta ucitavanje
printf("%d. broj : " , i);  // broj
scanf("%d",&a);             // ucitaj broj
if ((a >= 0) && (a < 10)) { // ucitani broj jednocifren?
s = s + a;              // uvecaj sumu
br = br + 1;            // jos jedan broj
}
}

if (br > 0) {                   // da li ima jednocifrenih brojeva?
asr = (double)s / br;         // izracunaj asr
printf("s = %d    ima jednocifrenih = %d\n" , s, br);
printf("Aritmeticka sredina: %lf", asr);
} else {
printf("Svi ucitani brojevi nisu jednocifreni");
}
return 0;
}

Ispis na ekranu:
Od n brojeva izracunati aritmeticku sredinu jednocifrenih
Koliko brojeva 5
1. broj 111
2. broj 22
3. broj 5
4. broj 3
5. broj 16
s = 8  ima jednocifrenih = 2
Aritmeticka sredina jednocifrenih brojeva 4.0