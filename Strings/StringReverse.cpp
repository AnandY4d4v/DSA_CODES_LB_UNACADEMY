#include<iostream>
using namespace std;
string reverseWord(string str){
    int s=0;
    int e=str.length()-1;
    while (s<=e)
{
    swap(str[s],str[e]);
    s++;
    e--;
}  
return str;
}
int main(){
    string str="Geeks";
    //cout<<str[0];
    //cout<<str.length();
    cout<<reverseWord(str);
    return 0;
}