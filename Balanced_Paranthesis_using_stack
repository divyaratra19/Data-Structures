// Java program for checking 
// balanced Parenthesis 
import java.util.*; 

public class BalancedParan { 

	// function to check if paranthesis are balanced 
	static boolean areParanthesisBalanced(String expr) 
	{ 
		// Using ArrayDeque is faster than using Stack class 
		Deque<Character> stack = new ArrayDeque<Character>(); 

		// Traversing the Expression 
		for (int i = 0; i < expr.length(); i++) { 
			char x = expr.charAt(i); 

			if (x == '(' || x == '[' || x == '{') { 
				// Push the element in the stack 
				stack.push(x); 
				continue; 
			} 

			// IF current current character is not opening 
			// bracket, then it must be closing. So stack 
			// cannot be empty at this point. 
			if (stack.isEmpty()) 
				return false; 

			switch (x) { 
			case ')': 
				stack.pop(); 
				if (x == '{' || x == '[') 
					return false; 
				break; 

			case '}': 
				stack.pop(); 
				if (x == '(' || x == '[') 
					return false; 
				break; 

			case ']': 
				stack.pop(); 
				if (x == '(' || x == '{') 
					return false; 
				break; 
			} 
		} 

		// Check Empty Stack 
		return (stack.isEmpty()); 
	} 

	/*driver program to test above functions*/
	public static void main(String[] args) 
	{ 
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t!=0){
		String expr=sc.next();
		if (areParanthesisBalanced(expr)) 
			System.out.println("balanced "); 
		else
			System.out.println("not balanced "); 
		--t;
		}
	} 
} 
