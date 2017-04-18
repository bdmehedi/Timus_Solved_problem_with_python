/*
# timus problem no: 1409
# problem link: http://acm.timus.ru/problem.aspx?space=1&num=1409
*/

#include <stdio.h>

int main()
{
    int H, L, total;
    scanf("%d %d", &H, &L);
    total = (H + L) - 1;
    printf("%d %d\n", total - H, total - L);

    return 0;
}
