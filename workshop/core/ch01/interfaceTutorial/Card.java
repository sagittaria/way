package interfaceTutorial;

public interface Card extends Comparable<Card> {
	public enum Suit {
		D(1, "D"), S(4, "S"); //D-diamonds 方块, S-spades 黑桃

		private final int value;
		private final String text;

		Suit(int value, String text) {
			this.value = value;
			this.text = text;
		}

		public int value() {
			return value;
		}

		public String text() {
			return text;
		}
	}
	

	public enum Rank {
		Q(12, "Q"), K(13, "K"), A(14, "A");

		private final int value;
		private final String text;

		Rank(int value, String text) {
			this.value = value;
			this.text = text;
		}

		public int value() {
			return value;
		}

		public String text() {
			return text;
		}
	}

	public Card.Suit getSuit();

	public Card.Rank getRank();
}
