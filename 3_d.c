#include <stdio.h>

int main() {
    int num, prev, count = 0;

    scanf("%d", &prev);
    scanf("%d", &num);
    while (num != 0) {
        if (num == prev + 3) {
            count += 1;
        }
        prev = num;
        scanf("%d", &num);
    }

    printf("%d\n", count);

    return 0;
}