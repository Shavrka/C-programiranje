/*
 * ZADATAK 85 - 07211157
 * Urediti 4 učitana broja po opadajućem redoslijedu.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211157.htm
 */

#include <stdio.h>

int main()
{
float a, b, c, d, p;                                 // deklarisanje varjabli
printf("Unesite cetiri broja: ");
scanf("%f", &a);                                     // ulaz a
scanf("%f", &b);                                     // ulaz b
scanf("%f", &c);                                     // ulaz c
scanf("%f", &d);                                     // ulaz d

printf("Ucitana cetiri broja:\n");
printf(" a:  %f  b  %f   c %f   d %f  \n", a, b, c, d);

if(a < b)	      // varijabla a manja od varijble b; tj. pogresan redoslijed zamjeni mjesta ?
{
p=a;      // pomocna varijabla p prima vrijednost varijable a
a=b;      // varijabla a prima vrijednost varijable b
b=p;      // varijabla b prima vrijednost pomocne varijabla p
}             // zamjenjen redoslijed prve dvije varijable

if(a < c)	      // pogresan redoslijed zamjeni mjesta?
{
p=a;
a=c;
c=p;
}

if(a < d)	      // pogresan redoslijed zamjeni mjesta?
{
p=a;
a=d;
d=p;
}

if(b < c)	      // pogresan redoslijed zamjeni mjesta?
{
p=b;
b=c;
c=p;
}

if(b < d)	      // pogresan redoslijed zamjeni mjesta?
{
p=b;
b=d;
d=p;
}

if(c < d)	      // pogresan redoslijed zamjeni mjesta?
{
p=c;
c=d;
d=p;
}
printf("Opadajuci redoslijed: \n");
printf(" a:  %f  b  %f   c %f   d %f ", a, b, c, d);

return 0;
}