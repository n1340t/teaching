import java.util.Scanner;


public class Assignment1 {
    final static int QUIT =9;

    /**
     *
     */
    public static void displayMenu(){
        System.out.println("               =============               ");
        System.out.println("               Assignment #1               ");
        System.out.println("               =============               ");
        System.out.println("-1- Compute byte data type minimum value");
        System.out.println("-2- Compute byte data type maximum value");
        System.out.println("-3- Compute short data type minimum value");
        System.out.println("-4- Compute short data type maximum value");
        System.out.println("-5- Compute int data type minimum value");
        System.out.println("-6- Compute int data type maximum value");
        System.out.println("-7- Compute long data type minimum value");
        System.out.println("-8- Compute long data type maximum value");
        System.out.println("-9- Quit\n");
        System.out.print("Enter your choice 1-9:");
    }

    public static int getMenuChoice(){
        Scanner scanner = new Scanner(System.in);
        int choice = scanner.nextInt();

        while (choice<1 || choice>9){
            displayMenu();
            choice = scanner.nextInt();
        }

        return choice;
    }

    public static byte getMinimumByte(){
        byte min =-1;

        return (byte) (min<<7); // using  left shift operator to get the minimum value
    }

    public static  byte getMaximumByte(){
        byte max = (byte) ~(getMinimumByte()); // using the NOT operator to reverse the bit from minimum to maximum
        return  max;

    }

    public  static  short getMinimumShort(){
        short min = -1;

        return (short) (min<<15);  // using  left shift operator to get the minimum value
    }

    public  static  short getMaximumShort(){
        short max = (short) ~(getMinimumShort()); // using the NOT operator to reverse the bit from minimum to maximum
        return max;
    }

    public static int getMinimumInt(){
        int min = -1;
        return min<<31;  // using  left shift operator to get the minimum value
    }

    public static int getMaximumInt(){
        int max = ~(getMinimumInt()); // using the NOT operator to reverse the bit from minimum to maximum
        return max;
    }

    public static long getMinimumLong(){
        long min = -1;
        return min<<63;  // using  left shift operator to get the minimum value
    }

    public static long getMaximumLong(){
        long max = ~(getMinimumLong()); // using the NOT operator to reverse the bit from minimum to maximum
        return max;
    }

    public static void main(String [] args){

        displayMenu();
        Scanner scanner = new Scanner(System.in);
        int choice = getMenuChoice();

        while (choice!=QUIT){
            switch (choice){
                case 1:
                    System.out.println(getMinimumByte());
                    break;
                case 2:
                    System.out.println(getMaximumByte());
                    break;
                case 3:
                    System.out.println( getMinimumShort());
                    break;
                case 4:
                    System.out.println( getMaximumShort());
                    break;
                case 5:
                    System.out.println( getMinimumInt());
                    break;
                case 6:
                    System.out.println( getMaximumInt());
                    break;
                case 7:
                    System.out.println( getMinimumLong());
                    break;
                case 8:
                    System.out.println( getMaximumLong());
                    break;
                case QUIT:
                    return;
            }
            displayMenu();
            choice = scanner.nextInt();
        }

    }
}
