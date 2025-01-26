#include <stdio.h>
int main()
{
    int n;
    unsigned long faktorijel=1;
    printf("Unesite zeljeni faktorijel (Ne veći od 10): ");
    scanf("%d",&n);
    for (int i=1; i<=n; i++)
    {
        faktorijel*=i;
    }
    printf("Faktorijel broja %d, je %lu.\n",n, faktorijel);
    return 0;
}