import java.util.*;

public class Solution {

  public static int[] getHIndexScore(int[] citationsPerPaper) {
    int[] hIndex = new int[citationsPerPaper.length];

    // TODO: Add logic to calculate h-index score for each paper

    return hIndex;
  }

  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    // Get number of test cases in input
    int testCaseCount = scanner.nextInt();
    // Iterate through test cases
    for (int tc = 1; tc <= testCaseCount; ++tc) {
      // Get number of papers for this test case
      int paperCount = scanner.nextInt();
      // Get number of citations for each paper
      int[] citations = new int[paperCount];
      for (int p = 0; p < paperCount; ++p) {
        citations[p] = scanner.nextInt();
      }
      // Print h-index score after each paper in this test case
      System.out.print("Case #" + tc + ":");
      for (int score : getHIndexScore(citations)) {
        System.out.append(" ").print(score);
      }
      System.out.println();
    }
  }
}
