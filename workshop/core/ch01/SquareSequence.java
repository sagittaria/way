
public class SquareSequence implements IntSequence{
	private int i;
	public boolean hasNext(){
		return true;
	}
	public int Next(){
		i++;
		return i*i;
	}
}
