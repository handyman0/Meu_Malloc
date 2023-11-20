#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void* meu_malloc(size_t tamanho) {
    void* ptr;
    ptr = sbrk(0);
    if (sbrk(tamanho) == (void*) -1) {
        return NULL;
    } else {
        return ptr;
    }
}

int main() {
    int *ponteiro = (int*)meu_malloc(sizeof(int));
    if (ponteiro == NULL) {
        printf("Erro: não foi possível alocar a memória\n");
    } else {
        *ponteiro = 42;
        printf("O valor de ponteiro é %d\n", *ponteiro);
        free(ponteiro);
    }
    return 0;
}

