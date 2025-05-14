#include "stackModule.h"
#include <stdio.h>
#include <stdlib.h>

struct stack_t {
    stackItem data[MAX_VAL];
    stackItem* siguiente;  // puntero al siguiente espacio libre en el data
};

stack_t* createStack() {
    stack_t* pila = malloc(sizeof(stack_t));
    if (pila != NULL){
        pila->siguiente = pila->data;
    }
    return pila;
}

void destroyStack(stack_t* pila) {
    free(pila);
}

bool isEmpty(const stack_t* pila) {
    return pila->siguiente == pila->data;
}

bool isFull(const stack_t* pila) {
    return pila->siguiente == pila->data + MAX_VAL;
}

void push(stack_t* pila, stackItem valor) {
    if (isFull(pila)) {
        printf("Stack overflow\n");
        return;
    }
    *(pila->siguiente) = valor;  // Insertamos el valor
    pila->siguiente++;  // Movemos el puntero hacia adelante
}

stackItem pop(stack_t* pila) {
    if (isEmpty(pila)) {
        printf("Stack underflow\n");
        return -1;  // Error al hacer pop
    }
    pila->siguiente--;  // Decrementamos el puntero
    return *(pila->siguiente);  // Devolvemos el valor
}
