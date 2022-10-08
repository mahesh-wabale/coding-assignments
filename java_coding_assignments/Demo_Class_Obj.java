//import java.lang.*;  //default package

class Demo {  //characteristics + behaviours
//public : //access specifiers
//int iNo; //data members
private int iNo;

Demo() {   //constructor 
    iNo = 20;
}

public void fun() { 
    System.out.printf("value of iNo = %d\n",iNo);
    System.out.println("Inside Demo Class and inside fun function");
}

public void fun2() { 
    System.out.println("Inside Demo Class and inside fun2 function");
} 

} 

class Demo_Class_Obj {  
 public static void main(String argc[]) { //entry point function
 //create an object 
 Demo dobj = new Demo();
 //dobj.iNo=10;
 //System.out.printf("value of iNo %d \n",dobj.iNo);
 dobj.fun();
 dobj.fun2();
 System.out.println("Inside MyClass");
 }
}