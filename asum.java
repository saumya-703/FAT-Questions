import java.util.*;
public class asum {
    public int sum(int arr[]){
        int n= arr.length;
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
        }
        return sum;
    }
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        asum a= new asum();
        System.out.println("Enter the Numbers");
        int n= sc.nextInt();
        int arr[]= new int[n];
        for(int i=0;i<n;i++){
            System.out.println("Enter the element at "+i+"th location : ");
            arr[i]= sc.nextInt();
        }
        int val = a.sum(arr);
        System.out.println("Sum is : "+val);
    }
}
