#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

template <class T>
void Merge(T* total, T* dataR, int sizeR, T* dataL, int sizeL){
    int indexTot=0, indexR=0, indexL=0;
    while ( indexR < sizeR && indexL < sizeL){
        if(dataR[indexR] < dataL[indexL])total[indexTot++]=dataR[indexR++];
        else total[indexTot++]=dataL[indexL++];
    }
    while (indexR < sizeR)total[indexTot++]=dataR[indexR++];
    while (indexL < sizeL)total[indexTot++]=dataL[indexL++];

}

template <class T>
void MergeSort(T * data, int size){
    if (size<2) return;
    int mid=size/2;
    T * left = new T[mid];
    T * right = new T[size-mid];
    for(int i=0;i<mid;i++)left[i]=data[i];
    for(int i=mid;i<size;i++)right[i-mid]=data[i];

    MergeSort(left,mid);
    MergeSort(right,size-mid);
    Merge(data,left,mid,right,size-mid);
    delete [] left;
    delete [] right;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int size;
    cin>>size;
    int * arr=new int[size];
    for (int i=0;i<size;i++)cin>>arr[i];
    MergeSort(arr, size);
    for (int i=0;i<size;i++)cout<<arr[i]<<" "; 
    return 0;
}
