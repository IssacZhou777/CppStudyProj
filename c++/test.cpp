#include <iostream>

using namespace std;

#pragma pack(4)

struct TestStruct{
short b;
char a;
int c;
char d[1];
};

#pragma pack()
int main () {
TestStruct t;
cout<<sizeof(t)<<endl;

return 0;
}
