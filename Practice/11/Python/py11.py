print("Введите число и степень, в которую хотите возвести число, через пробел")
a,b = input().split(' ')
a = float(a)
b = float(b)
c = float(a)
i = 1
d = float(1/a)
if b == 1:
    print(c)
elif b>0:
    while i<b:
        i = i + 1
        a = a * c
    print(a)
else:
    while i>b:
        i = i - 1
        a = a * d
    print(a)
