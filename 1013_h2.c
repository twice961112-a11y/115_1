#include <stdio.h>
int main()
{
    int choise;
    printf("產品有 1. 紅茶 30元,2. 綠茶 35元,3. 奶茶 50元,4. 果汁 45元 請輸入選項:");
    scanf("%d",&choise);
    switch(choise)
    {
        case 1:
        printf("紅茶,30元");
        break;
        case 2:
        printf("綠茶,35元");
        break;
        case 3:
        printf("奶茶,50元");
        break;
        case 4:
        printf("果汁,45元");
        break;
        default:
        printf("輸入錯誤");
    }
    return 0;
}