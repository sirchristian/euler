for y in range (999,900,-1):
    for x in range(999,900,-1):
        prod = str(y * x)
        if prod == prod[::-1]:
            print '{0} * {1} = {2}'.format(x, y, prod)
            break
    else:
        continue
    break
