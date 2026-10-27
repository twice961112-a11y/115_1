#include <stdio.h>
int add(int p,int q)
{
    return p*q;
}
int main()
{
    int money,amount,total;
    printf("請輸入金額:");
    scanf("%d",&money);
    printf("請輸入數量:");
    scanf("%d",&amount);
    total=add(money,amount);
    printf("總金額:%d",total);
    return 0;
}