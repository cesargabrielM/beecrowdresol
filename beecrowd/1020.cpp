#include <iostream>
using namespace std;
int main(){
    // 1 ano = 365 dias, 1 mes = 30 dias
    int d, ano, mes, dr;

    cin>>d;

    ano = d/365;
    mes = (d%365)/30;
    dr = (d%365)%30;

    cout<<ano<<" ano(s)"<<endl<<mes<<" mes(es)"<<endl<<dr<<" dia(s)"<<endl;

    
    

    return 0;
}