#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int number=0;//记录b的个数
    int n=0;
    for(int i=0;i<s.length();i++){
        if(s[i]!='a'){s[n++]=s[i];}//删除a
        if(s[i]=='b'){number++;}//记录b
    }
    s[n]=0;//用于区分前后两个部分

    int newlength=number+n;//新的数组长度
    s[newlength]=0;//用于区分前后两个部分
    for(int i=newlength-1,j=n-1;j>=0;--j){
        s[i--]=s[j];//保存原来的字符
        if(s[j]=='b'){s[i--]='b';}
    }
    cout<<s;

}
