#include <stdio.h>

float trans(float weight);

int main(void){

    float weight;  /*你的体重 */
    float value;   /*相等重量的白金价值 */

    printf("Are you worth weight in platinum?\n");

    printf("Let's check it out.\n");

    printf("Please enter your weight in pounds:");

    //获取用户输入数据
    scanf("%f", &weight);

    value = trans(weight);

    printf("Your weight in platinum is worth $%.2f.\n", value);
    printf("You are easily worth tha! If platinum prices drop, \n");
    printf("eat more to maintian your value.\n");

    return 0;
}

float trans(float weight){
    //假设白金的价格是每盎司$1700
    //14.5833 用于把英镑常衡盎司转换为金衡盎司
    float value;
    value = 1700.0 * weight * 14.5833;
    return value;
}