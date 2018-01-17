package studio0;

public class Heartbeat {
	public static void main (String[]args) {
		int x = 1;
		
		while (x > 0) {
			
			System.out.println(x + " seconds have passed");
			
			try {
				Thread.sleep(1000);
			} catch (InterruptedException e) {

				e.printStackTrace();
			}
			
			x += 1;
		}
		
	}
}
