#include <iostream>
using namespace std;

int main(){
// podem ser brancas quando:
//num iguais, imp com imp, par com par.
    int L,C;
    cin>>L>>C;
    
    if(L == C){
        cout<<1<<endl;
    }
    else if(L%2==0 || C%2==0){
        cout<<1<<endl;
    }
    else if (L%2!=0 || C%2!=0){
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }
    

    return 0;
}