
objects = firstApp.o header.o

firstApp : $(objects)
	g++ -o firstApp $(objects)
header.o : header.cpp header.h
	g++ -c header.cpp header.h	
firstApp.o : firstApp.cpp firstApp.h
	g++ -c firstApp.cpp firstApp.h

#.PHONY : clean
clean : 
	rm firstApp $(objects)
