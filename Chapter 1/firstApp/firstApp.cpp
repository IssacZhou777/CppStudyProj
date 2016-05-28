#include "firstApp.h"
#include "header.h"


int main() {
   
   // NullStruct st;
   // cout << "空结构体大小: " << sizeof(st) << endl;

   // NullClass cls;
   // cout << "空类大小: " << sizeof(cls) << endl;

	SoftStruct sst;
	cout << "柔性结构体大小: " << sizeof(sst) << endl;

	Person person;
	cout << "带位域的结构体大小: " << sizeof(person) << endl;

	std::cout << "hello c++!" << std::endl;

	DiffPackStruct dst;
	cout << "字节对齐: " << sizeof(dst) << endl;

	// EndianStruct est;
	// cout << "当前机器是啥端: " << est.getEndianType() << endl;

	STWithUnion sust;
	

	return 0;
}
