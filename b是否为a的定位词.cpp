#include<iostream>
#include<vector>
using namespace std;
int main(){
    string a,b;
    cin>>a;
    vector<int> num(26,0);
    cin>>b;
    int nonZero=0;
    for(int i=0;i<b.length();i++){
        if(++num[b[i]-'a']==1){++nonZero;}//��¼a����ĸ���ִ������������,����������Ĵ����жϱȽϡ�
    }

    //��һ�λ�������
    for(int i=0;i<b.length();i++){
        int c=a[i]-'a';
        --num[c];
        if(num[c]==0) --nonZero;
        if(num[c]==-1) ++nonZero;
    }
    if(nonZero==0)
        cout<<"OK"<<endl;

    //��i+1�λ�������
    for(int i=b.length();i<a.length();i++){
        int c=a[i-b.length()]-'a';
        ++num[c];
        if(num[c]==1) ++nonZero;
        if(num[c]==0) --nonZero;

        c=a[i]-'a';
        --num[c];
        if(num[c]==0) --nonZero;
        if(num[c]==-1) ++nonZero;

        if(nonZero==0)
            cout<<"OK"<<endl;
    }
    if(nonZero!=0)
    cout<<"NO"<<endl;
}
