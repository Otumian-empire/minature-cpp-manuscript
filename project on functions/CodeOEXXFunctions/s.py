'''
l = []
s = 0

for i in range(3, 100):
    if i % 3 == 0 or i % 5 == 0:
        s += i
        l.append(i)
    

#print(l, s)

print(sum(l), s)

print(sum([-21, 1, 9, 14, -4, -65, 43, 99, -41, 0]))

if False:
    print(False)

print(False and False)
'''

l = [
    21, 1, 9, 14, 4,
    65, 43, 99, 41, 0,
    56, 61, 23, 10, 11,
    27, 4, 1002, 30, 245
]

def sameparity(item=[]):
    l = 1

    if item:
        r = item[0] % 2

        for i in item[1:]:
            if i % 2 == r:
                l += 1

    return l
print(sameparity(l))

