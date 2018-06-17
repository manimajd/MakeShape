
public class Shape1_C {//structured with redundancy

	public static void main(String[] args) {
		hat();
		egg();
		stopSign();
		eggPlus();
		cup();
		inverthat();

	}
	
	public static void top(){
		
		System.out.println("  ______");
		System.out.println(" /      \\");
		System.out.println("/        \\");
	}
	
	public static void buttom(){
		
		System.out.println("\\        /");		
		System.out.println(" \\______/");
	}
	
	public static void plusLine(){
		System.out.println("+--------+");
	}
	
	public static void stopLine(){
		System.out.println("|  STOP  |");;
	}
	
	public static void hat(){
		top();
		plusLine();
		System.out.println();
	}
	
	public static void egg(){
		top();
		buttom();
		System.out.println();
	}
	
	public static void stopSign(){
		top();
		stopLine();
		buttom();
		System.out.println();
	}
	
	public static void eggPlus(){
		top();
		plusLine();
		buttom();
		System.out.println();
	}
	
	public static void cup(){
		buttom();
		plusLine();
		System.out.println();
	}
	
	public static void inverthat(){
		plusLine();
		buttom();
	}

}
