import java.io.*;
import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		String s = in.next();
		boolean checker = true;
		for (char c : s.toCharArray()) {
			if (c != '7' && c != '4') {
				checker = false;
				break;
			}
		}
		if (checker) {
			int sum1 = 0;
			for (int i = 0; i < n / 2; i++) {
				sum1 += (s.charAt(i) - '0');
			}
			int sum2 = 0;
			for (int i = n / 2; i < n; i++) {
				sum2 += (s.charAt(i) - '0');
			}
			System.out.println(sum1 == sum2 ? "YES" : "NO");
		} else {
			System.out.println("NO");
		}
	}
}
