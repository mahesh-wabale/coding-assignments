//StringTokenizer 

import java.io.*; 

class inputoutput
{ 
   public static void main(String argc[]) throws IOException { //entry point function
   
   BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
   int num1 = Integer.parseInt(br.readLine());
   System.out.println("Num1 =" + num1);

   int num2 = Integer.parseInt(br.readLine());
   System.out.println("Num2 =" + num2);
   
   int addition = num1 + num2 ; 

   System.out.println("Addition " + " = " + addition);
}
}