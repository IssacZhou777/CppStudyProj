#include <iostream>
#ifndef __SORT_BASE__
#define __SORT_BASE__ 
class SortBase
{
public:
	SortBase();
	~SortBase();

	virtual void sort(int nums[], int len)  = 0;
	virtual char* printName() const = 0;
	void print(int nums[], int len);

	int count = 0;
	/* data */
};
#endif
