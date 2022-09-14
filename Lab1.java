class Main {
  public static void main(String[] args) {
    //column widths are 10 and 20
    // print header
    System.out.printf("%-10s \t%-20s\t%s\n\n","Data Type", "Minimum", "Maximum");
    // print secondary header
    System.out.printf("%-10s \t%-20s\t%s\n\n","=========", "=======", "=======");
    System.out.printf ("%-10s \t%-20d\t%d\n","Byte", Byte.MIN_VALUE, Byte.MAX_VALUE);
    System.out.printf ("%-10s \t%-20d\t%d\n","Short", Short.MIN_VALUE, Short.MAX_VALUE);
    System.out.printf ("%-10s \t%-20d\t%d\n","Int", Integer.MIN_VALUE, Integer.MAX_VALUE);
    System.out.printf ("%-10s \t%-20d\t%d\n","Long",Long.MIN_VALUE, Long.MAX_VALUE);
    System.out.printf ("%-10s \t%-20.7f\t%.3E\n","Float",Float.MIN_VALUE, Float.MAX_VALUE);
    System.out.printf ("%-10s \t%-20.7f\t%.3E\n","Double", Double.MIN_VALUE, Double.MAX_VALUE);
  }
}
