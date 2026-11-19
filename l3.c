#include <stdio.h>

struct ponto {
    int x;
    int y;
};

void move(struct ponto *p, int dx, int dy){
    p->y += dx;
     p->x += dy;
}

int main(){
    struct ponto p = {1,1};
    move(&p, 4, 2);
    return 0;
}