DED_FLAGS=-Wshadow -Winit-self -Wredundant-decls -Wcast-align -Wundef -Wfloat-equal -Winline -Wunreachable-code -Wmissing-declarations -Wmissing-include-dirs -Wswitch-enum -Wswitch-default -Weffc++ -Wmain -Wextra -Wall -g -pipe -fexceptions -Wcast-qual -Wconversion -Wctor-dtor-privacy -Wempty-body -Wformat-security -Wformat=2 -Wignored-qualifiers -Wlogical-op -Wno-missing-field-initializers -Wnon-virtual-dtor -Woverloaded-virtual -Wpointer-arith -Wsign-promo -Wstack-usage=8192 -Wstrict-aliasing -Wstrict-null-sentinel -Wtype-limits -Wwrite-strings -Werror=vla -D_DEBUG -D_EJUDGE_CLIENT_SIDE

OBJECTS=main.o my_math.o solver.o read_print.o

CC=g++

all: kvadros

kvadros: $(OBJECTS)
	$(CC) $(OBJECTS) -o kvadros

main.o: main.cpp
	$(CC) main.cpp -c $(DED_FLAGS)

my_math.o: my_math.cpp
	$(CC) my_math.cpp -c $(DED_FLAGS)

solver.o: solver.cpp
	$(CC) solver.cpp -c $(DED_FLAGS)

read_print.o: read_print.cpp
	$(CC) read_print.cpp -c $(DED_FLAGS)

clean:
	rm -rf *.o kvadros
	rm -rf *.save kvadros