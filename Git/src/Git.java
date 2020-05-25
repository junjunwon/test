import java.io.*;
public class Git {	
	
	//====================================
	//change the code for testing git connection
	public static void main(String[]args){
		BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
		
		
		for(int i=0; i<10 ;i++){
			if(i==0 || i==4){
				continue;
			}
			System.out.println(i);
		}
	}
}
