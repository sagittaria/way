package ch03;

public class RunnableDemo {
	public static void main(String... args){
		Runnable task = new HelloTask();
		Thread thread = new Thread(task);		
		Runnable task2 = new HelloTask2();
		Thread thread2 = new Thread(task2);	
		
		thread.start();
		thread2.start();
		System.out.println("biu biu biu ---乱--入--->会发现并不是按2:1次序输出，而且线程“启动”好像还蛮花时间的");
	}
}

class HelloTask implements Runnable{
	public void run(){
		for(int i=0;i<20;i++){
			System.out.println("-----------");
			try {
				Thread.sleep(400);
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
		}
	}
}

class HelloTask2 implements Runnable{
	public void run(){
		for(int i=0;i<10;i++){
			System.out.println("00000");
			try {
				Thread.sleep(800);
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
		}
	}
}