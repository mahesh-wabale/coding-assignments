/* 
   THE FOLLOWING PROGRAM WILL ILLUSTRATES :
	   THE USE OF PUBLIC INHERITANCE =>
		i.e. the class which gets publically inherited from the base class...
*/

#include<iostream>
using namespace std;

// base class declaration goes from here...

class A
{
//	3 integers declared inside Base under the 3 access specifiers...
	public:
		int m_nPublic;

	private:
		int m_nPrivate;

	protected:
		int m_nProtected;
    public : 
	     A() { 
			m_nPublic = 1;
			m_nPrivate=2;
			m_nProtected=3; 
		 }

};

class B
{
//	3 integers declared inside Base under the 3 access specifiers...
	public:
		int m_nPublic_b;

	private:
		int m_nPrivate_b;

	protected:
		int m_nProtected_b;
    public : 
	     B() { 
			m_nPublic_b = 1;
			m_nPrivate_b=2;
			m_nProtected_b=3; 
		 }

};


class C: public A,public B //child class - single inheritance
{
// 	Public inheritance means:
// 	m_nPublic stays public
// 	m_nPrivate stays private
// 	m_nProtected stays protected

// 	ALL THE MEMBERS COME IN THE DERIVED CLASS WITH THE ACCESS SPECIFIER,
//		WHATEVER THEY HAVING IN THE BASE CLASS AT THE TIME OF DECLARATION...

    public : 
	int pub2;

	public:

		C()
		{
			// 	The derived class always uses the immediate parent's class access specifications
			// 	Thus, Pub uses Base's access specifiers...

			m_nPublic = 1;		// Allowed: anybody can access public members
            m_nPublic_b = 1;
			//m_nPrivate = 2;	// not Allowed : NOONE can access private members in the base class

			m_nProtected = 3;	// Allowed: derived classes can access protected members of immediate parent...
		}
};



int main()
{
/*
	Outside access uses the access specifiers of the class being accessed.
 	In this case, the access specifiers of cPub.  Because Pub has inherited publicly from Base,
	no access specifiers have been changed.
*/

// ******** APPLY THE CONCEPT OF TYPE OF INHERITANCE FOR THE DERIVED CLASS... ********

	return 0;
}
