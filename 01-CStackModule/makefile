CC = gcc
CFLAGS = -Wall

# Archivos
SOURCES = StackModuleContiguousStatic.c StackModuleTest.c
OBJECTS = $(SOURCES:.c=.o)
EXEC = test_stack

# Regla para compilar
$(EXEC): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJECTS)

# Limpiar los archivos objeto y ejecutables
clean:
	rm -f $(OBJECTS) $(EXEC)

# Regla para ejecutar las pruebas
run: $(EXEC)
	./$(EXEC)
