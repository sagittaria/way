
public class ExerciseCh04 {
	public enum DoneEx{I, II};//已做
	public static void main(String[] args){
		for(DoneEx d : DoneEx.values()){
			System.out.println(d+" is done.");
		}
	}
}
