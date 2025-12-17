#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Solution{
    public:
    int romanToInt(string s){
        std::map<char,int> maping;
        maping['I']=1;
        maping['V']=5;
        maping['X']=10;
        maping['L']=50;
        maping['C']=100;
        maping['D']=500;
        maping['M']=1000;
        int length=s.size();
        int romanint=0;
        for (int i=(length-1);i>=0;i--){
            char letter1= s[i];           
            char letter2= s[i-1];           
            romanint=(maping[letter1])+romanint;
            if(maping[letter1]>maping[letter2]){
                romanint=romanint-maping[letter2];
                i--;
            }
        }
        return romanint;

    }

};

int main(){
    Solution s;
    string roman="MCMXCIV";
    cout << s.romanToInt(roman);
}