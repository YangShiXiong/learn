#include<iostream>
#include<stack>
using namespace std;
class Solution{
public:
    //���η�ת���ڲ���ת
    int Achieve(stack<int>& s1,stack<int>& s2){
        //��ʼ��Ԫ��2,1
        s1.push(1);
        s1.push(2);//����s1ջ�У���תһ��
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());//����s2���ٷ�תһ��
                s1.pop();
            }
        }
        //������
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
