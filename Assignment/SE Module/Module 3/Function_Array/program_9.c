//WAP to show difference between Structure and Union.

#include <stdio.h>

struct StructExample {
    int x;
    float y;
};

union UnionExample {
    int x;
    float y;
};

int main() {
    struct StructExample structVar;
    union UnionExample unionVar;

    printf("Size of Structure: %lu bytes\n", sizeof(struct StructExample));
    printf("Size of Union: %lu bytes\n", sizeof(union UnionExample));

    structVar.x = 10;
    structVar.y = 20.5;
    printf("Structure: x = %d, y = %f\n", structVar.x, structVar.y);

    unionVar.x = 10;
    printf("Union: x = %d\n", unionVar.x);
    unionVar.y = 20.5;
    printf("Union: y = %f\n", unionVar.y);

}
