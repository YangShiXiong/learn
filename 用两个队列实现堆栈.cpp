#include<iostream>
#include<queue>
using namespace std;
class Solution{
public:
    int achieve(queue<int>& q1,queue<int>& q2,int x){
        //给定一个空的队列和一个非空的队列，相当于入栈
        if(!q1.empty()){
            q1.push(x);
        }
        q2.push(x);
        //判断是否为空，是就对其他队列进行出队，留的最后一个元素就是出栈的
        if(!q1.empty()){
            while(q1.size()>1){
                q2.push(q1.front());
                q1.pop();
            }
            int a=q1.front();
            q1.pop();
           cout<<a<<endl;
        }
        else{
            while(q2.size()>1){
                q1.push(q2.front());
                q2.pop();
            }
            int a=q2.front();
            q2.pop();
            cout<<a<<endl;

        }

    }
};
int main(){
    Solution p;
    queue<int> q1;
    queue<int> q2;
    p.achieve(q1,q2,2);
}
