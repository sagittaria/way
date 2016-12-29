/*
Write a function to delete a node (except the tail) in a singly linked list, 
given only access to that node.

Supposed the linked list is 1 -> 2 -> 3 -> 4 and you are given the third node with value 3, 
the linked list should become 1 -> 2 -> 4 after calling your function.

这题好像没什么意义...
*/

public class leetcode237 {
	public void deleteNode(ListNode node) {
		// while(node.next != null){
		// node.val = node.next.val;
		// node = node.next;
		// }
		if (node == null)
			return;
		node.val = node.next.val;
		node.next = node.next.next;
		//
	}

	public static void main(String... args) {
		ListNode n1 = new ListNode(1);
		ListNode n2 = new ListNode(2);
		ListNode n3 = new ListNode(3);
		ListNode n4 = new ListNode(4);
		ListNode n5 = new ListNode(5);
		ListNode n6 = new ListNode(6);
		n1.next = n2;
		n2.next = n3;
		n3.next = n4;
		n4.next = n5;
		n5.next = n6;
		// ListNode tmp = n1;
		// while(tmp != null){
		// System.out.println(tmp);
		// tmp = tmp.next;
		// }
		System.out.println("---------");
		leetcode237 s = new leetcode237();
		s.deleteNode(n3);
		ListNode tmp2 = n1;
		while (tmp2 != null) {
			System.out.println(tmp2);
			tmp2 = tmp2.next;
		}
	}
}

class ListNode {
	int val;
	ListNode next;

	ListNode(int x) {
		val = x;
	}

	public String toString() {
		return "" + val;
	}
}


//用C语言也一样，不再另外新建文件了

//Definition for singly-linked list.
//struct ListNode {
//	int val;
//	struct ListNode *next;
//};

//void deleteNode(struct ListNode* node) {
//    if(node){
//        node->val = node->next->val;
//        node->next = node->next->next;
//    }
//}