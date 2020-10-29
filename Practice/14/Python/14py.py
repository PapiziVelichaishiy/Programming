from math import pow
print ("Введите число")
f = int(input())
a = 1
b = 0
c = 0
d = 0
while a <= f:
    c = pow(2,b)
    if b <= f and c <= f:
          d = d + 1
    else:
        n = b
    b = b + 1
    a = a + 1
print(d)

