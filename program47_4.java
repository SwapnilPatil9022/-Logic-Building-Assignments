//Write a java program which accept string from user and check whether it contains vowels in it or not.

//input : Marvellous 
//Output : 9
/*
import java.lang.*;
import java.util.*;
					
class program47_4
{
    public static void main(String arg[])
    {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the string : ");
            String str = sobj.nextLine();

            char arr[] = str.toCharArray();
            int iCnt = 0;

           for(int i = 0; i < arr.length; i++)
            {
                if((arr[i] == 'a') || (arr[i] == 'e') || (arr[i] == 'i') || (arr[i] == 'o') || (arr[i] == 'a'))
                {
                    System.out.println("TRUE");
                }
				else
				{
					System.out.println("False");
				}
			}
            
    }
}
*/

import java.lang.*;
import java.util.*;

class program47_4
{
    public static void main(String arg[])
    {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the string : ");
            String str = sobj.nextLine();

            char arr[] = str.toCharArray();
            
            for(int i = 0; i < arr.length; i++)
            {
                if((arr[i] == 'a') || (arr[i] == 'e') || (arr[i] == 'i') || (arr[i] == 'o') || (arr[i] == 'a'))
                {
                    System.out.println("TRUE");
                }
				else
				{
					System.out.println("False");
				}
            }
		}
}