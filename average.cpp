#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the quantity of numbers: ";
    int n;
    cin>>n;
    cout<<"Enter the numbers"<<endl;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int t=accumulate(arr.begin(),arr.end(),0);
    cout<<"Average of provided numbers are: "<<(t*1.0)/n<<endl;
}
