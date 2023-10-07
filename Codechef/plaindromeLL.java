public class plaindromeLL {
    public static void main(String[] args) {
        
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

    // we will reverse half of the linked list
    public static Node reverseHalfLL(Node head, int length, int count){
        if(count >= length/2){
            return tail;
        }

    }
}





// not useful



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

