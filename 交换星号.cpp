#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0,j=0;j<s.length();j++){
        if(s[j]=='*')
            swap(s[i++],s[j]);
    }
    cout<<s<<endl;
}
