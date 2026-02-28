/*
 * ZADATAK 72 - 08702110
 * Ispisati prvih n hemingvejovih brojeva. Hemingvejovih brojevi su djeljivi samo sa 2 ili 3 ili 5.
 * Kategorija: Ciklična strukura - kombinovani zadaci - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/087c/08702110.htm
 */

#include <stdio.h>
// Prvih n hemingvejevih brojeva - djeljiv samo sa 2 ilii 3 ili 5
int main()
{
int i, n, br;
printf("Koliko brojeva: ");
scanf("%d", &n);
br = 0;  // brojac brojeva
i = 2;   // prvi broj
do {
if(i % 2 == 0 || i % 3 == 0 || i % 5 == 0){  // provjera da li je broj djeljiv sa 2 ili 3 ili 5
//            printf("Brojac = %d, broj =  %d,\n ", br. i);             // ispisa//
//            printf("%d %d,\n ", br. i);             // ispisa
br++;    // nvoi broj
printf("Brojac = %d   broj = %d \n", br, i);
}
i++;
} while(br < n);

return 0;
}

Ispis na ekranu:
Koliko brojeva: 15
Brojac = 1   broj = 2
Brojac = 2   broj = 3
Brojac = 3   broj = 4
Brojac = 4   broj = 5
Brojac = 5   broj = 6
Brojac = 6   broj = 8
Brojac = 7   broj = 9
Brojac = 8   broj = 10
Brojac = 9   broj = 12
Brojac = 10   broj = 14
Brojac = 11   broj = 15
Brojac = 12   broj = 16
Brojac = 13   broj = 18
Brojac = 14   broj = 20
Brojac = 15   broj = 21