all: menu.exe

menu.exe: main.o
	g++ -g -o menu main.o

main.o:
	g++ -c -g src/main.cpp

clean:
	rm main.o menu.exe