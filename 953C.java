
import java.util.Scanner;

public class main {
	public static void main(String[] args) {
		int n, temp;
		Scanner input=new Scanner(System.in);
		
	    n = input.nextInt();
	    int strip = 1, preStrip = -1, preColor;
	    preColor= input.nextInt();
	    for (int i = 1; i < n; ++i) {
	        temp = input.nextInt();
	        if (temp == preColor) {
	            strip++;
	        } else {
	            if (preStrip != -1 && preStrip != strip) {
	                System.out.println("NO");
	                return;
	            }
	            preStrip = strip;
	            strip = 1;
	        }
	        preColor = temp;
	    }
	    if (preStrip != -1 && preStrip != strip) {
	    	System.out.println("NO");
	        return;
	    }
	    System.out.println("YES");
	    return ;
	}
}
