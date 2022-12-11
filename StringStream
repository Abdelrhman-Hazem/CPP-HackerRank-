#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> vect;
    int num=0,i=0;
    int sign=1;
    if(str[i]=='-'){
        sign=-1;
        i++;
    }
    vect.push_back(sign*(str[i++]-48));
    //printf("%d\n",vect[num]);
    
    while (str[i]!='\0'){
        if(str[i]!=',')vect[num]=vect[num]*10+(str[i++]-48)*sign;
        else{
            i++;
            if(str[i]=='-'){
                sign=-1;
                i++;
            }else sign=1;
            num++;
            vect.push_back(sign*(str[i++]-48));
        }
        //printf("%d\n",vect[num]);
    }
    
    return vect;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
