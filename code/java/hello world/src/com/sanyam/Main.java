package com.sanyam;
import java.util.*;

public class Main {

    public static void main(String[] args) {
        for(int i=1; i<501;i++)
        {
            String s = String.valueOf(i);
            int sum = 0;
            for(int j=0; j<s.length(); j++)
            {
                int temp = s.charAt(j) - '0';
                sum += (temp*temp*temp);
            }
            if(i==sum)
            {
                System.out.println(i + " is a armstrong.");
            }else
            {
                System.out.println(i + " is not a armstrong.");
            }
        }

    }
}