/*
 * ZADATAK 09411112 - 09411112
 * Napisati rekurzivnu funkciju koja računa sumu cifara datog cijelog broja n.
 * Kategorija: Funkcije - Rekurzija /FUNCTIONS - RECURSION/ - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/094c/09411112.htm
 */

#include <stdio.h>

int suma_cifara(int n) {
if(n < 10)  return n;               // posljednja cifra broja? kraj rekurzije
return n%10 + suma_cifara(n / 10);  // sumu uvecaj za cifru, podijeli n sa 10 i pozov iste funkcije
}

int main (){
printf("Suma cifara datog broja - Rekurzija\n");
int broj_n, s;

printf("Broj: ");     // ulazne vrijednosti
scanf("%d",&broj_n);

s = suma_cifara(broj_n);   // poziv funkcije suma_cifara

printf("Dati broj %d ima sumu cifara %d ", broj_n, s);
return 0;
}

Ispis na ekranu:
Suma cifara datog broja - Rekurzija
Broj: 123456
Dati broj 123456 ima sumu cifara 21