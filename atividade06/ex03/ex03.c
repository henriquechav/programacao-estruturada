#include <stdio.h>

struct coordenada {
    int x;
    int y;
    int z;
};

void swap(struct coordenada *p1, struct coordenada *p2) {
    int xprov;
    int yprov;
    int zprov;
    
    xprov = p1->x;
    yprov = p1->y;
    zprov = p1->z;
    
    p1->x = p2->x;
    p1->y = p2->y;
    p1->z = p2->z;
    
    p2->x = xprov;
    p2->y = yprov;
    p2->z = zprov;
}

int main() {
    struct coordenada p1;
    struct coordenada p2;
    
    printf("Digite x, y, z de P1:\n");
    scanf("%d", &p1.x);
    scanf("%d", &p1.y);
    scanf("%d", &p1.z);
    
    printf("Digite x, y, z de P2:\n");
    scanf("%d", &p2.x);
    scanf("%d", &p2.y);
    scanf("%d", &p2.z);
    
    printf("ANTES\n");
    printf("P1:(%d,%d,%d) ", p1.x, p1.y, p1.z);
    printf("P2:(%d,%d,%d) ", p2.x, p2.y, p2.z);
    
    swap(&p1, &p2);
    
    printf("DEPOIS\n");
    printf("P1:(%d,%d,%d) ", p1.x, p1.y, p1.z);
    printf("P2:(%d,%d,%d) ", p2.x, p2.y, p2.z);
    
    return 0;
}
