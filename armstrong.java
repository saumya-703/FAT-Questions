import java.util.*;
public class armstrong {
    static void isaamstrong(int n){
        int sum=0;
        for(int i=n;i>0;i=i/10){
            int d= i%10;
            sum=sum+cube(d);
        }
        if(sum==n){
            System.out.println(n);
        }
    }
    static int cube(int d){
        int cube= d*d*d;
        return cube;
    }
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        for(int i=100;i<999;i++){
            isaamstrong(i);
        }
    }
}
