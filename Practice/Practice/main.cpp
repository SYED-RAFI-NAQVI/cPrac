//
//  main.cpp
//  Practice
//
//  Created by SYED RAFI NAQVI on 4/11/20.
//  Copyright © 2020 SYED RAFI NAQVI. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

//
//struct Arr{
//    int length;
//    int breath;
//};


int arrBinary(int k){
    int l, h, mid;
    int arr[] = {1,2,3,4,5,6,7,8,9};
    l = 0;
    h = (sizeof(arr)/sizeof(int)) - 1;
    while(l<=h){
        mid = floor((l + h)/2);
        if(arr[mid] == k){
            return mid;
        }else if(arr[mid] < k){
             l = mid + 1;
        }else{
             h = mid - 1;
        }
    }
    return -1;
};

int main() {
    cout<<"index: "<<arrBinary(6)<<endl;
    return 0;
}
