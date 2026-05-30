// age: 0x7ffc3fc4a5dc
//salary: 0x7ffc3fc4a5d8
#include <iostream>
using namespace std;
int main() {
   int age=30;
   float sal=1500.50;
   cout<<"age: "<<&age<<endl;
   cout<<"salary: "<<&sal;
    return 0;
}

//30
//30
//0x7ffffa7adbbc
//0x7ffffa7adbb0
#include <iostream>
using namespace std;
int main() {
   int a=30;
   int *p1=&a;
   cout<<*p1<<endl;
   cout<<a<<endl;
   cout<<&a<<endl;
   cout<<&p1<<endl
   ;
    return 0;
}

//0x7ffd68d07b80
//0x7ffd68d07b8c
//0x7ffd68d07b78
//87
//0x7ffd68d07b8c
//0x7ffd68d07b80
#include <iostream>
using namespace std;
int main() {
   int a=87;
   int *p1=&a;
   int **q1=&p1;
   cout<<&p1<<endl;
   cout<<&a<<endl;
   cout<<&q1<<endl;
   cout<<*(&a)<<endl;
   cout<<*(&p1)<<endl;
   cout<<*(&q1)<<endl;
    return 0;
}
