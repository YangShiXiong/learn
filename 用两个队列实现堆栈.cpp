#include<iostream>
#include<queue>
using namespace std;
class Solution{
public:
    int achieve(queue<int>& q1,queue<int>& q2,int x){
        //����һ���յĶ��к�һ���ǿյĶ��У��൱����ջ
        if(!q1.empty()){
            q1.push(x);
        }
        q2.push(x);
        //�ж��Ƿ�Ϊ�գ��ǾͶ��������н��г��ӣ��������һ��Ԫ�ؾ��ǳ�ջ��
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
