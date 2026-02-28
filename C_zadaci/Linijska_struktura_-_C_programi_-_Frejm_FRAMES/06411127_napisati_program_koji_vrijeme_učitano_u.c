/*
 * ZADATAK 06411127 - 06411127
 * Napisati program koji vrijeme učitano u satima, minutama i sekundama izračunava i ispisuje u sekundama.
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06411127.htm
 */

#include <stdio.h>
#include <conio.h>
int main()
{
int a,b,c,x;
printf("unijeti sate ,minute i sekunde\n");
scanf("%d%d%d",&a,&b,&c);
x=a*3600+b*60+c;
printf("u sekundama dato vrijeme iznosi %d",x);
return 0;
}