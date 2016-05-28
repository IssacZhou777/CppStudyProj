#ifndef __HEADER__
#define __HEADER__


#include <iostream>
using namespace std;

#define DESC_MAX (200)

#pragma pack (4)

struct Point {
	/* data */
	float x;
	float y;
};

struct NullStruct
{
    /* data */
};

struct Person {
    int age: 3;
    int : 3;
    int level: 3;
    char description[DESC_MAX];

    Person() {
        memset(description, 0, DESC_MAX);
    }
    ~Person() {

    }
};

struct SoftStruct
{
    int a;
    int b[];
    /* data */
};

struct STWithUnion
{
    union{
        unsigned char hex;
        struct{
            unsigned char low  : 4;
            unsigned char high : 4;
        };
    }convert;
    STWithUnion();
};

struct DiffPackStruct {
    char a;
    int b;
    short c;
    /* data */
};

// struct EndianStruct {
//     int data;
//     EndianStruct () {
//         data = 0x12345678;
//     }

//     int getEndianType() {
//         int ret = 0;
//         int convRet = (data & 0xFF000000);
//         if (0x00000078 != convRet) {
//             cout << "Big Endian" << endl <<convRet << endl;
//             ret = 0;
//         } else {
//             cout << "Little Endian" << endl << convRet << endl;
//             ret = 1;
//         }
//         return ret;
//     }
//     /* data */
// };


class NullClass
{
public:
    NullClass();
    ~NullClass();

    /* data */
};

class headerView {
public:
    headerView(int width, int height);

private:
    int w;
    int h;
};

#pragma()

#endif
