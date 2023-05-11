import java.util.*;
public class longest {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        String str= sc.nextLine();
        int maxsize=0;
        int count =0;
        String temp="";
        String temp2="";
        for(int i=0;i<str.length();i++){
            char ch= str.charAt(i);
            if(ch!=' '){
                temp=temp+ch;
                count++;
                temp2= temp;
            }
            if(count>maxsize){
                maxsize=count;
            }
            else{
                temp="";
                count=0;
            }
        }
        System.out.println(temp);
        System.out.println(maxsize);
    }
}
