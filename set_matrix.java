import java.util.*;
public class set_matrix {

    static void setmatrix(int arr[][]){
        int brr[][]= new int[3][3];
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(arr[i][j]==0){
                    for(int k=0;k<3;k++){
                        brr[i][k]=0;
                        brr[k][j]=0;
                    }
                }
                else{
                    brr[i][j]=arr[i][j];
                }
            }
        }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
         System.out.print(brr[i][j]);
            }
        System.out.println();
        }  
    }
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int arr[][]= new int[3][3];
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                arr[i][j]=sc.nextInt();
            }
        }
        setmatrix(arr);
    }
}
