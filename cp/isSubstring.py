'''
leetcode problem: 392 isSubsequence
'''

import os
import sys

class solution:
    def isSubsequence(self, s: 'str', t: 'str') -> bool:
        M = len(s) 
        N = len(t) 
  
    # A loop to slide pat[] one by one  
         for i in range(N - M + 1): 
  
            # For current index i, 
            # check for pattern match  
            for j in range(M): 
                if (s[i + j] != s[j]): 
                 break
              
             if j + 1 == M : 
                return i 
  
         return -1




if __name__ == "__main__":
    s = 'abc'
    t = 'ahbgdc'
    result = isSubsequence(s,t)
    if(result == 1):
        print(true)
    else:
        print(false)
