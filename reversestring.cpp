#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<"Enter the string you want to reverse: ";
string s;
cin>>s;
reverse(s.begin(),s.end());
cout<<"Reversed string is: ";
cout<<s<<endl;
return 0;
}
