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
    vector<int> arr(size);
    
    for (int i=0;i<size;i++)cin>>arr[i];
    
    int del;
    cin>>del;
    arr.erase(arr.begin()+del-1);
    int start, end;
    cin>>start>>end;
    arr.erase(arr.begin()+start-1,arr.begin()+end-1);
    
    cout<<arr.size()<<endl;
    for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";
    return 0;
}
