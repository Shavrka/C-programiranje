#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    double korijen;
    printf("Unesite broja koji želite da kvadrirate: ");
    scanf("%d", &a);
    korijen = sqrt(a);
    printf("Korijen od broja %d, je %.3f.\n", a, korijen);
    return 0;
}