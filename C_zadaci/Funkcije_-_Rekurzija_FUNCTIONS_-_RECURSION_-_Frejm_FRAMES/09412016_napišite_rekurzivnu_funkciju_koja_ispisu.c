/*
 * ZADATAK 09412016 - 09412016
 * Napišite rekurzivnu funkciju koja ispisuje članove niza po izrazu F(i)=i*(i+1)/2.(članovi niza: 1, 3, 6, 10, ...).
 * Kategorija: Funkcije - Rekurzija /FUNCTIONS - RECURSION/ - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/094c/09412016.htm
 */

#include <stdio.h>

unsigned trougao_broj(unsigned n1)  {
if (n1 <= 1)  {    // ako je n jednak 0 ili 1 - kraj rekurzije
printf("%u\t %u\n", n1,  (n1 * (n1 + 1) /2));
return n1;
} else  {
trougao_broj(n1 - 1) ;
printf("%u\t %u\n",n1,  (n1 * (n1 + 1) /2));
return;
}
}

int main(void) {
unsigned n;
printf("Broj n ");
scanf("%u",&n);
printf("Broj\t Trougaoni broj\n");
trougao_broj(n);
return 0;
}

Ispis na ekranu:
Broj n 11
Broj     Trougaoni broj
1
3
6
10
15
21
28
36
45
55
66