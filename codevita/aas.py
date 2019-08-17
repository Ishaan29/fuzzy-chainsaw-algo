
import math
def cube(x):
    if 0<=x: return x**(1./3.)
    return -(-x)**(1./3.)

def findPath(n):
    ap = 19+3*math.sqrt(33)
    apc = cube(ap)
    an = 19-3*math.sqrt(33)
    anc = cube(an)
    b = cube(586+102*math.sqrt(33))

    x = 3*b/(b**2 - 2*b + 4)

    y = ((apc + anc + 1)/3)**n

    ans = x*y
    return ans

if __name__ == "__main__":
    n = int(input())
    print(int(findPath(n+1)))

