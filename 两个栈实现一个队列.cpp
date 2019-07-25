#include<iostream>
#include<stack>
using namespace std;
class Solution{
public:
    //两次反转等于不反转
    int Achieve(stack<int>& s1,stack<int>& s2){
        //初始化元素2,1
        s1.push(1);
        s1.push(2);//插入s1栈中，反转一次
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());//插入s2中再反转一次
                s1.pop();
            }
        }
        //输出结果
        for(int i=0;i<=s2.size();i++){
            int a=s2.top();
            s2.pop();
            cout<<a<<" ";
        }
    }
};
int main(){
    stack<int> s1;
    stack<int> s2;
    Solution p;
    p.Achieve(s1,s2);
}
