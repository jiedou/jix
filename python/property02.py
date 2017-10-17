class Test:
    def __init__(self,val=0):
        print("init")
        self.__val=val
    def get_val(self):
        print("get_val")
        return self.__val
    def set_val(self,val):
        print("set_val:",val)  ##属性val可以认为是私有变量的对外接口
        self.__val=val
    val=property(get_val,set_val)

a=Test()
a.val=1  #相当于调用 set_val
print(a.val) #相当于调用 get_val
