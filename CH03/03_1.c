#include<stdio.h>
int main(void)
{
    float weight;
    float value;

    printf("你的体重相当于白金的话值多少钱?\n");
    printf("让我们来看看吧!\n");
    printf("请输入你的体重:");
    scanf("%f",&weight);
    value = 1700.0 * weight * 14.5833;
    printf("你白金体重相当于 %.3f 美元。\n",value );
    printf("如果白金价格下跌，你很容易拥有！\n");
    printf("所以要多吃点东西保护你的价格。\n");

    return 0;

}
