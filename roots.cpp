// Calculate and print roots of a quadractic equation ax^2 + bx + c = 0 (a ≠ 0)

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c,root1,root2,delta;
    cout<<"Enter three numbers a,b & c of "<<" ax^2 +bx + c :\n";
    cin>>a>>b>>c;
    if(!a)          //if a is zero
       cout<<"Value of \'a'\' should not be zero"<<"\n Aborting !!!!!"<<"\n";
    else{
        delta=b*b-4*a*c; //beginning of else's body
        if(delta>0){
            root1=(-b+sqrt(delta))/(2*a);
            root2=(-b-sqrt(delta))/(2*a);
            cout<<"Roots are Real and UNEQUAL"<<"\n";
            cout<<"Root1 = "<<root1<<endl<<"Root2 = "<<root2<<"\n";

        }
        else if(delta==0){
            root1=-b/(2*a);
            cout<<"Roots are REAL and EQUAL"<<endl;
            cout<<"Root1 = "<<root1<<endl<<"Root2 = "<<root2<<"\n";

        }
        else{
            cout<<"Roots are COMPLEX and IMAGINARY"<<endl;
        }   //end of else's body.
    }   
    return 0;
}