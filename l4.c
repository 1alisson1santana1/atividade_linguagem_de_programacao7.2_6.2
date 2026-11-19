#include <stdio.h>


union bytes { int i; unsigned char b[4]; };


int main(){
    
    union bytes u;
    u.i = 0x01020304;
    for (int j = 0; j < 4; j++) {
        printf("%hhu ", u.b[j]);
    }
    printf("\n");
    return 0;
}

/*o primeiro byte impresso é 0x01 ou 0x04 ? O que isso diz sobre como o seu computador
guarda um int (little-endian)?
R= O primeiro byte é o 0x04, em que o computador ler o byte do menos significativo para o mais significativo,*/