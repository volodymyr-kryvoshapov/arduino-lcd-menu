all: menu.exe

menu.exe: main.o
	g++ -g -o menu main.o

main.o:
	g++ -c -g src/main.cpp

clean:
	rm main2.o menu
	
	
	
#CXXFLAGS =  -O2 -g -Wall -fmessage-length=0
#OBJS =      main.cpp
#LIBS =
#TARGET =      main.exe
#
#$(TARGET):  $(OBJS)
#    $(CXX) -o $(TARGET) $(OBJS) $(LIBS)
#    
#all:    $(TARGET)
#
#clean:
#    rm -f $(OBJS) $(TARGET)