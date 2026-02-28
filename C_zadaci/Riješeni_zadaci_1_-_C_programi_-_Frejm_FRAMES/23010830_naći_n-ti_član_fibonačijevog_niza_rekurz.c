/*
 * ZADATAK 23010830 - 23010830
 * Naći n-ti član Fibonačijevog niza rekurzivnom f-jom.
 * Kategorija: Riješeni zadaci 1 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010830.htm
 */

#include <stdio.h>

int fibonacci(int i) {
if(i == 0) return 0;   // i = 0
if(i == 1) return 1;   // i = 1?
return fibonacci(i-1) + fibonacci(i-2);
}

int  main() {
printf("Formiranje prvih n clanova Fibonaccievog niza . Rekurzija\n");
int i1, nClanova;

printf("Broj clanova niza: ");      // ulazne vrijednosti
scanf("%d",&nClanova);

for (i1 = 0; i1 < nClanova; i1++)   // prvih 13 clanova Fibonacci-jevog niya
printf("%d. clan je\t%d\n", i1, fibonacci(i1));  // ispis r.br. i clana niza
return 0;
}

Ispis na ekranu:
Formiranje prvih n clanova Fibonaccievog niza . Rekurzija
Broj clanova niza: 12
0. clan je      0
1. clan je      1
2. clan je      1
3. clan je      2
4. clan je      3
5. clan je      5
6. clan je      8
7. clan je      13
8. clan je      21
9. clan je      34
10. clan je     55
11. clan je     89