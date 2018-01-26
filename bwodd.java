package positive;
import java.util.*;
/**
 *
 * @author akil
 */
public class Positive {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner scan = new Scanner(System.in);
        int s = scan.nextInt();
        int k= scan.nextInt();
        for(int i=s+1;i<k;i++)
        {
            if((i%2)!=0)
            {
                System.out.printf("%d ",i);
           }
           }
           }
}
