package lambda;

import java.time.LocalDate;

import lambda.Person.Sex;

public class Person {

	public enum Sex {
		MALE, FEMALE
	}

	String name;
	LocalDate birthday;
	Sex gender;
	String emailAddress;

	public Person(){}
	
	public Person(String name, LocalDate birthday, Sex gender, String emailAddress){
		this.name=name;
		this.birthday=birthday;
		this.gender=gender;
		this.emailAddress=emailAddress;
	}
	
	public int getAge() {
		int age = LocalDate.now().getYear()-birthday.getYear();
		return age;
	}
	
	public Sex getGender() {
		return gender;
	}
	
	public String getEmailAddress(){
		return emailAddress;
	}

	public void printPerson() {
		System.out.println(name+", "+birthday+"("+getAge()+")"+", "+gender+", "+emailAddress);
	}
	
	public static void main(String[] args){
		Person testPerson = new Person();
		testPerson.name="Aha";
		testPerson.birthday = LocalDate.of(1991, 11, 4);
		testPerson.gender=Sex.MALE;
		testPerson.emailAddress="aha@163.com";
		testPerson.printPerson();
	}
	
}