/*
Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.

Examples:
s = "leetcode", return 0.
s = "loveleetcode", return 2.

Note: You may assume the string contain only lowercase letters.好像挺多新题目都是这个套路
*/
public class leetcode387 {
    public int firstUniqChar(String s) {
    	int[] all = new int[26];
    	for(int i=0;i<s.length();i++){
    		all[s.charAt(i)-'a']++;
    	}
    	for(int j=0;j<s.length();j++){
    		if(all[s.charAt(j)-'a']==1) return j;
    	}
    	
        return -1;
    }
    
    public static void main(String... args){
    	leetcode387 s = new leetcode387();
    	System.out.println(s.firstUniqChar("aaa"));
    	System.out.println(s.firstUniqChar("aaal"));
    	System.out.println(s.firstUniqChar("leetcode"));
    	System.out.println(s.firstUniqChar("loveleetcode"));
    }
}