10) Tabla comparativa de benchmarks:

gcc -o test_stack stackModuleTest.c stackModuleContiguousStatic.c

Tests pasados exitosamente.
Tiempo total de ejecucion: 0.000047 segundos

real    0m0.052s
user    0m0.002s
sys     0m0.001s

gcc -o test_stack stackModuleTest.c stackModuleLinkedDynamic.c

Tests pasados exitosamente.
Tiempo total de ejecucion: 0.000059 segundos

real    0m0.015s
user    0m0.003s
sys     0m0.000s

12) Respuestas:

a. ¿Cuál es la mejor implementación? Justifique.

Para casos flexibles y con tamaño variable. Implementación dinámica: flexible para estructuras dinámicas, sin límite de elementos salvo la memoria, en consecuencia es más lenta y consume más memoria por los punteros.

Para casos simples, rápidos y con memoria conocida. Implementación estática: Es más rápida y no tiene acceso directo a memoria contigua, pero tiene limite de tamaño.

b. ¿Qué cambios haría para que no haya precondiciones? 
¿Qué implicancia tiene el cambio?



c. ¿Qué cambios haría en el diseño para que el stack sea genérico, es decir permita elementos de otros tipos que no sean int? ¿Qué implicancia tiene el cambio?

Usar void* en vez de stackItem para permitir cualquier tipo de dato como elemento de la pila. Esto haría el diseño más flexible.

d. Proponga un nuevo diseño para que el módulo pase a ser un tipo de dato, es decir, permita a un programa utilizar más de un stack.

Se puede crear una estructura de pila que contenga múltiples pilas y permitir operaciones como push y pop en diferentes pilas.