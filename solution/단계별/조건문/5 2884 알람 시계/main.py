hour, minute = map(int,input().split())

def changeMinute(hour): #�ð��� ������
    totalHour = hour * 60
    return totalHour

def calcTime(minute): #��ü�ð�
    totalTime = changeMinute(hour) + minute - 45 #��ü ��
    return totalTime

def devideTime(minute): #�����ð�
    hour = calcTime(minute) // 60 #��
    minute = calcTime(minute) % 60 #������
    return hour, minute

h,m = devideTime(minute)
if h < 0:
    h = 23
    print("{} {}".format(h,m))
else:
    print("{} {}".format(h,m))