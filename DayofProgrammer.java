import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

public class DayofProgrammer {

    // Complete the dayOfProgrammer function below.
    static String dayOfProgrammer(int year) {
        boolean isleap = leap(year);
        if(year==1918) return ("26.09.1918");
        else  if(isleap) return ("12.09."+year);
        else return("13.09."+year);

    }
    static boolean leap(int year){
        boolean isleap=true;
        if((year>=1700)&&(year<=1917)){
            if(year%4==0) isleap=true;
            else isleap=false;
        }
        else if(year>1918){
            if(year%400==0) isleap=true;
            else if((year%100!=0)&&(year%4==0)) isleap=true;
            else isleap=false;
        }
        return isleap;
    }
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int year = Integer.parseInt(bufferedReader.readLine().trim());

        String result = dayOfProgrammer(year);

        bufferedWriter.write(result);
        bufferedWriter.newLine();

        bufferedReader.close();
        bufferedWriter.close();
    }
}
