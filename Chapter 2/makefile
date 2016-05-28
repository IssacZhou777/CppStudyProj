objects = SelectSort.o SortBase.o BulbSort.o QuickSort.o main.o
sort : $(objects)
	g++ -o sort $(objects)


SortBase.o : SortBase.h
SelectSort.o : SelectSort.h
BulbSort.o : BulbSort.h
QuickSort.o : QuickSort.h
main.o : main.cpp

#.PHONY : clean
clean :
	-rm $(objects)
	-rm sort