#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
string s;
cin>>s;
int n=s.length();
int j=n-1;
for(int i=n-1;i>=0;i--){
    if(isdigit(s[i])){s[j--]=s[i];}//从后往前放数字，避免数字的顺序变乱
}
  for(;j>=0;j--)
    s[j]='*';//补全*号
cout<<s;
}
