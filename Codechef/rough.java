import java.util.Comparator;
import java.util.PriorityQueue;

public class rough {
    public static void main(String[] args) {
        GfG gfg  = new GfG();
        Node root = new Node(5);
        root.bottom = new Node(7);
        root.bottom.bottom = new Node(30);
        root.next = new Node(10);
        root.next.bottom = new Node(20);
        root.next.next = new Node(19);
        root.next.next.bottom = new Node(22);
        root.next.next.bottom.bottom = new Node(50);
        Node ans = gfg.flatten(root);
        System.out.println();
        printlist(ans);
        
    }

    public static void printlist(Node node){
        while(node != null){
            System.out.print(node.data + " -> ");
            node = node.next;
        }
    }
}

class GfG
{
    Node flatten(Node root)
    {
        Comparator<Node> nodeComparator = new Comparator<Node>() {
            @Override
            public int compare(Node o1, Node o2) {
                return o1.data - o2.data;
            }
        };
	// Your code here
	    PriorityQueue<Node> heap = new PriorityQueue<>(nodeComparator);
	    Node temp = root;
	    while(temp != null){
	        heap.add(temp);
	        temp = temp.next;
	    }
        
	    Node ans = heap.poll();
        if(ans.bottom != null){
            heap.add(ans.bottom);    
        }
        ans.next = null;
        ans.bottom =null;
        

        Node head = ans;
        Node temp2 = ans;

	    while(!heap.isEmpty()){
            temp2 = heap.poll();
            if(temp2.bottom != null){
                heap.add(temp2.bottom);
            }
            temp2.bottom = null;
            temp2.next = null;
            ans.next = temp2;
            System.out.print(temp2.data + " -> ");
            ans = ans.next;
	    }
        return head;
    }
}

class Node
{
	int data;
	Node next;
	Node bottom;
	
	Node(int d)
	{
		data = d;
		next = null;
		bottom = null;
	}
}


