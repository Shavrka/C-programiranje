/*
 * ZADATAK 99 - 08702214
 * Za učitano n učitati n brojeva te izračunati aritmetičku sredinu trocifrenih brojeva.
 * Kategorija: Ciklična strukura - kombinovani zadaci - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/087c/08702214.htm
 */

#include <stdio.h>

int main()
{
int n, a;
double asr;

printf("Od n brojeva izracunati aritmeticku sredinu trocifrenih\n");
printf("Koliko brojeva : ");
scanf("%d",&n);                 // koliko brojeva će se ucitati
int br = 0, s = 0;              // pocetna vrijednost

for (int i=1; i<= n; i++){      // ponavljaj n puta ucitavanje
printf("%d. broj : " , i);  // broj
scanf("%d",&a);             // ucitaj broj
if ((a > 99) && (a < 1000)) { // ucitani broj trocifren?
s = s + a;              // uvecaj sumu
br = br + 1;            // jos jedan broj
}
}

if (br > 0) {                   // da li ima trocifrenih brojeva?
asr = (double)s / br;         // izracunaj asr
printf("s = %d    ima veci od granice = %d\n" , s, br);
printf("Aritmeticka sredina: %lf", asr);
} else {
printf("Svi ucitani brojevi nisu trocifreni");
}
return 0;
}

Ispis na ekranu:
Od n brojeva izracunati aritmeticku sredinu trocifrenih
Koliko brojeva 5
1. broj 4
2. broj 111
3. broj 32
4. broj 222
5. broj 6
s = 333  ima trocifrenih = 2
Aritmeticka sredina trocifrenih brojeva 166.5