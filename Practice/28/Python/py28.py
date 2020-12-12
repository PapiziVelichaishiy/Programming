def factors(num, d=2):
    while num > 1:
        n1, n2 = divmod(num, d)
        if n2:
            d += 1
        else:
            yield d
            num = n1

n = int(input("Integer: "))
print('{} = {}' .format(n, ' * '.join(map(str, factors(n)))))

