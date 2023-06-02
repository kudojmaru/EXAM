#include <stdio.h>
#include <stdlib.h>

struct PC {
    char* name;
    int speed;
    int RAM;
};

struct PC* fastestPC(struct PC data[], int n) {
    struct PC* fastest = &data[0];

    for (int i = 1; i < n; i++) {
        if (data[i].speed > fastest->speed) {
            fastest = &data[i];
        } else if (data[i].speed == fastest->speed && data[i].RAM > fastest->RAM) {
            fastest = &data[i];
        }
    }
    return fastest;
}

int main() {
    struct PC data[] = {
        {"PC1", 3000, 8},
        {"PC2", 2500, 16},
        {"PC3", 3000, 16},
        {"PC4", 2000, 8},
        {"PC5", 3000, 4}
    };

    struct PC* result = fastestPC(data, 5);
    printf("Самый быстрый компьютер: %s\n", result->name);
    printf("Скорость: %d\n", result->speed);
    printf("Оперативная память: %d\n", result->RAM);
    return 0;
}