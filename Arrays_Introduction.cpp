#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int size;
    cin>>size;
    int * arr=new int [size];
    for (int i=0; i<size ;i++)cin>>arr[i];
    for (int i=0;i<size;i++)cout<<arr[size-i-1]<<" ";
    return 0;
}
