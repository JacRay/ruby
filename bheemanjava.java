import java.util.*;  

class HelloWorld {
    public static void main(String[] args) {
      Scanner sc= new Scanner(System.in); 
        int t;
        int[] q = new int[100];
        int[] p = new int[100];
        float[] sum = new float[100];
        t= sc.nextInt();
        for(int i =0 ;i<t;i++){
          q[i] = sc.nextInt();
          p[i] = sc.nextInt();
        }
        for(int i =0;i<t;i++){
          if(q[i]> 1000){
            sum[i] = q[i]*p[i];
            sum[i]-= (sum[i]/10);
          }
          else{
            sum[i] = q[i]*p[i];
          }
          System.out.println(sum[i]);
        }
    }
}