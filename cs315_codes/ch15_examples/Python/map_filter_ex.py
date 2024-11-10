# execute in dijkstra as:
# python map_filter_ex.py

result = map(lambda x : x ** 3, [2, 4, 6, 8])
for x in result:
    print(x, end=', ')

print()
# prints       8, 64, 216, 512


x = [1,2,3,4]
y = [17,12,11,10]
result = map (lambda a,b: 2*a - b, x, y)
for x in result:
    print(x, end=', ')

print()
# prints      -15, -8, -5, -2,



fib = [0,1,1,2,3,5,8,13,21,34,55]
result = filter(lambda x: x % 2 == 0, fib)

for x in result:
    print(x, end=', ')

print()
# prints        0, 2, 8, 34, 

