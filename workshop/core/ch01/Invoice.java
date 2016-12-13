import java.util.ArrayList;

// ch02 exercise 15
public class Invoice {
	private static class Item{
		String description;
		int quantity;
		double unitPrice;
		double price(){return quantity*unitPrice;}
	}
	
	private ArrayList<Item> items = new ArrayList<>();

	public void addItem(String description, int quantity, double unitPrice) {
		Item newItem = new Item();
		newItem.description = description;
		newItem.quantity = quantity;
		newItem.unitPrice = unitPrice;
		items.add(newItem);
	}
	
	public static void main(String[] args){
		Invoice itest = new Invoice();
		itest.addItem("aaa", 2, 0.5);
		itest.addItem("bbb", 1, 1);
		itest.addItem("ccc", 4, 0.25);
		for(Item i : itest.items){
			System.out.println(i.description+" "+i.quantity+" "+i.unitPrice+" "+i.price());
		}
	}
}
