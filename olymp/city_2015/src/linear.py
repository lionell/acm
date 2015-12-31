MAX_PRIME = 33347


def is_prime(x):
    i = 2
    while i * i <= x:
        if x % i == 0:
            return 0
        i += 1
    return 1


primes = []
for j in xrange(2, MAX_PRIME + 1):
        if is_prime(j):
            primes += [j]
k = int(raw_input())
print primes[primes[k - 1] - 1]