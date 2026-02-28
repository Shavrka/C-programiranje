/*
 * ZADATAK 24011330 - 24011330
 * Sa tastature učitati rečenicu, a zatim za rečenicu učitanu sa tastature ispisati da li je palindrom ili nije...
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24011330.htm
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
char s[100], pom[100];
printf("Unesite recenicu:");
gets(s);
int j=0;
for(int i=0; i < strlen(s); i++)
{
if((s[i]>'A'&&s[i]<'Z')||(s[i]>'a'&&s[i]<'z'))
pom[j++]=toupper(s[i]);
}
bool t=false;
for(int i=0; i < ((j-1)/2); i++)
if(pom[i]!=pom[j-i-1])
{
t=true;
break;
}
if(t)
printf("Nije palindrom.");
else
printf("Palindrom je.");
return 0;
}