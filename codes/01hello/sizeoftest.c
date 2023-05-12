#include <stdio.h>

int main(void){
    int int_num;
    long long_num;
    short short_num;
    float float_value;
    double double_value;
    
    printf("int sizeof = %ld", sizeof(int));
    printf("short sizeof = %ld", sizeof(short));
    printf("long sizeof = %ld", sizeof(long));
    printf("float sizeof = %ld", sizeof(float));
    printf("double sizeof = %ld", sizeof(double));

    return 0;
}