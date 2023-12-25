1. (sum) uploaded before notes provided
2. Area of any shape
3. Sqr root of an eqn
4. to create a string where 'if' is added to the front of a given string. If the string already begins with 'if', return the string unchanged.
5. to remove vowels from a word
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

//2. Area of anuy shape

#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int choice;
    float area;

    cout << "Choose a shape:" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cin >> choice;

    switch(choice) {
        case 1: {
            float radius;
            cout << "Enter radius of the circle: ";
            cin >> radius;
            area = M_PI * radius * radius;
            cout << "Area of the circle: " << area << endl;
            break;
        }
        case 2: {
            float length, breadth;
            cout << "Enter length and breadth of the rectangle: ";
            cin >> length >> breadth;
            area = length * breadth;
            cout << "Area of the rectangle: " << area << endl;
            break;
        }
        case 3: {
            float base, height;
            cout << "Enter base and height of the triangle: ";
            cin >> base >> height;
            area = 0.5 * base * height;
            cout << "Area of the triangle: " << area << endl;
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}


// Fnding sqr root:

//find one possible sqr root
#include <iostream>
#include<cmath>
using namespace std;

int main() {
  float a,b,c,r,s;
  cout<<"Coeff of a,b,c are?:";
  cin>>a>>b>>c;
  
  r= -b+ sqrt(b*b-4*a*c) ;
  s=r/2*a;
  cout<<s;
}
4. 

#include <iostream>
using namespace std;

string test(string s)
        {
            if (s.length() > 2 && s.substr(0, 2)=="if")
            {
                return s;
            }
            return "if " + s;
        }

int main() 
 {
  string entry;
  cin>>entry;
  cout << test(entry);
  return 0;    
}


// C++ Program to remove vowels from a word

#include<iostream>
using namespace std;

int main() {
    
    string str;
    cin >> str;

    string result = "";
    for (int i = 0; str[i] != '\0'; i++) {
        if (!(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||      //notice the "!"
              str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')) {
            result += str[i];
        }
    }

    cout << "String after removing vowels: " << result << endl;

    return 0;
}
