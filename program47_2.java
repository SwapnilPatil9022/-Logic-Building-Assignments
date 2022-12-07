//Write a java program which accept string from user and count number of Small character.

//input : Marvellous 
//Output : 9

import java.lang.*;
import java.util.*;
					
class program47_2
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
                if((arr[i] >='a') && (arr[i] <= 'z'))  
                {
                    iCnt++;
                }
			}
            System.out.println("Number of Capital letters are : "+iCnt);
    }
}