#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
int a[7]={0,1,1,1,0,0,1};
int len = 7;
int answer=0;
for(int i=0,j=len-1;i<j;i++,j--){
    while(i<j&&a[i]==0){i++;}
    while(i<j&&a[j]==1){j--;}
    if(i<j)
        answer++;
}
cout<<answer<<endl;
}
