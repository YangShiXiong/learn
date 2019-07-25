#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Solution{
public:
    int isPossible(vector<int>&in,vector<int>&out){
        stack<int> s;
        for(int i=0,j=0;i<out.size();j++){
            while(s.empty()||s.top()!=out[j]){
                if(i>in.size()){
                    return false;
                }
                s.push(in[i++]);
            }
            s.pop();
        }
        return true;
    }

};
int main(){
  int n;
    cin>>n;
    vector<int> in;
    vector<int> out;
    for(int i=0;i<n;i++){
        int b;
        cin>>b;
        in.push_back(b);
    }
    for(int i=0;i<n;i++){
        int b;
        cin>>b;
        out.push_back(b);
    }

    Solution p;
    cout<<p.isPossible(in,out)<<endl;
}
