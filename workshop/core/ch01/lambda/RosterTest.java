package lambda;

import java.time.LocalDate;
import java.util.ArrayList;
import java.util.List;
import java.util.function.Consumer;
import java.util.function.Function;

import lambda.Person.Sex;

public class RosterTest {
//	interface CheckPerson{
//		boolean test(Person p);
//	}
	interface Predicate<Person> {
		boolean test(Person t);
	}
	
	public static void main(String[] args) {
		ArrayList<Person> lp = new ArrayList<Person>();
		for (int i = 0; i < 30; i++) {
			String name = "heiheihei" + i;
			LocalDate birthday = LocalDate.of(1985 + i,
					(int) (1 + Math.random() * 12),
					(int) (1 + Math.random() * 28));
			Sex gender = Math.random() >= 0.5 ? Sex.MALE : Sex.FEMALE;
			String emailAddress = "hhh@" + i + ".com";
			Person tempPerson = new Person(name, birthday, gender, emailAddress);
			lp.add(tempPerson);
		}

//		printPersonsOlderThan(lp, 25);//---------------------方法1
		
//		printPersonsWithinAgeRange(lp, 22, 26);//---------------------方法2
		
//		class CheckPersonEligibleForSelectiveService implements CheckPerson{
//			public boolean test(Person p){
//	            return p.getGender() == Person.Sex.FEMALE
//	                    && p.getAge() >= 18
//	                    && p.getAge() <= 25;
//			}
//		}
//		System.out.println("Persons who are eligible for Selective Service:");
//		printPersons(lp, new CheckPersonEligibleForSelectiveService());//---------------------方法3
		
//		System.out.println("Persons who are eligible for Selective Service " + "(anonymous class):");
//		printPersons(lp, new CheckPerson() {
//			public boolean test(Person p) {
//				return p.getGender() == Person.Sex.MALE
//						&& p.getAge() >= 18
//						&& p.getAge() <= 25;
//			}
//		});//---------------------方法4
		
//		printPersons(
//			lp,
//			(Person p) -> p.getGender() == Person.Sex.MALE
//				&& p.getAge() >= 18
//				&& p.getAge() <= 25
//		);//---------------------方法5
		
//		printPersonsWithPredicate(
//			lp,
//			p -> p.getGender() == Person.Sex.MALE
//				 && p.getAge() >= 18
//				 && p.getAge() <= 25
//		);//---------------------方法6，同5
		
//		processPersons(
//		     lp,
//		     p -> p.getGender() == Person.Sex.MALE
//		         && p.getAge() >= 18
//		         && p.getAge() <= 25,
//		     p -> p.printPerson()
//		);//方法7.1
		
//		processPersonsWithFunction(lp, p -> p.getGender() == Person.Sex.MALE
//				&& p.getAge() >= 18 && p.getAge() <= 25,
//				p -> p.getEmailAddress(), email -> System.out.println(email));//方法7.2
	}

//	public static void printPersonsOlderThan(List<Person> roster, int age) {
//		for (Person p : roster) {
//			if (p.getAge() >= age) {
//				p.printPerson();
//			}
//		}
//	}//方法1用到

//	public static void printPersonsWithinAgeRange(List<Person> roster, int low,	int high) {
//		for (Person p : roster) {
//			if (low <= p.getAge() && p.getAge() < high) {
//				p.printPerson();
//			}
//		}
//	}//方法2用到

//	public static void printPersons(List<Person> roster, CheckPerson tester) {
//		for (Person p : roster) {
//			if (tester.test(p)) {
//				p.printPerson();
//			}
//		}
//	}//方法3，4，5用到
	
//	public static void printPersonsWithPredicate(List<Person> roster,
//			Predicate<Person> tester) {
//		for (Person p : roster) {
//			if (tester.test(p)) {
//				p.printPerson();
//			}
//		}
//	}//方法6用到
	
//	public static void processPersons(List<Person> roster,
//			Predicate<Person> tester, Consumer<Person> block) {
//		for (Person p : roster) {
//			if (tester.test(p)) {
//				block.accept(p);
//			}
//		}
//	}// 方法7.1用到
	
//	public static void processPersonsWithFunction(List<Person> roster,
//			Predicate<Person> tester, Function<Person, String> mapper,
//			Consumer<String> block) {
//		for (Person p : roster) {
//			if (tester.test(p)) {
//				String data = mapper.apply(p);
//				block.accept(data);
//			}
//		}
//	}//方法7.2用到
}
