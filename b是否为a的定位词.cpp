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
        if(++num[b[i]-'a']==1){++nonZero;}//记录a的字母出现次数，非零的数,用来给后面的窗口判断比较。
    }

    //第一次滑动窗口
    for(int i=0;i<b.length();i++){
        int c=a[i]-'a';
        --num[c];
        if(num[c]==0) --nonZero;
        if(num[c]==-1) ++nonZero;
    }
    if(nonZero==0)
        cout<<"OK"<<endl;

    //第i+1次滑动窗口
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
