#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main() {
	// Complete the program
    char a[1025], b[1025];
    cin>>a>>b;
    int alen=strlen(a);
    int blen=strlen(b);
    char c[2050];
    int i;
    for(i=0;i<alen;i++){
        c[i]=a[i];
    }
    for(i=0;i<blen;i++){
        c[i+alen]=b[i];
    }
    c[i+alen]='\0';
    char temp;
    temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    cout<<alen<<" "<<blen<<endl;
    cout<<c<<endl;
    cout<<a<<" "<<b;
    return 0;
}
