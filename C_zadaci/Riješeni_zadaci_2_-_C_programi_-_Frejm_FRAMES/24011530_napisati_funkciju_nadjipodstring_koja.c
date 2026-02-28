/*
 * ZADATAK 24011530 - 24011530
 * Napisati funkciju “NadjiPodstring” koja obavlja potpuno istu funkciju kao i funkcija “strstr” iz biblioteke “cstring”. Funkciju treba realizirati isključivo korištenjem pokazivačke aritmetike.
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24011530.htm
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int nadji_podstring(char *prvi,char *dr)
{
int i;
bool t=true;
while(*prvi!=*dr&&(*prvi!=0))
{
prvi++;
}
while(*prvi!=0)
{
t=true;
i=0;
while(*dr!=0&&(*prvi!=0))
{
if(*dr!=*prvi)
{
t=false;
break;
}
i++;
dr++;
prvi++;
}
prvi-i;
dr-i;
if(t)
return (int)prvi;
prvi++;
}
return 0;
}
int main()
{
char a[50],b[50];
printf("unesite recenicu (manje od 50 karaktera) i frazu\n da ispitamo da li se unijeta fraza nalazi u recenici:\n");
gets(a);
gets(b);
if(nadji_podstring(&a[0],&b[0])!=0)
printf("yes!");
else
printf("no!");
return 0;
}