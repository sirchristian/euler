def isprime(x):
    for y in range(x-1,1,-1):
        if x % y == 0:
            return False
    return True

num = 600851475143
for x in range(1,7000,2):
    prime = x if isprime(x) else None
    if not prime is None and num % prime == 0:
        num = (num / prime)
    if num <= 1:
        break

print x
