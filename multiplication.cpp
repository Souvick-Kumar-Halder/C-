//multiplication table
#include<iostream>
using namespace std;
int main(){

int i,n;
cout<<"Enter the number:";
cin>>n;
for(i=1;i<=10;i=i+1){
    cout<<n<<"*"<<i<<"="<<n*i<<"\n";
}



    return 0;
}