#include <iostream>
using namespace std;


int main() {
    //tamanho da array
    int x;
    cin>>x;
    //array
    int eita[100];
    int count=1, dif=0, dif1=0;

    //receber numero array
    for(int i=0; i<x; i++){

        cin>>eita[i];

    }

    for(int i=2; i<x; i++){
        // 1 1 1 3 5 4 8 12
        dif = eita[i] - eita[i-1]; //1 - 1 = 0 
        dif1 = eita[i-1] - eita[i-2];//1

        if(dif!=dif1){
            count++;
        } //1
        else continue;


    }

    cout<<count<<endl;
 
    return 0;
}