/*
 *  This is a comment
 *  That lives on multiple lines
 *  Don’t forget to close
 */
 
#include <cstdio>

int step_function(int x) {
    int result = 0;
    if (x < 0) {
        result = -1;
    } else if (x > 0) {
        result = 1;
    }
    return result;
}

int main() {

    printf("Hello, world!\n");

    int value1 = step_function(100); // value1 is  1
    int value2 = step_function(0);   // value2 is  0
    int value3 = step_function(-10); // value3 is -1

    printf("value1: %d, value2: %d, value3: %d\n", value1, value2, value3);

    int num1 = 42;
    int result1 = step_function(num1);

    int num2 = 0;
    int result2 = step_function(num2);

    int num3 = -32767;
    int result3 = step_function(num3);

    printf("Num1: %d, Step: %d\n", num1, result1);
    printf("Num2: %d, Step: %d\n", num2, result2);
    printf("Num3: %d, Step: %d\n", num3, result3);

    return 0;
}