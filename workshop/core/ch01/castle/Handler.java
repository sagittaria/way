package castle;

public class Handler {
	protected Game game; //供 HandlerGo 里game.goRoom(word) 用
	public Handler(Game game){
		this.game = game;
	}
	public void doCmd(String word){}
	public boolean isBye(){ return false;}
}
