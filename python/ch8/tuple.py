#tuple 用小括號、不能更改
t1 = (1,2,3)
print(t1)
t2 = tuple([11,2,33]) # list 強轉 tuple
print(t2)
t2 = tuple('apple')
print(t2)


s1 = set ([x*2 for x in range(11)])
print(s1)
# set裡面放不重複數值
s2 = set('apple')
print(s2)