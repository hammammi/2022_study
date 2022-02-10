# 연습문제

from turtle import end_fill


class Calculator:
    def __init__(self):
        self.value = 0
 
    def add(self, val):
        self.value += val


class UpgradeCalculator(Calculator):
    def minus(self,val):
        self.value -= val


class MaxLimitCalculator(Calculator):
    def add(self, val):
        self.value += val
        if self.value > 100:
            self.value = 100



cal = UpgradeCalculator()
cal.add(10)
cal.minus(7)

print(cal.value)

cal2 = MaxLimitCalculator()
cal2.add(50)
cal2.add(60)

print(cal2.value)

class Knight:

    def __init__(self,health,mana,armor):
        self.health = health
        self.mana = mana
        self.armor = armor

    def slash(self):
        print ('베기')

x = Knight(health=542.4, mana=210.3, armor=38)
print(x.health, x.mana, x.armor)
x.slash()
