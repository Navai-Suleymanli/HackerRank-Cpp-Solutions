#include <stdio.h>
#include <cstdlib>

void update(int *pa,int *pb) {
    // Complete this function 
    int x = *pa+*pb;
    int y = abs(*pa-*pb);
    *pa = x;
    *pb = y; 
}

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);
    update(&a, &b);
    printf("%d\n%d", a, b);

    return 0;
}
