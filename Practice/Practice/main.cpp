//
//  main.cpp
//  Practice
//
//  Created by SYED RAFI NAQVI on 4/11/20.
//  Copyright © 2020 SYED RAFI NAQVI. All rights reserved.
//

#include <iostream>
using namespace std;

struct Arr{
    int length;
    int breath;
};

int main() {
//    struct Arr *p;
//    p=new struct Arr;
//    p->length=12;
//    p->breath=23;
//    cout<<p->length<<endl<<p->breath<<endl;
    
//
//    int *a = new int;
//    *a=21;
//    cout<<*a;
//
    int a , *b;
    a=32;
    b = &a;
    cout<<*b;
    return 0;
}
