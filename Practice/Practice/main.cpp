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





//
///*   Diagonal Matrix   */
//void Set(int a[], int i, int j, int x){
//    if(i==j){
//        a[i-1]=x;
//    }
//};
//
//int Get(int a[], int i, int j){
//    if(i==j){
//        return a[i-1];
//    }
//    return 0;
//};
//
//void Display(int a[]){
//    for(int i=1; i<4; i++){
//        for(int j=1; j<4; j++){
//            if(i==j){
//                cout<<a[i-1]<<"\t";
//            }
//            else{
//                cout<<"0"<<"\t";
//            }
//        }
//        cout<<endl;
//    }
//}
//
//int main(){
//
//    int a[10];
//    Set(a, 1, 1, 3);
//    Set(a, 2, 2, 4);
//    Set(a, 3, 3, 5);
//    Display(a);
//
//    return 0;
//}



void Display(int rotate[3][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<rotate[i][j]<<"\t";
        }
        cout<<endl;
    }
}


void RightRotation(int rotate[3][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
//            if(i==0){
                cout<<rotate[i][j-1]<<"\t";
//            }
        if(j-1<0){
                cout<<rotate[i+1][j]<<"\t";
            }
        }
        cout<<endl;
    }
}

int main(){
    int rotate[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//    Display(rotate);
    RightRotation(rotate);
    return 0;
}
