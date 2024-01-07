hour, minute = map(int,input().split())

def changeMinute(hour): #시간을 분으로
    totalHour = hour * 60
    return totalHour

def calcTime(minute): #전체시간
    totalTime = changeMinute(hour) + minute - 45 #전체 분
    return totalTime

def devideTime(minute): #최종시간
    hour = calcTime(minute) // 60 #몫
    minute = calcTime(minute) % 60 #나머지
    return hour, minute

h,m = devideTime(minute)
if h < 0:
    h = 23
    print("{} {}".format(h,m))
else:
    print("{} {}".format(h,m))