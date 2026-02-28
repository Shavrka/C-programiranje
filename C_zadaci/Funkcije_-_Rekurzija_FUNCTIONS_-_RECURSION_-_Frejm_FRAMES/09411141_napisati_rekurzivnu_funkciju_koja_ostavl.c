/*
 * ZADATAK 09411141 - 09411141
 * Napisati rekurzivnu funkciju koja ostavlja neparne cifre (izbacuje sve parne cifre) datog cijelog broja n. Te okreće redoslijed formiranog broja. Test primjer:12345677531
 * Kategorija: Funkcije - Rekurzija /FUNCTIONS - RECURSION/ - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/094c/09411141.htm
 */

#include <stdio.h>

int izdvoji_okreni(int n, int p, int prvi) {  // izdvoja i okrece redoslijed cifara
int cifra;
if(n == 0) {            // cio dio dijeljenja broja sa 10 = 0 ?
return p;             // kraj dijeljenja - rekurzije
}
if(prvi == 0) {                   // nije nasao prvi neparan?
if(n % 2 != 0) {              // nasao prvi neparan?
prvi = 1;                 // prvi neparan
cifra = n % 10;           // izdvoji cifru
p = 10 * p  + cifra;      // formanje broja obrnut redoslijed
return izdvoji_okreni(n / 10, p, prvi);   // novi broj, podijeli broj sa 10 i pozovi istu funkciju
} else {                      // paran
return izdvoji_okreni(n / 10, 0, prvi);   // novi broj, podijeli broj sa 10 i pozovi istu funkciju
}
} else {
if(n % 2 != 0) {              // nasao neparan?
cifra = n % 10;           // izdvoji cifru
p = 10 * p  + cifra;      // formanje broja obrnut redoslijed
return izdvoji_okreni(n / 10, p, prvi);   // novi broj, podijeli broj sa 10 i pozovi istu funkciju
} else {                      // paran
return izdvoji_okreni(n / 10, p, prvi);   // novi broj, podijeli broj sa 10 i pozovi istu funkciju
}
}
}

int main()
{
printf("Obrni redoslijed cifara i ispisi sammo neparne - Rekurzija\n");
int n, p;

printf("Broj: ");       // ulazne vrijednosti
scanf("%d",&n);

p = izdvoji_okreni(n, 0, 0);    // poziv funkcije izdvoji_okreni

printf("Dati broj:         %d \n", n);        // ispis vrijednosti ulaznih i izlaznih varijabli
printf("Obrnut redoslijed: %d", p);   // ispis vrijednosti ulaznih i izlaznih varijabli

return 0;
}

Ispis na ekranu:
Obrni redoslijed cifara i ispisi sammo neparne - Rekurzija
Broj: 1234567
Dati broj:         1234567
Obrnut redoslijed: 7531