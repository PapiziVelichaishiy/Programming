import random
a = 1
c = 5
m = 0
i = 1
print("Игра называется УГАДАЙ ЧИСЛО, давай я загадаю число а ты отгадаешь))")
while i <= c:
    if a == 1 or a == 0:
        b = random.randint(0,100)
        print("Как думаете какое число я загадал? Введите его)")
    if a == 5:
        d = int(input())
        if d == b:
            print("Да ты ванга! Ты угадал)")
            print("Го еще сыграем? (1-Да)")
            f = int(input())
            if f == 1:
                c = c * 2
                a = 0
        else:
            print ("Не повезло тебе. Я загадал:",b)
            print ("Еще разок? (1-Да)")
            f = int(input())
            if f == 1:
                c = c * 2
                a = 0
    else:
        d = int(input())
        m = m + 1
        if d == b:
            print("Ясно ты гений, ты угадал")
            print("Еще разик? (1-Да)")
            if f == 1:
                c = m + 5
                a = 0
        else:
            if d > b:
                print("Мимо, высоковато")
            else:
                print("Хехе, маловато однако))")
    a = a + 1
    i = i + 1
