#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int number=0;//��¼b�ĸ���
    int n=0;
    for(int i=0;i<s.length();i++){
        if(s[i]!='a'){s[n++]=s[i];}//ɾ��a
        if(s[i]=='b'){number++;}//��¼b
    }
    s[n]=0;//��������ǰ����������

    int newlength=number+n;//�µ����鳤��
    s[newlength]=0;//��������ǰ����������
    for(int i=newlength-1,j=n-1;j>=0;--j){
        s[i--]=s[j];//����ԭ�����ַ�
        if(s[j]=='b'){s[i--]='b';}
    }
    cout<<s;

}
