sum=0;last=1;curr=1;max=4000000
while curr < max:
    next = last + curr
    sum += next if next % 2 == 0 else 0
    last = curr
    curr = next

print sum
