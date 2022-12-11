#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q;
    cin>>n>>q;
    //char temp;
    //temp=getchar();
    int **arr=new int*[n];
    
    for(int i=0; i<n; i++){
        int size;
        cin>>size;
        arr[i]=new int[size];  
        for(int j=0;j<size;j++){
            cin>>arr[i][j];
        }
    }
    int ind, jnd;
    for(int i=0; i<q;i++){
        cin>>ind>>jnd;
        cout<<arr[ind][jnd]<<endl;
    }
    return 0;
}
