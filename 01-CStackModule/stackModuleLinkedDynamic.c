#include "stackModule.h"
#include <stdio.h>
#include <stdlib.h>

struct node {
    stackItem value;
    struct node* next;
};

struct stack_t {
    struct node* top;  // Puntero al nodo superior
};

stack_t* createStack() {
    stack_t* pila = malloc(sizeof(stack_t));
    pila->top = NULL;
    return pila;
}

void destroyStack(stack_t* pila) {
    while (!isEmpty(pila)) {
        pop(pila);
    }
    free(pila);
}

bool isEmpty(const stack_t* pila) {
    return pila->top == NULL;
}

bool isFull(const stack_t* pila) {
    return false;  // Siempre falso, ya que la memoria es dinámica
}

void push(stack_t* pila, stackItem valor) {
    struct node* new_node = malloc(sizeof(struct node));
    new_node->value = valor;
    new_node->next = pila->top;
    pila->top = new_node;
}

stackItem pop(stack_t* pila) {
    if (isEmpty(pila)) {
        printf("Stack underflow\n");
        return -1;  // Error
    }
    struct node* aux = pila->top;
    stackItem value = aux->value;
    pila->top = aux->next;
    free(aux);
    return value;
}
