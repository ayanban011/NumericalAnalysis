#include<iostream>  //Header file for cin & cout
#include<cmath>  //Header file for mathematical operartions

using namespace std;  //calling the standard directory

//Taking a function f(x)
float f(float(x))
{
    return (pow(x,3)+pow(x,2)-(4*x)-5);
}

//Taking diffrentiation of f(x) i.e. g(x)
float g(float(x))
{
    return (3*pow(x,2)+2*x-4);
}

//Taking double diffrentiation of f(x) i.e. h(x)
float h(float(x))
{
    return (6*x+4);
}

int main()  //Main Program
{
    int i;
    float a,b,d,n,I=0,J=0,A,K=0,E=0;
    cout<<" Given f(x)= x^3 + 2x^2 - 4x - 5 "<<endl;
    cout<<"Enter lower limit "<<endl;
    cin>>a;
    cout<<"Enter Upper Limit "<<endl;
    cin>>b;
    cout<<"Enter the number of intervals : "<<endl;
    cin>>n;
    d=(b-a)/n;


    //Steps of solving by Simpson's 3/8-Rule
    for(i=1;i<n;i++)
    {
        I=I+f(a+(i*d));
    }

    for(i=3;i<n-1;i++)
    {
        if((i%3)==0)
        {
            J=J+f(a+(i*d));
        }
    }

    A=3*(d/8)*(f(a)+(3*I)-J+f(b));

    //Printing the value of Integral
    cout<<"The Value of integral under the enterd limits is : "<<endl;
    cout<<A<<endl;

    //Calculation of Error
    E = -(d*d*d*d*d*6*3/80);

    //Printingn the Totoal Error
    cout<<"The Total Error is : "<<endl;
    cout<<E<<endl;

    return 0;
}
