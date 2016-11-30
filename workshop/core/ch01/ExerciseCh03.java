public class ExerciseCh03{
    public static void main(String[] args) {
    	//1,2
    	Employee[] emps={new Employee("aaa",1000),new Employee("bbb",2000),new Employee("ccc",6000)};
    	double avg=average(emps);
    	System.out.println(avg);
    	System.out.println("--------EX01↑");
    	Employee e=(Employee)largest(emps);
    	System.out.println(e.getName());
    	System.out.println("--------EX02↑");
    }
    public static double average(Measurable[] objects){
		double sum=0;
		for(Measurable e : objects){
			sum+=e.getMeasure();
		}
		return objects.length==0 ? 0 : sum/objects.length;
	}
    public static Measurable largest(Measurable[] objects){
    	double maxSalary=0;
    	Measurable tmpE=null;
		for(Measurable e : objects){
			if(e.getMeasure()>maxSalary){
				maxSalary=e.getMeasure();
				tmpE=e;
			}
		}
		return tmpE;
    }
}
