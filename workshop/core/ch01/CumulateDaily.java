import java.util.*;

public class CumulateDaily{
  public static void main(String[] args) {

  }
}
    //multi-dimen. array
    //pascal triangle
    // int n=Integer.parseInt(args[0]);
    // int[][] triangle=new int[n][];
    // for(int i=0;i<n;i++){
    //     triangle[i]=new int[i+1];
    //     triangle[i][0]=1;
    //     triangle[i][i]=1;
    //     for(int j=1;j<i;j++){
    //         triangle[i][j]=triangle[i-1][j-1]+triangle[i-1][j];
    //     }
    // }
    // for(int[] row : triangle){// print multi-D arrays in a loop way
    //     for(int element:row){
    //         System.out.printf("%8d",element);
    //     }
    //     System.out.println();
    // }
    // System.out.println();
    // System.out.println(Arrays.deepToString(triangle));//deepToString print multi-D arrays

    //command line - input parameters
    // for(int i=0;i<args.length;i++){
    //     String arg=args[i];
    //     if(arg.equals("-h")) arg="Hello";
    //     else if(arg.equals("-g")) arg="Goodbye";
    //     System.out.println(arg);
    // }

    //more exciting things about arraylist
    // ArrayList<String> names=new ArrayList<>(Arrays.asList("bb","aa","cc","dd","ee","hh"));
    // System.out.println(names);//direct print out
    // Collections.reverse(names);//reverse, while array has no such method
    // System.out.println(names);
    // Collections.shuffle(names);//shuffle, while array has no such method
    // System.out.println(names);

    //operates on array and arraylist.
    // int[] nums={15,8,2,27,6,9};
    // ArrayList<String> names=new ArrayList<>(Arrays.asList("bb","aa","cc"));
    // Arrays.sort(nums);//array-->Arrays method
    // Collections.sort(names);//arraylist-->Collections method
    // System.out.println(Arrays.toString(nums));
    // for(String name : names){
    //     System.out.println(name);
    // }

    //copy array into arraylist
    // String[] names={"w.t.f.","f.t.w."};
    // ArrayList<String> friends=new ArrayList<>(Arrays.asList(names));
    // System.out.println(friends.get(0));
    // System.out.println(friends.get(1));

    //copy ArrayList
    // ArrayList<String> friends;
    // friends = new ArrayList<>();
    // friends.add("peter");
    // ArrayList<String> copiedFriends=new ArrayList<>(friends);
    // System.out.println(copiedFriends.get(0));

    //how to "copy" a array
    // int[] a={5,3,4,2,1};
    // int[] b=Arrays.copyOf(a,a.length);
    // int[] c=b;
    // System.out.println(Arrays.toString(a));
    // System.out.println(Arrays.toString(b));
    // b[0]=10;
    // System.out.println(Arrays.toString(a));
    // System.out.println(Arrays.toString(b));
    // System.out.println(Arrays.toString(c));

    // ArrayList<Integer> nums=new ArrayList<>();//only accept Object as parameter
    // nums.add(42);//automatically: int --> Integer
    // int first=nums.get(0);
    // System.out.println(first);

    // using ArrayList-------------------------------
    // ArrayList<String> friends;
    // friends = new ArrayList<>();
    // friends.add("peter");
    // friends.add("King");
    // for (int i=0; i<friends.size(); i++) {
    //     System.out.println(friends.get(i));
    // }
    // System.out.println("--------------------------");
    // friends.remove(1);
    // for (int i=0; i<friends.size(); i++) {
    //     System.out.println(friends.get(i));
    // }
    // System.out.println("--------------------------");
    // friends.add(0,"geek");
    // for (int i=0; i<friends.size(); i++) {
    //     System.out.println(friends.get(i));
    // }
    // System.out.println("--------------------------");
    // String first=friends.get(0);
    // friends.set(1,"Mary");
    // System.out.printf("now first is %s\n",first);
    // System.out.printf("now second is %s\n",friends.get(1));

    // Random gen = new Random();
    // int i=10;
    // while(i>0){
    //     System.out.println(gen.nextInt(10));
    //     i--;
    // }
    // Scanner in=new Scanner(System.in);
    // System.out.println("input your age:");
    // int age=in.nextInt();
    // System.out.printf("you are %d years old.\n",age);

    // float f=123456789;
    // System.out.println(f);//1.23456792E8

    // String greeting="Hello, world!";
    // String location=greeting.substring(7,12);
    // System.out.println(location);

    // String names="aaa, bbb, ccc";
    // String[] res=names.split(", ");
    // System.out.println(Arrays.toString(res));

    // if(location.equals("world")) //if location=null : NullPointerException
    //   System.out.println("true");

    // if("world".equals(location)) //works well even if location=null
    //   System.out.println("true");

    // String first="come";
    // String second="Amy";
    // System.out.println(first.compareTo(second));

    // int n=42;
    // String str=Integer.toString(n);
    // System.out.println(str);
    // str=Integer.toString(n,2);
    // System.out.println(str);
    // str=n+"";
    // System.out.println(str);

    // n=Integer.parseInt(str);
    // System.out.println(n+5);//more: Double.toString(), Double.parseDouble()

    // //really necessary??
