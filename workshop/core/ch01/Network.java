import java.util.ArrayList;

// ch02 exercise 14
public class Network {
	public class Member{//内部类，使用 javap -private Network$Member查看可以看到它有个成员 final NetWork this$0
		private String name;	//，意思就是——所以它知道自己属于Network的哪个实例
		private ArrayList<Member> friends = new ArrayList<>();//不要忘记初始化！！
		public Member(String name){
			this.name=name;
			friends.add(this);
			friends = new ArrayList<Member>();
			System.out.println(this.name+" was created.");
		}
		public void leave(){
			members.remove(this);//←看，内部类是可以访问到外部类的私有变量members的
			System.out.println(this.name+" has left.");
		}
	}
	
	private ArrayList<Member> members = new ArrayList<>();//尤其不要忘记初始化，否则members.add时候会出错
	
	public Member enroll(String name){
		Member newMember = new Member("fred");
		members.add(newMember);//如果不先初始化，members是null，会报nullPointerException
		System.out.println(name+" is enrolled.");
		return newMember;
	}
	
	public static void main(String[] args){
		Network myFace = new Network();
		Member fred = myFace.new Member("fred");
		fred.leave();
	}
}
