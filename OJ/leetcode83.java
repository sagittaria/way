/*
Given a sorted linked list, delete all duplicates such that each element appear only once.

For example,
Given 1->1->2, return 1->2.
Given 1->1->2->3->3, return 1->2->3.
*/
public class leetcode83 {
	public static ListNode deleteDuplicates(ListNode head) {
		if (head != null) {//不加有可能出 NullPointerException...
			ListNode tmp = head;
			while (tmp.next != null) {
				if (tmp.val == tmp.next.val) {
					tmp.next = tmp.next.next;
				} else {
					tmp = tmp.next;
				}
			}
		}
		return head;
	}

	public static void main(String[] args) {
		ListNode n1 = new ListNode(1);
		ListNode n11 = new ListNode(1);
		ListNode n2 = new ListNode(2);
		ListNode n3 = new ListNode(3);
		ListNode n33 = new ListNode(3);
		ListNode n4 = new ListNode(4);
		ListNode n44 = new ListNode(4);
		ListNode n5 = new ListNode(5);
		// ListNode n55 = new ListNode(5);
		n1.next = n11;
		n11.next = n2;
		n2.next = n3;
		n3.next = n33;
		n33.next = n4;
		n4.next = n44;
		n44.next = n5;
		// n5.next = n55;
		ListNode head = deleteDuplicates(n1);
		while (true) {
			System.out.print(head.val);
			if (head.next != null) {
				head = head.next;
				System.out.print("->");
			} else {
				break;
			}
		}
	}
}

class ListNode {
	int val;
	ListNode next;

	ListNode(int x) {
		val = x;
		next = null;
	}
}