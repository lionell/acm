import java.util.ArrayList;
import java.util.List;

/**
 * Created by lionell on 13.12.2015.
 *
 * @author Ruslan Sakevych
 */
public class Const {
    public static final int MAX_PRIME = 44611; // 33347
    private List<Integer> primes = new ArrayList<>();

    public Const() {
        init();
    }

    public void init() {
        for (int i = 2; i <= MAX_PRIME; i++) {
            if (isPrime(i)) {
                primes.add(i);
            }
        }
    }

    public int run(int x) {
        return primes.get(primes.get(x - 1) - 1);
    }

    private boolean isPrime(int x) {
        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                return false;
            }
        }
        return true;
    }
}
