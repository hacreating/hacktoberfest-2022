class Solution {
    public ListNode rotateRight(ListNode head, int k) {
        if (head == null || head.next == null || k == 0) return head;
        int count = 0;
        ListNode temp = head;
        while (temp != null) {
            count++;
            temp = temp.next;
        }

        int move = k % count; //to find where to cut the list
        if (k == count || move == 0) return head;
        temp = head;
        int count1 = 0;
        ListNode result = head, prev = head;

        while (count1 < count) {
            if (count - count1 == move) {
                prev.next = null; //to not to run into infinite loop
                result = temp;
            }
            count1++;
            if (count1 == count) {
                temp.next = head;
            }
            prev = temp;
            temp = temp.next;
        }
        return result;
    }
}