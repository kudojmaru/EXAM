#include <stdio.h>
#include <string.h>
#include <math.h>

int toDecimal(char str[]) {
    int len = strlen(str);
    int decimal = 0;
    for (int i = 0; i < len; i++) {
        if (str[i] == '1') {
            decimal += pow(2, len - i - 1);
        }
    }
    return decimal;
}

int main() {
    char str[100] = "101";
    int result = toDecimal(str);
    printf("%d\n", result);
    return 0;
}