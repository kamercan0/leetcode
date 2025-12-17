#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
     bool isPalindrom(int x){
        long int rev=0;
        int num = x;
        if(x<0){ 
            return  false;            
        }
        else{
            while(x!=0){
                rev=rev*10 + (x%10);
                x = x/10;
            }
            return (rev==num);                        
        }                
     }
};

int main(){
    Solution s;
    int x=64546;
    bool res =s.isPalindrom(x);
    cout << res;
}