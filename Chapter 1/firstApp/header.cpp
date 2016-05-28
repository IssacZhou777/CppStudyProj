#include "header.h"

headerView::headerView(int width, int height) {
    this->w = width;
    this->h = height;
}

NullClass::NullClass() {

}

NullClass::~NullClass() {

}

STWithUnion::STWithUnion() {
	convert.low = 0x01;
    convert.high = 0x02;
    cout << "hex: " << convert.hex << " " << convert.low << " " << convert.high << " God "<< endl; 
    cout << "union size: " << sizeof(convert) << endl;  
}