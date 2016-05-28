#include "SelectSort.h"
#include "BulbSort.h"
#include "QuickSort.h"
#include <iostream>
#include <ctime>

using namespace std;

#define LEN 20

int main() {
	clock_t start, finish;
	int nums[LEN] = {2, 1, 4, 6, 3, 5, 8, 9, 10, 7,
					 11, 16, 14, 18, 19, 20, 12, 22, 23, 15};
	SortBase * selectSort = new SelectSort();
	selectSort->print(nums, LEN);
	start = clock();
	selectSort->sort(nums, LEN);
	finish = clock();
	cout<<"duration : "<<(finish - start)<<"ms"<<endl;
	selectSort->print(nums, LEN);

	int nums2[LEN] = {2, 1, 4, 6, 3, 5, 8, 9, 10, 7,
					 11, 16, 14, 18, 19, 20, 12, 22, 23, 15};
	SortBase * bulbSort = new BulbSort();
	bulbSort->print(nums2, LEN);
	start = clock();
	bulbSort->sort(nums2, LEN);
	finish = clock();
	cout<<"duration : "<<(finish - start)<<"ms"<<endl;
	bulbSort->print(nums2, LEN);

	int nums3[LEN] = {2, 1, 4, 6, 3, 5, 8, 9, 10, 7,
					 11, 16, 14, 18, 19, 20, 12, 22, 23, 15};
	SortBase * quickSort = new QuickSort();
	quickSort->print(nums3, LEN);
	start = clock();
	quickSort->sort(nums3, LEN);
	finish = clock();
	cout<<"duration : "<<(finish - start)<<"ms"<<endl;
	quickSort->print(nums3, LEN);

	return 0;
}