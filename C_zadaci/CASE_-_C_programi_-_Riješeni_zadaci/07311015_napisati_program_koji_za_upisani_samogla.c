/*
 * ZADATAK 22 - 07311015
 * Napisati program koji za upisani samoglasnik uveća brojač odgovarajućeg samoglasnika.
 * Kategorija: CASE - C programi - Riješeni zadaci
 * Izvor: http://www.znanje.org/knjige/computer/c/v/073c/07311015.htm
 */

#include <stdio.h>

int main() {
char slovo;
int a=0, e=0, i=0, o=0, u=0;

printf("Unesi samoglasnik: ");
scanf("%c",&slovo);

switch(slovo) {
case 'A': case 'a': printf("a = %d", ++a); break;  // uvecaj brojac pa ispisi
case 'E': case 'e': printf("e = %d", ++e); break;  // uvecaj brojac pa ispisi
case 'I': case 'i': printf("i = %d", ++i); break;  // uvecaj brojac pa ispisi
case 'O': case 'o': printf("o = %d", ++o); break;  // uvecaj brojac pa ispisi
case 'U': case 'u': printf("u = %d", ++u); break;  // uvecaj brojac pa ispisi
default: printf("Greska");
}
return 0;
}