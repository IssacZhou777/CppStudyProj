#include "SelectSort.h"

SelectSort::SelectSort()
{

}

SelectSort::~SelectSort()
{

}

void SelectSort::sort(int nums[], int len)
{
	for (int i = 0; i < len; ++i)
	{
		int min = i;
		for (int j = len - 1; j > i; j--)
		{
			if (nums[i] > nums[j]) {
				min = j;
			}
		}

		int temp = nums[i];
		nums[i] = nums[min];
		nums[min] = temp;
	}
}

char* SelectSort::printName() const
{
	char* name = "SelectSort";
	return name;
}