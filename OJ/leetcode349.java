import java.util.*;

public class leetcode349 {
    public static int[] intersection(int[] nums1, int[] nums2) {
        HashSet<Integer> n1 = new HashSet<>();
        HashSet<Integer> n2 = new HashSet<>();
        ArrayList<Integer> r = new ArrayList<>();

        for(int i = 0; i<nums1.length; i++){
            n1.add(nums1[i]);
        }
        for(int j = 0; j<nums2.length; j++ ){
            n2.add(nums2[j]);
        }
        Iterator<Integer> it = n1.iterator();
        while(it.hasNext()){
            Integer tmp = it.next();
            if(n2.contains(tmp)){
                r.add(tmp);
            }
        }
        int[] res = new int[r.size()];
        for(int k = 0; k<res.length; k++){
            res[k] = r.get(k);
        }
        return res;
    }

    public static void main(String[] args){
        int[] n1 = {1,2,2,1,3};
        int[] n2 = {2,2,2,3,5,6};
        int[] n3 = intersection(n1, n2);
        System.out.println(Arrays.toString(n3));
    }
}