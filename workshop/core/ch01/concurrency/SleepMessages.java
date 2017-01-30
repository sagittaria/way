package concurrency;

public class SleepMessages {
	public static void main(String args[]) throws InterruptedException {
		String importantInfo[] = { "Mares eat oats", "Does eat oats",
				"Little lambs eat ivy", "A kid will eat ivy too" };

		for (int i = 0; i < importantInfo.length; i++) {
			// Pause for 2 seconds
			Thread.sleep(2000);
			// Print a message
			System.out.println(importantInfo[i]);
		}
	}
}