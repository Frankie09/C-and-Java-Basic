
public class TugasJavaSegitiga {

    public static void main(String[] args) {
        for (int i = 1; i <= 9; i++) {
            for (int j = 9; j > i; j--) {
                System.out.print(" ");
                
            }
            for (int k = 0; k < i; k++) {
                System.out.print("*");
                
            }
            for (int x = 1; x < i; x++) {
                System.out.print("*");
                
                
            }
            System.out.println("");
        }
        for (int z = 0; z < 3; z++) {
            for (int p = 0; p < 5; p++) {
                   System.out.print(" ");
                
            }
            for (int h = 0; h < 6; h++) {
                System.out.print("*");
                
            }
            for (int e = 0; e < 6; e++) {
                System.out.print(" ");
            }
            System.out.println("");
        }
    }
    
}
