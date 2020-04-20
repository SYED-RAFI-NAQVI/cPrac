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

/*   Array Binary Search   */

//int arrBinary(int k){
//    int l, h, mid;
//    int arr[] = {1,2,3,4,5,6,7,8,9};
//    l = 0;
//    h = (sizeof(arr)/sizeof(int)) - 1;
//    while(l<=h){
//        mid = floor((l + h)/2);
//        if(arr[mid] == k){
//            return mid;
//        }else if(arr[mid] < k){
//             l = mid + 1;
//        }else{
//             h = mid - 1;
//        }
//    }
//    return -1;
//};
//
//int main() {
//    cout<<"index: "<<arrBinary(6)<<endl;
//    return 0;
//}

/*   Diagonal Matrix   */

void Set(int a[], int i, int j, int x){
    if(i==j){
        a[i-1]=x;
    }
};

int Get(int a[], int i, int j){
    if(i==j){
        return a[i-1];
    }
    return 0;
};

void Display(int a[]){
    for(int i=1; i<4; i++){
//        cout<<"I :"<<i<<endl;
        for(int j=1; j<4; j++){
//            cout<<"J :"<<j<<endl;
            if(i==j){
                cout<<a[i-1]<< "\t";
            }
            else{
                cout<<"0"<<"\t";
            }
        }
        cout<<endl;
    }
}

int main(){
    
    int a[10];
    Set(a, 1, 1, 3);
    Set(a, 2, 2, 4);
    Set(a, 3, 3, 5);
//    cout<<Get(a, 1, 1)<<Get(a, 2, 2)<<Get(a, 3, 3);Get(a, 1, 2);
    Display(a);
    
    return 0;
}
