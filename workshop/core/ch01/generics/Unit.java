package generics;

public class Unit {
	public static <K, V> boolean compare(Pair<K, V> p1, Pair<K, V> p2) {
		return p1.getKey().equals(p2.getKey())
				&& p1.getValue().equals(p2.getValue());
	}

	public static void main(String... strings) {
		Pair<Integer, String> p1 = new Pair<>(1, "apple");
		Pair<Integer, String> p2 = new Pair<>(2, "pear");
		Pair<Integer, String> p3 = new Pair<>(1, "apple");
		boolean same = Unit.<Integer, String> compare(p1, p2);
		System.out.println(same);
		same = Unit.<Integer, String> compare(p1, p3);
		System.out.println(same);
		same = Unit.compare(p2, p3);
		System.out.println(same);
	}
}
