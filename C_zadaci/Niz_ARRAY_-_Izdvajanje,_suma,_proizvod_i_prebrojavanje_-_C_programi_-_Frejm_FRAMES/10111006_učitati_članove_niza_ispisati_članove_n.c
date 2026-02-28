/*
 * ZADATAK 10111006 - 10111006
 * Učitati članove niza. Ispisati članove niza sa parnom vrijednosti (djeljive sa 2).
 * Kategorija: Niz /ARRAY/ - Izdvajanje, suma, proizvod i prebrojavanje - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/101c/10111006.htm
 */

#include <stdio.h>

int main()
{

int n[10];
int i;

for ( i = 0; i < 10; i++ ) {
scanf ("%d",&n[i]);    // ulaz clanova niza
}

for (i = 0; i < 10; ++i ) {
if (n[i] % 2 == 0){   // clan niza paran?
printf("n[%d]= %d\n", i, n[i] );
}
}

return 0;
}

Ispis na ekranu:

n[1]= 6
n[4]= 4
n[5]= 2
n[9]= 8