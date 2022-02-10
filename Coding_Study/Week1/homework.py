class Calculator:
    def __init__(self):
        self.countadd = 0
        self.countmin = 0
        self.countmul = 0
        self.countdiv = 0
    
    def Add(self,val1,val2):
        self.countadd += 1
        return val1+val2

    def Min(self,val1,val2):
        self.countmin += 1
        return val1-val2

    def Mul(self,val1,val2):
        self.countmul += 1
        return val1*val2

    def Div(self,val1,val2):
        self.countdiv += 1
        if val2 != 0:
            return val1/val2
        else:
            print ('분모가 0이네요..')
            pass

    def ShowCount(self):
        print("덧셈 :", self.countadd)
        print("뺄셈 :", self.countmin)
        print("곱셈 :", self.countmul)
        print("나눗셈 :", self.countdiv)


cal = Calculator()
print("10 + 20 = %s" %cal.Add(10,20))
print("10 - 20 = %s" %cal.Min(10,20))
print("10 * 20 = %s" %cal.Mul(10,20))
print("10 * 10 = %s" %cal.Mul(10,10))
cal.ShowCount()
# cal.Div(10,0)
# cal.ShowCount()
