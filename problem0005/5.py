# Since the smallest number for being divisible is 2520 
# is stands to reason 1-20 must be larger
x = 2510
IsDivisibleFrom1To20 = False
while not IsDivisibleFrom1To20:
    # In order by be evenly divible by 10 it must be a factor of 10
    x = x + 10

    # Go through the numbers. 
    # Everything is divible by 1, and we know it is even so 2 works too
    for y in range(3,20):
        if x % y != 0:
            break
    else:
        IsDivisibleFrom1To20 = True
print x
