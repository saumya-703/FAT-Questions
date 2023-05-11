import java.util.*;
public class Student{
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int arr[]=new int[10];
        String str= sc.nextLine();
        char ch= sc.nextLine().charAt(0);
        try{
            arr[9]=15;
            System.out.println("printed");
        }
        catch(Exception e){
            System.out.println("Array is limited till 10");
        }
    }
}