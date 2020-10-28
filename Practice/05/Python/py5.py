print('Введите начальное положение x0')
x0 = float(input())

print("Введите начальную скорость v0")
v0 = float(input())

print("Введите время")
t = float(input())
g = 9.8

print("Положение после вычислений x(t)=", x0+v0*t+(g*t*t)/2)
