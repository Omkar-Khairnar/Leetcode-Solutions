class ListNode {
  int val;
  ListNode next;
}

public class AddTwoNumbers {

  public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
    ListNode ans = new ListNode();
    int quo = 0;
    int c = 0;
    while (l1 != null && l2 != null) {
      int a = l1.val;
      int b = l2.val;
      c = (a + b + quo) % 10;
      ans.val = c;
      if (a + b + quo >= 10) {
        quo = 1;
      } else {
        quo = 0;
      }
      l1 = l1.next;
      l2 = l2.next;
      ans = ans.next;
    }
    if (l2 == null) {
      while (l1 != null) {
        ans.val = l1.val + quo;
        if (ans.val >= 10) {
          ans.val = ans.val % 10;
          quo = 1;
        } else {
          quo = 0;
        }
        l1 = l1.next;
        ans = ans.next;
      }
    } else {
      while (l2 != null) {
        ans.val = l2.val + quo;
        if (ans.val >= 10) {
          ans.val = ans.val % 10;
          quo = 1;
        } else {
          quo = 0;
        }
        l2 = l2.next;
        ans = ans.next;
      }
    }
    return ans;
  }

  public static void main(String[] args) {}
}
