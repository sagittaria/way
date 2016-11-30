public class ExerciseCh03{
    public static void main(String[] args) {
    	//1
    	Employee[] emps={new Employee("aaa",1000),new Employee("bbb",2000),new Employee("aaa",6000)};
    	double avg=average(emps);
    	System.out.println(avg);
    	System.out.println("--------EX01");
    }
    public static double average(Measurable[] objects){
		double sum=0;
		for(Measurable e : objects){
			sum+=e.getMeasure();
		}
		return objects.length==0 ? 0 : sum/objects.length;
	}
}
