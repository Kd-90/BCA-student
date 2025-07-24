#include <iostream> // For input/output
#include "calculator.h" // Include our custom header file
using namespace std;

int main() {
    char op;
    int a;
    int b;

    cout<<"enter an op(+,-,*,/):";
    cin>>a>b;

    switch (op){
       case'+':
           cout<<a<<"+"<<b<<"="<<a+b<<endl;
           break;

        case'-':
            cout<<a<<"-"<<b<<"="<<a-b<<endl;
            break;

        case'*':
            cout<<a<<"*"<<b<<"="<<a*b<<endl;
            break;

        case'/':
            cout<<a<<"/"<<b<<"="<<a/b<<endl;
            break;

        default:
            cout<<"invalid value"<<endl;
            break;
    }
    return 0;
}
