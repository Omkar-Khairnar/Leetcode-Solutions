public class ListNode {
  int val;
  ListNode next;

  ListNode() {}

  ListNode(int val) {
    this.val = val;
  }

  ListNode(int val, ListNode next) {
    this.val = val;
    this.next = next;
  }

  public static void main(String[] args) {}
}

class Solution {

  public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
    int a = 0, b = 0, c = 1;
    while (l1 != null) {
      a = l1.val * c + a;
      c = c * 10;
      l1 = l1.next;
    }
    c = 1;
    while (l2 != null) {
      b = l2.val * c + b;
      c = c * 10;
      l2 = l2.next;
    }

    long sum = a + b;
    System.out.println(a);
    System.out.println(b);
    System.out.println(sum);
    int v = 0;
    ListNode res = new ListNode();
    ListNode res1 = new ListNode();
    res1 = res;
    v = (int) sum % 10;
    sum = sum / 10;
    res.val = v;
    // System.out.println(v);
    while (sum != 0) {
      ListNode m = new ListNode();
      v = (int) sum % 10;
      sum = sum / 10;
      m.val = v;
      //System.out.println(v);

      res.next = m;

      res = res.next;
    }

    return res1;
  }
}
