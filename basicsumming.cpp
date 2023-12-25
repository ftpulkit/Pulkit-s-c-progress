//When i personally started the c++, i remember this was the first code I felt a coder 😂, you too understand to learn on compiler like visual studio , if unable to install it, use online c++ compiler, it will definetely work.

Sum:
// Sum and global sum:
#include <iostream>
using namespace std;
// This is a single line comment.

/* this is a multi 
line
comment*/
int c=10; int d=1;
int main() {
    int a,b,c,d;
    
    cout<<" Enter a:" <<endl;
    cin>>a;
    cout<<"Enter b" <<endl;
    cin>>b;
    c=a+b;
    cout<<"The sum is "<<c;
    cout<<"The global c is "<<::c;
    return 0;
}
