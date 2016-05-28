#include "SortBase.h"
#include <iostream>

using namespace std;

SortBase::SortBase() {

}

SortBase::~SortBase() {

}

void SortBase::print(int nums[], int len) {
	cout<<printName()<<" : " << endl;
	for (int i = 0; i < len; ++i)
	{
		cout<< nums[i]<<" ";
	}
	cout<<endl;
	// cout<<" count : "<<count<<endl;
}