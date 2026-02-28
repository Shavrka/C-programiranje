/*
 * ZADATAK 14 - 07311014
 * Napisati program koji za upisani samoglasnik ispisuje redni broj samoglasnika u abecedi, prema slijedećoj tabeli:
 * Kategorija: CASE - C programi - Riješeni zadaci
 * Izvor: http://www.znanje.org/knjige/computer/c/v/073c/07311014.htm
 */

#include <stdio.h>

main()

{
char slovo;

printf("Unesite samoglasnik: ");
scanf("%c",&slovo);

switch(slovo)
{
case 'A': case 'a': printf("1"); break;
case 'E': case 'e': printf("5"); break;
case 'I': case 'i': printf("9"); break;
case 'O': case 'o': printf("15"); break;
case 'U': case 'u': printf("20"); break;
default: printf("Greska");
}
return 0;
}