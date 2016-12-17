package stream;//这个包是“流”，接在<mooc-java第8周-异常>之后

import java.io.*;

public class StreamDemo {
	public static void main(String[] args){
		System.out.println("hello, world!");
		
//		byte[] buffer = new byte[1024];
//		try {
//			int len = System.in.read(buffer);
//			String s = new String(buffer,0,len);
//			System.out.println("读到了"+len+"字节");// 为什么 “123汉字abc” 是14个字节呢呢呢呢呢？
//			System.out.println(s);// s本身含回车，println()又一个回车
//			System.out.println("s的长度是"+s.length());//为什么s的长度是10？不应该是8的吗？
//		} catch (IOException e) {
//			e.printStackTrace();
//		}//基本用法
		
//		byte[] buf = new byte[10];
//		for(int i=0;i<10;i++){
//			buf[i] = (byte)i;
//		}
//		try {
//			FileOutputStream out = new FileOutputStream("a.dat");
//			out.write(buf);
//			out.close();
//		} catch (FileNotFoundException e) {
//			e.printStackTrace();
//		} catch (IOException e) {
//			e.printStackTrace();
//		}//FileOutputStream的使用，会在项目目录下面生成a.dat，用十六进制文本编辑器可查看
		
//		try {
//			DataOutputStream out = new DataOutputStream(
//					new BufferedOutputStream(
//							new FileOutputStream("a.dat")));//过滤器：
//			int i = 123456;
//			out.writeInt(i);
//			out.close();
//			
//			DataInputStream in = new DataInputStream(
//					new BufferedInputStream(
//							new FileInputStream("a.dat")));//过滤器：
//			int j = in.readInt();
//			in.close();
//			System.out.println(j);
//		} catch (FileNotFoundException e) {
//			e.printStackTrace();
//		} catch (IOException e) {
//			e.printStackTrace();
//		}//流过滤器
		
//		try {
//			PrintWriter out = new PrintWriter(
//					new BufferedWriter(
//						new OutputStreamWriter(
//							new FileOutputStream("a.txt"))));
//			int i = 123456;
//			out.println(i);
//			out.close();
//			
//			//再玩玩Reader
//			BufferedReader in = new BufferedReader(
//					new InputStreamReader(
//							new FileInputStream("ch01\\cell\\Cell.java")));
//			String line;
//			while((line = in.readLine())!=null){//in.readLine()读到文件末尾时返回null
//				System.out.println(line);//于是读到了Cell.java文件里的文本内容
//			}
//		} catch (FileNotFoundException e) {
//			e.printStackTrace();
//		} catch (IOException e) {
//			e.printStackTrace();
//		}//直接打开a.txt，里面写着 123456，长度是8，行数为2，我猜测\n和\r各算一个字节，所以总长8字节
		
		try {
			BufferedReader in = new BufferedReader(
					new InputStreamReader(
							new FileInputStream("gb2312.txt"),"gb2312"));
				            //new FileInputStream("utf8.txt"))); //正常
				            //new FileInputStream("gb2312.txt"))); //乱码
				            //new FileInputStream("gb2312.txt"), "gb2312")); //正常
			String line;
			while((line = in.readLine())!=null){//in.readLine()读到文件末尾时返回null
				System.out.println(line);//于是读到了Cell.java文件里的文本内容
			}
			in.close();
		} catch (FileNotFoundException e) {
			e.printStackTrace();
		} catch (IOException e) {
			e.printStackTrace();
		}//汉字编码问题
	}
}
