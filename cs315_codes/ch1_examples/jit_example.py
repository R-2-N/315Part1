import time
from numba import jit

def foo (n):
    sum =0
    for i in range(n):
        sum +=i
    return sum

print("No JIT compilation")
start_time = time.time()
foo(1000000)
print(time.time()- start_time, "seconds")

@jit(nopython=True)
def foo_jit (n):
    sum =0
    for i in range(n):
        sum +=i
    return sum    

print("With JIT compilation")
print("first call:")
start_time = time.time()
foo_jit(1000000)
print(time.time()- start_time, "seconds")

print("second call:")
start_time = time.time()
foo_jit(1000000)
print(time.time()- start_time, "seconds")
