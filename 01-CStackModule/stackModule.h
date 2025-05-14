#ifndef STACKMODULE_H_ //guardas de inclusion
#define STACKMODULE_H_ //guardas de inclusion

#include <stdbool.h> 

#define MAX_VAL 4 //tamaño max pila

typedef int stackItem; //tipo de elems en la pila
typedef struct stack_t stack_t; //estructura de la pila

stack_t* createStack();

void destroyStack(stack_t*); 

void push(stack_t* pila, stackItem valor);
/**
 * @brief Agrega un elemento al stack.
 * @param pila Puntero al stack donde se agregará el elemento.
 * @param valor Valor del elemento a agregar.
 * @pre El stack no debe estar lleno (IsFull(stack) == false).
 * @post El elemento se agrega al tope del stack.
 */

stackItem pop(stack_t* pila);
/**
 * @brief Extrae y devuelve el elemento superior del stack.
 * @param pila Puntero al stack del cual se eliminará el elemento.
 * @return El valor del elemento eliminado.
 * @pre El stack no debe estar vacío (IsEmpty(stack) == false).
 * @post El elemento superior se elimina del stack.
 */

bool isEmpty(const stack_t* pila);
/**
 * @brief Verifica si el stack está vacío.
 * @param pila Puntero al stack a verificar.
 * @return true si el stack está vacío, false en caso contrario.
 * @pre Ninguna.
 * @post No modifica el estado del stack.
 */

bool isFull(const stack_t* pila);
/**
 * @brief Verifica si el stack está lleno.
 * @param pila Puntero al stack a verificar.
 * @return true si el stack está lleno, false en caso contrario.
 * @pre Ninguna.
 * @post No modifica el estado del stack.
 */

#endif //guardas de inclusion