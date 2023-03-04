import java.util.Arrays;
import java.util.Collections;

public class SearchinRotatedSortedArray {

  public int search(int[] nums, int target) {
    // Arrays.binarySearch(nums, target);
    int ct = 0, check = 0, val = -1;
    int len = nums.length;
    for (int i = 0; i < nums.length - 1; i++) {
      if (nums[i] > nums[i + 1]) {
        ct = i + 1;
        break;
      }
    }
    System.out.println(ct);
    for (int i = 0; i < ct - 1; i++) {
      if (nums[i] > nums[i + 1]) {
        check = 1;
      }
    }
    for (int i = ct; i < nums.length - 1; i++) {
      if (nums[i] > nums[i + 1]) {
        check = 1;
      }
    }
    if (check == 1) {
      return -1;
    } else {
      for (int i = 0; i < nums.length; i++) {
        if (nums[i] == target) {
          val = i;
        }
      }

      return val;
    }
  }

  public static void main(String[] args) {
    System.out.println("Hello");
  }
}
