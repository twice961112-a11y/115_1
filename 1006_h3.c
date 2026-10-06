#include <stdio.h>
int main()
{
    int 成績;
    int 出席率;
    printf("請輸入成績");
    scanf ("%d",&成績);
    printf("請輸入出席率");
    scanf ("%d",&出席率);
    if (成績>=60)
    {
        if (出席率>=80)
        {
            printf("通過");
        }
        else
        {
           printf("不通過"); 
        }
    }
    else
    {
        printf("不通過");
    }
    return 0;
}