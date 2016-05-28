#include "SortBase.h"
#ifndef __QUICK_SORT__
#define __QUICK_SORT__ 

class QuickSort : public SortBase
{
public:
	QuickSort();
	~QuickSort();

	virtual void sort(int nums[], int len);
	virtual char* printName() const;

	void quickSort(int nums[], int low, int high);
};

#endif