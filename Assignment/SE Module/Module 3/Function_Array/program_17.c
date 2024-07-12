// WAP to show difference between Structure and Union.
#include <stdio.h>

struct Point {
    int x;
    int y;
};

union Number {
    int integer;
    float floating;
};

int main() {
   struct Point p;
    p.x = 10;
    p.y = 20;
    printf("Structure - Point: (%d, %d)\n", p.x, p.y);

    union Number num;
    num.integer = 10;
    printf("Union - Integer: %d\n", num.integer);
    num.floating = 3.14;
    printf("Union - Floating: %.2f\n", num.floating);

}
