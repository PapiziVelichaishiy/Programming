print("Введите число которое хотите возвести в факториал")
n = int(input())

factorial = 1
while n > 1:
    factorial *= n
    n -= 1

print(factorial)
