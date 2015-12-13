import java.io.BufferedOutputStream;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintWriter;
import java.util.Random;

/**
 * Created by lionell on 13.12.2015.
 *
 * @author Ruslan Sakevych
 */
public class TestGenerator {
    public static final String path = "D:\\developing\\cp\\olymp\\city_2015\\res\\tests\\";
    public static final String prefix = "supprime.test.";
    public static void main(String[] args) {
        Random random = new Random();
        for (int i = 1; i <= 100; i++) {
            String filePath = getFullPath(i);
            Printer out = new Printer(filePath);
            int input = 5 * (i - 1) + random.nextInt(5);

            out.println(input);
            out.print(new Linear().run(input));
            out.close();
        }
    }

    public static String getFullPath(int i) {
        StringBuilder builder = new StringBuilder();
        builder.append(path);
        builder.append(prefix);
        if (i < 100) {
            builder.append('0');
        }
        if (i < 10) {
            builder.append('0');
        }
        builder.append(i);
        return builder.toString();
    }

    private static class Printer {
        private PrintWriter writer;

        public Printer() {
            writer = new PrintWriter(new BufferedOutputStream(System.out));
        }

        public Printer(String s) {
            try {
                writer = new PrintWriter(new File(s));
            } catch (FileNotFoundException e) {
                e.printStackTrace();
            }
        }

        public void print(Object s) {
            writer.print(s);
        }

        public void println(Object s) {
            writer.println(s);
        }

        public void close() {
            writer.close();
        }
    }
}


