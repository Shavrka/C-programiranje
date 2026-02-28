/*
 * ZADATAK 09411121 - 09411121
 * Napisati rekurzivnu funkciju koja sve cifre datog nenegativnog cijelog broja ispisuje s desna na lijevo. Test primjer:345677 6 5 4 3
 * Kategorija: Funkcije - Rekurzija /FUNCTIONS - RECURSION/ - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/094c/09411121.htm
 */

#include <stdio.h>

int izdvoji_cifru(int n, int p) {
int cifra;
if(n == 0) {            // cio dio dijeljenja broja sa 10 = 0 ?
return p;             // kraj dijeljenja - rekurzije
}
cifra = n % 10;         // izdvoji cifru
printf("%d ", cifra);   // ispis vrijednosti cifre
p = 10 * p  + cifra;    // formanje broja obrnut redoslijed

return izdvoji_cifru(n / 10, p);   // novi broj , podijeli broj sa 10 i pozovi istu funkciju
}

int main ()
{
printf("Obrni redoslijed cifara datog broja - Rekurzija\n");
int n, p;

printf("Dati broj: ");      // ulazne vrijednosti
scanf("%d",&n);

printf("Broj: %d \nObrnut redoslijed: ", n);     // ispis vrijednosti ulaznih i izlaznih varijabli

p = izdvoji_cifru(n, 0);      // poziv funkcije suma

return 0;
}

Ispis na ekranu:
Obrni redoslijed cifara datog broja - Rekurzija
Broj: 34567
Dati broj: 34567
Obrnut redoslijed: 7 6 5 4 3