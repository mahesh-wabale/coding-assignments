
/********************************************************
*
*	This program demonstrate that string class is immutable
* 		the String class gives you no method to change a character in existing String.
*
*
********************************************************/
class StringDemo{
	public static void main(String args[])
	{
		String s1 = "hello"; //String create 1
		//String s2 = "hello"; //String create 1
		
		String s2 = new String("hello234"); //String create 1
		
		if(s1.equals(s2)) { 
        System.out.println("both string are equal");
		} else 
		{
        System.out.println("both string are not equal");
		}
		
	}
}

// == & equals method on string 
// == always check for reference id which is generated in memory 
// equals always check for content 