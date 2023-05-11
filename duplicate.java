import java.util.*;
public class duplicate {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]= new int[n];
        int arr2[]=new int[n];
        int a=0;
        //i/ps
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        Arrays.sort(arr);
        for(int i=0;i<n-1;i++){
            if(arr[i]!=arr[i+1]){
                arr2[a++]=arr[i];
            }
        }
        arr2[a++]=arr[n-1];

        for(int i=0;i<a;i++){
            System.out.print(arr2[i]+" ");
        }
    }
}
