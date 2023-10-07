public class reverseLinkedList {
    public static void main(String[] args) {
        int[] arr = {2, 4, 6,7, 8, 7};
        Node listHead = makeLList(arr, arr.length);
        printList(listHead);
        Node rListHead = reverseLListRec(listHead);
        printList(rListHead);
    }

    public static Node makeLList(int[] arr, int n){
        Node head = new Node(arr[0]);
        Node temp = head;
        for(int i =1; i< n; i++){
            temp.next = new Node(arr[i]);
            temp = temp.next;
        }
        return head;
    }

    public static Node reverseLList(Node head){
        Node curr = head;
        Node prev  = null;
        while(curr!= null){
           Node temp = curr.next;
           curr.next = prev;
           prev = curr;
           curr = temp;
        }
        head = prev;
        return head;
    }

    public static Node reverseLListRec2(Node head){
        // Note: whenever we apply recursion it is utmost important to divide the problem into similar subproblems
        // if you know how to do this, so recursion will be a piece of cake.
        if(head == null || head.next == null){
            return head;
        }
        Node newHead = reverseLList(head.next);
        Node headNext = head.next;
        headNext.next = head;
        head.next = null;
        return newHead;
    }

    public static Node reverseLListRec(Node head){
        Node prev = null;  // this cannot be before recursion call because if we set this value as null, it will be null for all the recursion calls
        // Therefore this must be set as null after ther recursion call.
        // any such scenario in which 
        Node curr = head;
        Node next = head.next;
        if (curr == null){
            return prev;
        }
        curr.next = prev;
        return reverseLList(next);
    }

    public static void printList(Node head){
        Node temp = head;
        while(temp!= null){
            System.out.print(temp.val + " --> ");
            temp = temp.next;
        }
        System.out.println("Null");

    }



}

class Node{
    int val;
    Node next;
    Node(int val){
        this.val = val;
    }
    Node(int val, Node next){
        this.val = val;
        this.next = next;
    }
}


