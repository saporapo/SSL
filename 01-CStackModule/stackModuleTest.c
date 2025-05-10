#include <assert.h>
#include <stdio.h>
#include <time.h> // Biblioteca para medir el tiempo de procesamiento

#include "stackModule.h"

void initStack(stack* pila) {
    pila->top = -1;
}

void testPerformance(stack* pila){
    initStack(pila); //inicio la pila

    // Test isEmpty - isFull en un stack vacío
    assert(isEmpty(pila) == true);
    assert(isFull(pila) == false);

    // Test Push
    push(pila, 10); //agrego un 10 a la pila
    assert(isEmpty(pila) == false); //verifico que la pila no sea vacia
    assert(pila->data[pila->top] == 10); //verifico que la pila haya guardado en data en la posicion top un 10

    // Test Push y Pop
    push(pila, 20); //agrego un 20 a la pila
    assert(pila->data[pila->top] == 20); //verifico que se haya guardado
    assert(pop(&pila) == 20); //verifico que el elemento extraido sea 20
    assert(pila->data[pila->top] == 10); //verifico que el data de la pila en la posicion top sea 10

    // Test de límite superior (inicio i=1 porque esta 10 guardado)
    for (int i = 1; i < MAX_VAL; i++) {
        push(pila, i);
    }
    assert(isFull(pila) == true);

    // Test Pop hasta vaciar el stack
    for (int i = 0; i < MAX_VAL; i++) {
        assert(pop(pila) == MAX_VAL - 1 - i);
    }
    assert(isEmpty(pila) == true);
}

int main() {
    stack pila;

    clock_t start = clock(); //inicia medicion de tiempo

    testPerformance(&pila);
    printf("Tests pasados exitosamente.\n");

    clock_t end = clock();  // Termina medición de tiempo
    double tiempo = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Tiempo total de ejecucion: %f segundos\n", tiempo);

    return 0;
}