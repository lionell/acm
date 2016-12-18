//
// Created by lionell on 5/1/16.
//

#include <bits/stdc++.h>

using namespace std;

const string home_path = "/home/lionell/dev/acm/olymp/complex_2016/potions";
const int LOWER_BOUND = 1;
const int UPPER_BOUND = 1000000000 - LOWER_BOUND;

void write_to_file(const string path, const string text) {
    ofstream out(home_path + path);
    out << text;
    out.close();
}

void write_test(int id, const string input, const string output) {
    write_to_file("tests/" + to_string(id) + ".in", input);
    write_to_file("tests/" + to_string(id) + ".out", output);
}

string generate_random_test(int n, int k) {
    stringstream ss;

    ss << n << " " << k << endl;
    for (int i = 0; i < n; ++i) {
        ss << (rand() % UPPER_BOUND) + LOWER_BOUND << " "
        << (rand() % UPPER_BOUND) + LOWER_BOUND << endl;
    }

    return ss.str();
}

namespace greedy {
    typedef pair<int, int> pii;
    typedef long long ll;

    const int MAX_N = 100000;

    pii a[MAX_N];
    int n, k;

    bool cmp(pii f, pii s) {
        ll x = (ll) f.first * s.second;
        ll y = (ll) s.first * f.second;
        return x < y || x == y && f.first < s.first;
    }

    void run(istream &in, ostream &out) {
        in >> n >> k;
        for (int i = 0; i < n; ++i) {
            in >> a[i].first >> a[i].second;
        }

        sort(a, a + n, cmp);

        double nom = 0.0, den = 0.0;
        for (int i = 0; i < k; ++i) {
            nom += a[i].first;
            den += a[i].second;
        }

        out << nom / den;
    }
};

namespace bust {
    typedef long long ll;
    typedef pair<int, int> pii;

    const int MAX_N = 100000;
    const double INF = 1e9;

    pii a[MAX_N];
    int n, k;

    double ans = INF;
    ll x, y;

    void bust(int i, int k) {
        if (i + k > n) {
            return;
        }

        if (k == 0) {
            ans = min(ans, (double) x / y);
            return;
        }

        x += a[i].first;
        y += a[i].second;

        bust(i + 1, k - 1);

        x -= a[i].first;
        y -= a[i].second;

        bust(i + 1, k);
    }

    void run(istream &in, ostream &out) {
        in >> n >> k;
        for (int i = 0; i < n; ++i) {
            in >> a[i].first >> a[i].second;
        }

        bust(0, k);

        out << ans;
    }
};

namespace bubble {
    typedef pair<int, int> pii;

    const int MAX_N = 100000;
    const double L = 0;
    const double R = 1e9;
    const double EPS = 1e-4;

    pii a[MAX_N];
    int n, k;

    double calc(pii p, double lambda) {
        return p.first - lambda * p.second;
    }

    bool check(double lambda) {
        auto cmp = [&](pii f, pii s) -> bool {
            return calc(f, lambda) <
                   calc(s, lambda);
        };

        for (int i = 1; i < n; ++i) {
            pii key = a[i];
            int j = i - 1;
            while (j >= 0 && cmp(key, a[j])) {
                a[j + 1] = a[j];
                j--;
            }

            a[j + 1] = key;
        }

        double sum = 0.0;
        for (int i = 0; i < k; ++i) {
            sum += calc(a[i], lambda);
        }

        return sum <= 0;
    }

    void run(istream &in, ostream &out) {
        in >> n >> k;
        for (int i = 0; i < n; ++i) {
            in >> a[i].first >> a[i].second;
        }

        double l = L, r = R;
        while (r - l > EPS) {
            double m = (r + l) / 2;
            if (check(m)) {
                r = m;
            } else {
                l = m;
            }
        }

        out << r;
    }
};

namespace quick {
    typedef pair<int, int> pii;

    const int MAX_N = 100000;
    const double L = 0;
    const double R = 1e9;
    const double EPS = 1e-4;

    pii a[MAX_N];
    int n, k;

    double calc(pii p, double lambda) {
        return p.first - lambda * p.second;
    }

    bool check(double lambda) {
        auto cmp = [&](pii f, pii s) -> bool {
            return calc(f, lambda) <
                   calc(s, lambda);
        };

        sort(a, a + n, cmp);

        double sum = 0.0;
        for (int i = 0; i < k; ++i) {
            sum += calc(a[i], lambda);
        }

        return sum <= 0;
    }

    void run(istream &in, ostream &out) {
        in >> n >> k;
        for (int i = 0; i < n; ++i) {
            in >> a[i].first >> a[i].second;
        }

        double l = L, r = R;
        while (r - l > EPS) {
            double m = (r + l) / 2;
            if (check(m)) {
                r = m;
            } else {
                l = m;
            }
        }

        out << r;
    }
};

string run_quick(string input) {
    stringstream in;
    in << input;
    stringstream out;

    quick::run(in, out);

    return out.str();
}

string run_greedy(string input) {
    stringstream in;
    in << input;
    stringstream out;

    greedy::run(in, out);

    return out.str();
}

string run_bust(string input) {
    stringstream in;
    in << input;
    stringstream out;

    bust::run(in, out);

    return out.str();
}

string run_bubble(string input) {
    stringstream in;
    in << input;
    stringstream out;

    bubble::run(in, out);

    return out.str();
}

bool compare(double x, double y) {
    return abs(x - y) < 1e-4;
}

void stats(string greedy_output,
           string bust_output,
           string bubble_output,
           string quick_output) {
    cout << "GREEDY: " << greedy_output << endl;
    cout << "BUST: " << bust_output << endl;
    cout << "BUBBLE: " << bubble_output << endl;
    cout << "QUICK: " << quick_output << endl;

    double ans = atof(quick_output.c_str());

    cout << "GREEDY " << (compare(ans, atof(greedy_output.c_str())) ? "PASSED" : "FAIL") << endl;
    cout << "BUST " << (compare(ans, atof(bust_output.c_str())) ? "PASSED" : "FAIL") << endl;
    cout << "BUBBLE " << (compare(ans, atof(bubble_output.c_str())) ? "PASSED" : "FAIL") << endl;
}

int main() {
    srand(54);

    string input = generate_random_test(70985, 51323);

    string greedy_output = run_greedy(input);
    string bust_output = "0.0"; //run_bust(input);
    clock_t start = clock();
    string bubble_output = run_bubble(input);
    cout << "BUBBLE TIME: " << (clock() - start) / (double) CLOCKS_PER_SEC << "ms." << endl;
    start = clock();
    string quick_output = run_quick(input);
    cout << "QUICK TIME: " << (clock() - start) / (double) CLOCKS_PER_SEC << "ms." << endl;

    stats(greedy_output, bust_output, bubble_output, quick_output);

    write_test(18, input, quick_output);

    return 0;
}
