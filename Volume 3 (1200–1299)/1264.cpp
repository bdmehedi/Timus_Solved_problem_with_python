/*
* Timus problem 1264. Workdays
*
* Write a program which give two integer number N and M (0 < N > 40000) and print the number of how many time M will apear in the N element array.
*/

#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    printf("%d\n", N*(M+1));

    return 0;
}
