import java.util.Arrays;
import java.util.Comparator;

public class LengthComparator implements Comparator<String>{

	@Override
	public int compare(String first, String second){
		return first.length()-second.length();
	}
	
	public static void main(String[] args ){
		String[] names = {"nikita","amy","mike","percy"};
		System.out.println(Arrays.toString(names));//原顺序
		
		Arrays.sort(names);
		System.out.println(Arrays.toString(names));//默认排序--按字典顺序
		
		Arrays.sort(names, new LengthComparator());// 这里一定要 import java.util.Comparator; 否则说sort参数类型不匹配
		System.out.println(Arrays.toString(names));//按长度排序
		
		Arrays.sort(names, (String first, String second) -> first.length()-second.length());
		System.out.println(Arrays.toString(names));//使用--Lambda表达式--实现按字符串长度排序
	}
}
