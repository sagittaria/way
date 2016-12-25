/*
Given an arbitrary ransom note string and another string containing letters from all the magazines, write a function that will return true if the ransom note can be constructed from the magazines ; otherwise, it will return false.

Each letter in the magazine string can only be used once in your ransom note.

Note:
You may assume that both strings contain only lowercase letters.

canConstruct("a", "b") -> false
canConstruct("aa", "ab") -> false
canConstruct("aa", "aab") -> true

如果能从magazine里取得足够的材料来构建出ransomNote，返回true，否则False
*/

public class leetcode383 {
	public static void main(String... args) {
		System.out.println(canConstruct("a", "b"));
		System.out.println(canConstruct("aa", "ab"));
		System.out.println(canConstruct("aa", "aab"));
	}

	public static boolean canConstruct(String ransomNote, String magazine) {
		
		int[] m = new int[26];//开个数组，记录magazine里的字符
		for(int i=0;i<magazine.length();i++){
			int tmp_m = magazine.charAt(i)-'a';
			m[tmp_m]++;//计数每个字符出现了几次
		}
		for(int j=0;j<ransomNote.length();j++){
			int tmp_r = ransomNote.charAt(j)-'a';
			m[tmp_r]--;//在组ransomNote时，从magazine里每拿出一个就从数组m里减少一个
			if(m[tmp_r]==-1){//如果减出来有负数的，说明magazine里“不够用”，返回False
				return false;
			}
		}
		
		return true;
	}
}