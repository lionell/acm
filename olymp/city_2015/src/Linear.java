import java.util.ArrayList;
import java.util.List;

/**
 * Created by lionell on 13.12.2015.
 *
 * @author Ruslan Sakevych
 */
public class Linear {
    public static final int MAX_PRIME = 44611; // 33347
    private boolean[] isPrimeArray = new boolean[MAX_PRIME + 1];
    private List<Integer> primes = new ArrayList<>();

    public Linear() {
        init();
    }

    private void init() {
        eratosthenes();
        for (int i = 2; i <= MAX_PRIME; i++) {
            if (isPrimeArray[i]) {
                primes.add(i);
            }
        }
    }

    public int run(int x) {
        return primes.get(primes.get(x - 1) - 1);
    }

    private void eratosthenes() {
        for (int i = 0; i <= MAX_PRIME; i++) {
            isPrimeArray[i] = true;
        }
        for (int i = 2; i <= MAX_PRIME; i++) {
            if (isPrimeArray[i]) {
                for (int j = i * i; j <= MAX_PRIME; j += i) {
                    isPrimeArray[j] = false;
                }
            }
        }
    }
}
