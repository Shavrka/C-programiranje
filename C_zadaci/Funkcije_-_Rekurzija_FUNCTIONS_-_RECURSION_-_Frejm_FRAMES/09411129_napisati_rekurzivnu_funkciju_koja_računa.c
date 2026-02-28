/*
 * ZADATAK 09411129 - 09411129
 * Napisati rekurzivnu funkciju koja računa najmanju (minimalnu) cifru datog cijelog broja n.
 * Kategorija: Funkcije - Rekurzija /FUNCTIONS - RECURSION/ - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/094c/09411129.htm
 */

#include <stdio.h>

int najmanja_cifra(int n, int tek_min) {  // f. izdvoja i okrece redoslijed cifara
if(n != 0) {                 // ima jos cifara?
if(n%10 > tek_min) {     // izdvojena cifra manja od tekuceg maksimuma?
tek_min = n%10;      // novi tekuci minimum
}
return najmanja_cifra(n/10, tek_min); // slijedeca cifra
}
return tek_min;              // kraj poredjenja cifara i tekuceg maksimuma - rekurzije
}

int main () {
printf("Najmanja cifra datog broja - Rekurzija\n");
int broj_n, mini;

printf("Broj: ");       // ulazna vrijednost
scanf("%d",&broj_n);

mini = najmanja_cifra(n/10, n%10);         // poziv funkcije prvi maksimu je cifra sa desne strane

printf("Dati broj:     %d \n", broj_n);   // ispis vrijednosti ulaznog broja
printf("Najmanja cifra: %d", mini);        // ispis najmanje cifre - maksimum

return 0;
}