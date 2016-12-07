import java.util.HashMap;

//慕课-翁恺java
public class Mooc {
	private HashMap<Integer, String> month = new HashMap<>();
	
	public Mooc(){
		month.put(1,"Jan");
		month.put(2,"Feb");
		month.put(3,"Mar");
		month.put(4,"si yue");
		month.put(4,"Apr");//因为键唯一，所以“Apr”会覆盖“si yue”
		System.out.println(month.keySet().size());//输出里面有几项
		for(Integer k : month.keySet()){
			System.out.println(month.get(k));
		}//HashMap的遍历
	}
	
	public String getMonthName(int n){
		if(month.containsKey(n))
			return month.get(n);
		else
			return "Not Found";
	}
	
	public static void main(String[] args){
		Mooc m = new Mooc();
		System.out.println("---------------");
		System.out.println(m.getMonthName(4));
		System.out.println(m.getMonthName(3));
		System.out.println(m.getMonthName(5));
		System.out.println(m.getMonthName(2));
		System.out.println(m.getMonthName(1));
		
		System.out.println("---------------");
		StringBuffer sb = new StringBuffer();
		sb.append("first");
		sb.append(" second");
		System.out.println(sb.toString());
	}
}
