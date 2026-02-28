/*
 * ZADATAK 82 - 07211061
 * Urediti 3 učitana broja po rastućem redoslijedu.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211061.htm
 */

#include <stdio.h>

int main()
{
float a, b, c, p;                      // deklarisanje varjabli
printf("Unesite tri broja: ");
scanf("%f", &a);                     // ulaz a
scanf("%f", &b);                     // ulaz b
scanf("%f", &c);                     // ulaz c

printf("Ucitana tri broja: \n");
printf(" a:  %f  b  %f   c %f \n", a, b, c);

if(a > b)	     // varijabla a veca od varijble b; tj. pogresan redoslijed zamjeni mjesta?
{
p=a;      // pomocna varijabla p prima vrijednost varijable a
a=b;      // varijabla a prima vrijednost varijable b
b=p;      // varijabla b prima vrijednost pomocne varijabla p
}             // zamjenjen redoslijed prve dvije varijable

if(a > c)	      // pogresan redoslijed zamjeni mjesta?
{
p=a;
a=c;
c=p;
}

if(b > c)	      // pogresan redoslijed zamjeni mjesta?
{
p=b;
b=c;
c=p;
}

printf("Uredjena tri broja: \n");
printf(" a:  %f  b  %f   c %f", a, b, c);

return 0;
}