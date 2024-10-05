//add required header files 
#include<iostream>
using namespace std;

//create class 
class A {   //Base class
public:
int no;

A(){
    no=20;
}

void fun() { 
cout<<"inside fun"<<endl;
}

void gun();
};

void A::gun()
{
cout<<"inside gun"<<endl;
}

class B : public A { 
public :
int bno; 
B() {
  no=20;
  bno=30;
}

void bfun(){ 
    cout<<"inside class C bfun"<<endl;
}

};


class C : public B { 
public :
int cno; 
C() {
  no=20;
  cno=30;
  bno=40;
}
void cfun(){ 
    cout<<"inside class C cfun"<<endl;
}
};


class D : public C { 
public :
int dno; 
D() {
  no=20;
  cno=30;
  bno=40;
  dno=60;
}
void dfun(){ 
    cout<<"inside class D dfun"<<endl;
}
};
//entry point function 
int main() { 
    cout<<"inside main"<<endl;
    A aobj;
    aobj.no=1;
    aobj.fun();
    aobj.gun();
    //aobj.bfun(); => not allowed 

    B bobj;
    bobj.no=10;
    bobj.bno=11;
    bobj.fun();
    bobj.gun();
    bobj.bfun();
    
   // bobj.cno=90;

    C cobj;
    cobj.cno=100;

    D dobj;
    dobj.cno=90;

    return 0;
}