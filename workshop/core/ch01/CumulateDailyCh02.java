import java.time.DayOfWeek;
import java.time.LocalDate;


public class CumulateDailyCh02 {
	public static void main(String[] args){
		LocalDate date = LocalDate.of(1991, 2, 5);
		System.out.println(date);
		System.out.println(date.plusDays(1));
		System.out.println(date.getDayOfWeek());
		System.out.println(date.getDayOfYear());
		System.out.println(date.getDayOfMonth());
		
		DayOfWeek weekday = date.getDayOfWeek();
		int value = weekday.getValue();
		System.out.println("周 "+value);		
		
		System.out.print("------Unix Cal------\n");
		LocalDate now = LocalDate.of(2016, 7, 20);//System.out.println(now);
		int firstDayInMonth = now.minusDays(now.getDayOfMonth()-1).getDayOfWeek().getValue();//一个月的第一天是星期几
		int lengthOfMonth = now.lengthOfMonth();
		//System.out.printf("firstDayInMonth=%d\n", firstDayInMonth);
		System.out.print("mon tue web thu fri sat sun\n");
		for(int j=0;j<((firstDayInMonth-1)%7);j++){
			System.out.print("    ");
		}
		for(int i=1; i<=lengthOfMonth;i++){
			System.out.printf("%3d ",i);
			if((i+firstDayInMonth-1)%7==0) System.out.println();
		}
	}

}
