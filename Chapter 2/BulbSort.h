#include "SortBase.h"
#ifndef __BULB_SORT__
#define __BULB_SORT__ 

class BulbSort : public SortBase
{
public:
	BulbSort();
	~BulbSort();

	virtual void sort(int nums[], int len);
	virtual char* printName() const;
};

#endif