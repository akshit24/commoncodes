import java.util.*;

class Node{
	int data;
	Node next=null;
};
class linklist{
	public static void main (string[] Args){
		Node node1=new Node();
		Node node2=new Node();
		Node node3=new Node();
		node1.data=1;
		node2.data=2;
		node3.data=3;
		node1.next=node2;
		node2.next=node3;
		node3.next=null;
		while (Node.next !=null){
			System.out.println(Node.data);
		}
	}
}
