#include <stdio.h> 
#include <math.h>

struct ponto{ double x, y;};

int main(){
    struct ponto a, b;
    printf("Digite o 1° ponto: ");
    scanf("%lf %lf", &a.x,  &a.y);
    
    printf("Digite o 2° ponto: ");
    scanf("%lf %lf", &b.x, &b.y);
    
    double dx = a.x - b.x;
    double dy = a.y - b.y;
    double distancia = sqrt(dx * dx + dy * dy);

    printf("A distância entre os dois pontos é %.2lf", distancia);
    return 0;


}