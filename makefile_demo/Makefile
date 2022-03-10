main.out: main.o print_g.o print_h.o
	g++ main.o print_g.o print_h.o -o main.out

print_g.o:print_g.h print_g.cpp
	g++ -c print_g.cpp -o print_g.o

print_h.o:print_h.h print_h.cpp
	g++ -c print_h.cpp -o print_h.o

main.o:main.cpp
	g++ -c main.cpp -o main.o
	
clean:
	rm main.o print_g.o print_h.o main.out
