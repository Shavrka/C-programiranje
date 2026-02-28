/*
 * ZADATAK 24011310 - 24011310
 * Sa tastature učitati rečenicu, a ispisati posljednju riječ te rečenice...
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24011310.htm
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
char s[100], s1[100];
printf("Unesite recenicu:");
gets(s);
int k=1, l=0, n=strlen(s);
while((s[n-k]==' ')||(s[n-k]=='.')||(s[n-k]=='\n')||(s[n-k]=='!')||(s[n-k]=='?'))
k++;
for(int j=n-k; j>=0; j--)
{
s1[l++]=s[j];
if((s[j-1]==' ')||(s[j-1]==','))
break;
}
for(int i=l-1; i>=0; i--)
printf("%c", (char)tolower(s1[i]));

return 0;
}