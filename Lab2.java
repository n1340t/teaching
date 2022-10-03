import java.io.*;
import java.util.Enumeration;
import java.util.HashMap;
import java.util.Properties;

public class Lab2 {

    public static void writeFileProperties(String filename) {
        try {
            OutputStream output = new FileOutputStream(filename);
            // set the properties Values
            Properties prop = System.getProperties();
            // save properties to filename
            prop.store(output, null);
            output.close();
        } catch (FileNotFoundException ex) {
            System.out.println("\nCheck the filename and/or the Path");
            // ex.printStackTrace();
        } catch (IOException ex) {
            System.out.println("Something went wrong.");
            // ex.printStackTrace();
        } catch (Exception ex) {
            System.out.println("Something went wrong.");
            // ex.printStackTrace();
        }
    }

    public static HashMap<String, String> readFileProperties(String filename) {
        InputStream input = null;
        HashMap<String, String> keyValues = new HashMap<>();
        // add your code here
        try {
            input = new FileInputStream(filename); // read the properties file

            Properties prop = new Properties();
            prop.load(input); // load the properties file
            Enumeration e = prop.propertyNames(); // use enumeration to get all the keys
            while (e.hasMoreElements()) {
                String key = e.nextElement().toString(); // get the key
                String value = prop.getProperty(key); // get the value
                keyValues.put(key, value); // add key, value to hashmap
            }
            input.close();
        } catch (FileNotFoundException ex) {
            System.out.println("\n File not found, please check filename or path\n");

        } catch (IOException e) {
            System.out.println("\n Something went wrong");

        } catch (Exception ex) {
            System.out.println("\n Something went wrong");
        }
        return keyValues;
    }

    public static void main(String[] args) throws Exception {

    }

}
