#ifndef STACKMODULE_H_ //guardas de inclusion
#define STACKMODULE_H_ //guardas de inclusion

#include <stdbool.h> 

#define MAX_VAL 100 //100 es el max val de la pila 

typedef int stackItem; //tipo de dato de los elems de la pila

//tipo de dato de la pila
typedef struct {
    stackItem data[MAX_VAL]; //almacena los elementos de la pila
    int top; // indice del elem sup del stack
} stack;

/**
 * @brief Agrega un elemento al stack.
 * @param stack Puntero al stack donde se agregará el elemento.
 * @param valor Valor del elemento a agregar.
 * @pre El stack no debe estar lleno (IsFull(stack) == false).
 * @post El elemento se agrega al tope del stack.
 */
void push(stack* pila, stackItem valor);

/**
 * @brief Extrae y devuelve el elemento superior del stack.
 * @param stack Puntero al stack del cual se eliminará el elemento.
 * @return El valor del elemento eliminado.
 * @pre El stack no debe estar vacío (IsEmpty(stack) == false).
 * @post El elemento superior se elimina del stack.
 */
stackItem pop(stack* pila);

/**
 * @brief Verifica si el stack está vacío.
 * @param stack Puntero al stack a verificar.
 * @return true si el stack está vacío, false en caso contrario.
 * @pre Ninguna.
 * @post No modifica el estado del stack.
 */
bool isEmpty(stack* pila);

/**
 * @brief Verifica si el stack está lleno.
 * @param stack Puntero al stack a verificar.
 * @return true si el stack está lleno, false en caso contrario.
 * @pre Ninguna.
 * @post No modifica el estado del stack.
 */
bool isFull(stack* pila);

#endif //guardas de inclusion