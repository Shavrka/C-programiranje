/*
 * ZADATAK 90 - 08112031
 * Izračunati sumu prirodnih brojeva u intervalu od k do n koji su djeljivi sa 7.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08112031.htm
 */

#include <stdio.h>
int main ()
{
printf("Suma k - n - djeljivi sa 7\n");  // naslov
int i, k,n;                 // deklarisanje varjabli
float suma;                 // deklarisanje varjable

printf("Od broja: ");
scanf("%d", &k);            // upis broja od kojeg se ispisuje
printf("Do broja: ");
scanf("%d", &n);            // upis broja do kojeg se ispisuje
suma = 0;                   // pocetna vrijednost

for(i = k; i <= n; i++)     // ponavljanje za i = k do i = n - pocetak petlje
if(i % 7 == 0)          // provjera da li je broj djeljiv sa 7
suma += i;          // djeljiv sa 7, nova suma

printf("Suma = %f",suma);   // ispis

return 0;
}

II varijanta    suma += k;
// 08112031
//Izračunati sumu prirodnih brojeva u intervalu od k do n koji su djeljivi sa 7.
#include <stdio.h>
int main ()
{
printf("Suma k - n - djeljivi sa 7\n");  // naslov
int k, n;                   // deklarisanje varjabli
float suma;                 // deklarisanje varjable

printf("Od broja: ");
scanf("%d", &k);            // upis broja od kojeg se ispisuje
printf("Do broja: ");
scanf("%d", &n);            // upis broja do kojeg se ispisuje

for(int i = k; i <= n; i++) // ponavljanje za i = k do i = n - pocetak petlje
if(i % 7 == 0)          // provjera da li je broj djeljiv sa 7
suma += i;          // djeljiv sa 7

printf("Suma = %f",suma);   // ispis

return 0;
}

III varijanta    suma += k;
// 08112031
//Izračunati sumu prirodnih brojeva u intervalu od k do n koji su djeljivi sa 7.
#include <stdio.h>
int main ()
{
printf("Suma k - n - djeljivi sa 7\n");  // naslov
int k,n;                    // deklarisanje varjabli
float suma;                 // deklarisanje varjable

printf("Od broja: ");
scanf("%d", &k);            // upis broja od kojeg se ispisuje
printf("Do broja: ");
scanf("%d", &n);            // upis broja do kojeg se ispisuje

for(;k<=n;k++)              // ponavljanje za i=k do i=n - pocetak petlje
if(k % 7 == 0)          // provjera da li je broj djeljiv sa 7
suma += k;          // djeljiv sa 7

printf("Suma = %f",suma);   // ispis

return 0;
}