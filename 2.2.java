import java.io.*;
import java.util.*;



public class Solution {


    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        String input;

        Scanner sc= new Scanner(System.in);

       input= sc.nextLine();

        String output = "";
         for (int start = 0; start < input.length(); start++) {
        Set<Character> visited = new HashSet<>();
        int end = start;
        for (; end < input.length(); end++) {
            char currChar = input.charAt(end);
            if (visited.contains(currChar)) {
                break;
            } else {
                visited.add(currChar);
            }
        }
        if (output.length() < end - start + 1) {
            output = input.substring(start, end);
        }
         }


        System.out.print(output);

    }
}
