#include "BulbSort.h"

BulbSort::BulbSort()
{

}

BulbSort::~BulbSort()
{

}

void BulbSort::sort(int nums[], int len)
{
	for (int i = 0; i < len-2; ++i)
	{
		for (int j = i; j < len-1; j++)
		{
			if (nums[j] > nums[j+1]) {
				int temp = nums[j];
				nums[j] = nums[j+1];
				nums[j+1] = temp;
			}
		}
	}
}

char* BulbSort::printName() const
{
	char* name = "BulbSort";
	return name;
}