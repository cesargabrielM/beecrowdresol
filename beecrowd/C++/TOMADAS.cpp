#include <iostream>

using namespace std;

int main(){

    int t[4], sum=0;

    for(int i =0; i<4;i++){
        cin>>t[i];
        
        sum+=(t[i] - 1);
    }
    sum +=1;


    cout<<sum<<endl;

}