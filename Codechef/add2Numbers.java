public class add2Numbers {
    public static void main(String[] args) {
        Solution sn = new Solution();
        ListNode node = new ListNode(3);
        ListNode node2 = new ListNode(7);
        ListNode ans = sn.addTwoNumbers(node, node2);
        while(ans !=null){
            System.out.print(ans.val + " ");
            ans = ans.next;
        }
    }
}


// Definition for singly-linked list.
class ListNode {
    int val;
    ListNode next;
    ListNode() {}
    ListNode(int val) { this.val = val; }    
    ListNode(int val, ListNode next) { this.val = val; this.next = next; }
}

public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
    int n = 1;
    int num1 =0;
    while(l1 != null){
        num1+=l1.val *n;
        n*=10;
        l1 = l1.next;
    }
    int num2 =0;
    n=1;
    while(l2 != null){
        num2+=l2.val *n;
        n*=10;
        l2 = l2.next;
    }
    // num1 and num 2 ready
    
    
    int sum = num1 + num2;
    ListNode ans = new ListNode(sum%10);
    ListNode temp2 = ans;
    sum = (sum - sum%10)/10;
    while(sum >0){
        // ans.val = sum%10;
        ListNode temp = new ListNode(sum%10);
        ans.next = temp;
        sum = (sum - sum%10)/10;
        ans = ans.next;
    }
    return temp2;
