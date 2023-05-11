import java.util.*;
public class function_sum{
    public int sum(int a, int b){
        int c= a+b;
        return c;
    }
    public static void main(String[] abs){
        Scanner sc= new Scanner (System.in);
        System.out.println("Enter the Number");
        int a= sc.nextInt();
        int b= sc.nextInt();
        function_sum f= new function_sum();
        int resul= f.sum(a,b);
        System.out.println("Number is:"+resul);
    }
}