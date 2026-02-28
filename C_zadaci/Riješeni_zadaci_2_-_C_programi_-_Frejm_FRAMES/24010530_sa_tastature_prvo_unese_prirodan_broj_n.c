/*
 * ZADATAK 24010530 - 24010530
 * Sa tastature prvo unese prirodan broj n, a zatim n realnih brojeva. Nakon unosa program treba da ispiše sumu svih unesenih brojeva, kao i sumu svih pozitivnih brojeva.
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010530.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
int n;
printf("Unesi broj n:");
scanf("%d", &n);
int s=0,p=0;
for(int i=1; i<=n; i++)
{
int a;
scanf("%d", &a);
s=s+a;
if(a>0)
p=p+a;
}
printf("Suma n unesenih brojeva je %d, a suma svih pozitivnih brojeva je %d", s,p);

return 0;
}