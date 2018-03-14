
import java.util.*;
public class test {
	static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
    	Exception a = new Exception("number is over than 12");
    	try {
			throw a;
		} catch (Exception e) {
			// TODO Auto-generated catch block
		  	print(1);
	    	print(2);
	    	print(3);
			System.err.println(e);
			print(e.getMessage());
			e.printStackTrace();
	    	print(6);
			print(e.toString());
		}
    	print("dasdd");
  
    }
    
static String scan()
{	
	String a=sc.nextLine();
	return a;
}
static void print(Object o)
{
	System.out.println(o);
}
}

/*
// output 
text
{
1
2
3
java.lang.Exception: number is over than 12
number is over than 12
java.lang.Exception: number is over than 12
6
	at test.main(test.java:6)
java.lang.Exception: number is over than 12
dasdd
}
*/