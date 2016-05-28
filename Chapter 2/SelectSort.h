#include "SortBase.h"
#ifndef __SELECT_SORT__
#define __SELECT_SORT__ 

class SelectSort : public SortBase
{
public:
	SelectSort();
	~SelectSort();

	virtual void sort(int nums[], int len);
	virtual char* printName() const;
};

#endif