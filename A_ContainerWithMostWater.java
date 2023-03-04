class A_ContainerWithMostWater {

  static int max(int a, int b) {
    if (a >= b) return a;
    return b;
  }

  static int min(int a, int b) {
    if (a <= b) return a;
    return b;
  }

  static int maxArea(int[] height) {
    int len = height.length;
    int i = 0, j = len - 1, area = 0, mx = 0;
    while (i != j) {
      area = min(height[i], height[j]) * (j - i);
      mx = max(area, mx);
      if (height[i] >= height[j]) {
        j--;
      } else {
        i++;
      }
    }
    return mx;
  }

  public static void main(String[] args) {
    int height[] = { 1, 8, 6, 2, 5, 4, 8, 3, 7 };
    System.out.println(maxArea(height));
  }
}
