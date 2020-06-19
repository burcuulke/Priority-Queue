package com.company;
import java.util.Scanner;
import java.util.*;

class Main {
    public static void main(String args[])
    {

        PriorityQueue<Integer> pQueue = new PriorityQueue<Integer>();
        int menu;
        do{
            System.out.println("1.Insert");
            System.out.println("2.Delete");
            System.out.println("3.Display");
            System.out.println("4.Top Element");
            System.out.println("5.Quit");
            System.out.println("Enter your option (1-5):");
			
            Scanner reader = new Scanner(System.in);
			
            menu = reader.nextInt();
			
            if (menu == 1) {
				
                System.out.println("Input the value (add) : ");
				
                int item = reader.nextInt();
				
                pQueue.add(item);
            }
            else if (menu == 2)
            {
                pQueue.poll();
            }
            else if (menu == 3)
            {
                Object[] arr = pQueue.toArray();
				
                System.out.println("Value in Queue: ");
				
                for (int i = 0; i < arr.length; i++)
					
                    System.out.println(arr[i].toString());
            }
            else if (menu == 4)
            {
                System.out.println(pQueue.peek());
            }
            else if (menu == 5)
            {
                break;
            }
            else
                System.out.println("Invalid, re - enter!!\n");
            } while (menu != 5);
    }
}