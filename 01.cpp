#include<iostream>
#include <cmath>
using namespace std;
void delta(float a,float b,float c){
int d=b*b-4*a*c;
if(d<0){
    cout<<"Phuong trinh vo nghiem\n";
}
if(d>0){
    int x1=-b+sqrt(d)/2*a;
    int x2=-b-sqrt(d)/2*a;
    cout<<"Phuong trinh co 2 nghiem :\n";cout<<"x1: "<<x1<<endl;cout<<"x2: "<<x1<<endl;
}
if(d=0){
    cout<<"Phuong trinh co nghiem kep: x1=x2= "<<-b/2*a<<endl;
}
}
int main(){
    float a,b,c;
    cout<<"Chuong trinh tim nghiem phuong trinh bac 2:\n";
    cout<<"He so a: ";
    cin>>a;
    cout<<"He so b: ";
    cin>>b;
    cout<<"He so c: ";
    cin>>c;
    delta(a,b,c);
    return 0;

    
}