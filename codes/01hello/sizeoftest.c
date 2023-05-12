#include <stdio.h>

int main(void){
    int int_num;
    long long_num;
    short short_num;
    float float_value;
    double double_value;
    
    printf("int sizeof = %d", sizeof(int));
    printf("short sizeof = %d", sizeof(short));
    printf("long sizeof = %d", sizeof(long));
    printf("float sizeof = %d", sizeof(float));
    printf("double sizeof = %d", sizeof(double));

    return 0;
}