import java.util.*;

public class Solution {

  private static String getRuler(String kingdom) {
    // TODO: implement this method to determine the ruler name, given the kingdom.
    String ruler = "";
    return ruler;
  }

  public static void main(String[] args) {
    try (Scanner in = new Scanner(System.in)) {
      int T = in.nextInt();

      for (int t = 1; t <= T; ++t) {
        String kingdom = in.next();
        System.out.println(
            "Case #" + t + ": " + kingdom + " is ruled by " + getRuler(kingdom) + ".");
      }
    }
  }
}
