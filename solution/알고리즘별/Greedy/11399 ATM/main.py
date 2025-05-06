N = int(input()) #사람의 수

minutes = list(map(int, input().split()))
minutes.sort()

sum = 0

for i in range(N):
    sum = sum + minutes[i] * (N - i)
print(sum)