/*
 * ZADATAK 98 - 08702212
 * Za učitano n učitati n brojeva te izračunati aritmetičku sredinu dvocifrenih brojeva.
 * Kategorija: Ciklična strukura - kombinovani zadaci - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/087c/08702212.htm
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
if ((a > 9) && (a < 100)) { // ucitani broj docifren?
s = s + a;              // uvecaj sumu
br = br + 1;            // jos jedan broj
}
}

if (br > 0) {                   // da li ima dvocifrenih brojeva?
asr = (double)s / br;         // izracunaj asr
printf("s = %d    ima veci od granice = %d\n" , s, br);
printf("Aritmeticka sredina: %lf", asr);
} else {
printf("Svi ucitani brojevi nisu dvocifreni");
}
return 0;
}

Ispis na ekranu:
Koliko brojeva 5
Granicna vrijednost 3
1. broj 5
2. broj 4
3. broj 3
4. broj 22
5. broj 1
s = 31  ima veci od granice = 3
Aritmeticka sredina brojeva vecih od 3 je 10.333333333333334