#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
string s;
cin>>s;
int n=s.length();
int j=n-1;
for(int i=n-1;i>=0;i--){
    if(isdigit(s[i])){s[j--]=s[i];}//�Ӻ���ǰ�����֣��������ֵ�˳�����
}
  for(;j>=0;j--)
    s[j]='*';//��ȫ*��
cout<<s;
}
