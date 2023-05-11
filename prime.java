import java.util.*;
public class prime {
    public static boolean isprime(int num){
        if(num<=1){
            return false;
        }
        int c=0;
        for(int i=1;i<=num;i++){
            if(num%i==0){
                c++;
            }
        }
        if(c==2){
            return true;
        }
        else{
            return false;
        }
    }
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the number n: ");
        int n = sc.nextInt();
        System.out.println("The given number is Prime or not : "+ isprime(n));
    }
}
