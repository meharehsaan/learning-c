#include <stdio.h>

// extern int globalVar;

void autoDemo() {
    auto int x = 10;
    printf("Auto Variable: %d\n", x);
    x++;
}

void staticDemo() {
    static int count = 0;
    printf("Static Variable: %d\n", count);
    count++;
}

void registerDemo() {
    register int y = 20;
    printf("Register Variable: %d\n", y);
}

void constDemo() {
    const int z = 30;
    printf("Constant Variable: %d\n", z);
}

void volatileDemo() {
    volatile int sensorValue = 0;
    printf("Volatile Variable: %d\n", sensorValue);
    printf("Updated Volatile Variable: %d\n", sensorValue);
}

void volatileConstDemo() {
    volatile const int data = 100;
    printf("Volatile Constant Variable: %d\n", data);
    printf("Updated Volatile Constant Variable: %d\n", data);
}

int main() {
    // printf("Global Variable (extern): %d\n", globalVar);

    autoDemo();
    autoDemo();

    staticDemo();
    staticDemo();
    staticDemo();

    registerDemo();

    constDemo();

    volatileDemo();

    volatileConstDemo();

    return 0;
}
