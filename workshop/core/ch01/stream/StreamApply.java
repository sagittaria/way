package stream;//流的应用

import java.io.*;
import java.net.*;

public class StreamApply {
	public static void main(String[] args) {
		try {
			Socket socket = new Socket(InetAddress.getByName("localhost"), 1024);
			//下载了windows版的netcat，用 nc -l -p 1024开始监听
			PrintWriter out = new PrintWriter(
					new BufferedWriter(
							new OutputStreamWriter(
									socket.getOutputStream())));//看下这里，过滤器是这么加的！
			out.println("Hello!");//console里可以看到显示出了Hello！
			
			out.flush();//<----如果没有这句，由于“Hello!”始终还在缓冲区里头，所以会先看到bye再看到Hello!
			
			BufferedReader in = new BufferedReader(
					new InputStreamReader(
							socket.getInputStream()));//看看过滤器的顺序
			String line = in.readLine();
			System.out.println(line);//会打印出我在console里输入的“bye”
			in.close();
			
			out.close();
			socket.close();
		} catch (UnknownHostException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}

	}
}
