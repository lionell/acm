import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;

/**
 * Created by lionell on 13.12.2015.
 *
 * @author Ruslan Sakevych
 */
public class Supprime {
    public static void main(String[] args) {
        Reader in = new Reader();
        int k = in.nextInt();
        in.close();
        Printer out = new Printer();
        out.print(new Linear().run(k));
        out.close();
    }

    private static class Reader {
        private BufferedReader reader;
        private StringTokenizer tokenizer;

        public Reader() {
            reader = new BufferedReader(new InputStreamReader(System.in));
        }

        public Reader(String s) {
            try {
                reader = new BufferedReader(new FileReader(s));
            } catch (FileNotFoundException e) {
                e.printStackTrace();
            }
        }

        public String nextToken() {
            while (tokenizer == null || !tokenizer.hasMoreElements()) {
                try {
                    tokenizer = new StringTokenizer(reader.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return tokenizer.nextToken();
        }

        public int nextInt() {
            return Integer.parseInt(nextToken());
        }

        public void close() {
            try {
                reader.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
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
