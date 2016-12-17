package stream;

import java.io.*;

//对象串行化，直接把一个student对象写到文件里，且以后还可以读回来

class Student implements Serializable{//可串行化的对象才能被写，须要实现Serializable
	private String name;
	private int age;
	private int grade;
	
	public Student(String name, int age, int grade){
		this.name=name;
		this.age=age;
		this.grade=grade;
	}
	
	public String toString(){
		return name+" "+age+" "+grade;
	}
}
public class Serialization {
	public static void main(String[] args){
		try{
			Student s1 = new Student("John",18,5);
			System.out.println(s1);
			
			//把对象写到文件里
			ObjectOutputStream out = new ObjectOutputStream(
					new FileOutputStream("obj.dat"));
			out.writeObject(s1);
			out.close();
			
			//读回来
			ObjectInputStream in = new ObjectInputStream(
					new FileInputStream("obj.dat"));
			Student s2 = (Student) in.readObject();//返回的是object，要cast一下
			System.out.println(s2);
			in.close();
			System.out.println(s1==s2);//false. s1和s2指向的是内容一样的【两个】对象
		} catch(Exception e){
			e.printStackTrace();
		}
	}
}
