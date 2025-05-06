cost = int(input()) #가격

change = 1000 - cost #1000원을 내고 받아야 할 금액액
count = 0
change_list = [500, 100, 50, 10, 5, 1] #거스름돈 리스트

for i in change_list:
    count = count + change // i #몫 = 개수
    change = change % i#나머지를 금액으로 초기화
print(count)
# n = 1260
# count = 0

# coin_types = [500,100,50,10]

# for coin in coin_types:
#     count = count + n // coin #개수 세기
#     n  = n % coin #나머지돈
# print(count)