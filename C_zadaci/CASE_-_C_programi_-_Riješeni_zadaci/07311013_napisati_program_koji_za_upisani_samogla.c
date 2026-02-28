/*
 * ZADATAK 13 - 07311013
 * Napisati program koji za upisani samoglasnik (veliko slovo) ispisuje redni broj samoglasnika u abecedi, prema slijedećoj tabeli:
 * Kategorija: CASE - C programi - Riješeni zadaci
 * Izvor: http://www.znanje.org/knjige/computer/c/v/073c/07311013.htm
 */

#include <stdio.h>

main()

{
char slovo;

printf("Unesite samoglasnik: ");
scanf("%c",&slovo);

switch(slovo)
{
case 'A': printf("1"); break;
case 'E': printf("5"); break;
case 'I': printf("9"); break;
case 'O': printf("15"); break;
case 'U': printf("20"); break;
default: printf("Greska");
}
return 0;
}