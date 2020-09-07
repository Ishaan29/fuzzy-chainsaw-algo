# NOTES 
## __STRINGS__
* Continuous string combinations formula `n*(n+1)/2`.
* `strtok()` can be used to get `delimiter` seperated strings.

## __DYNAMIC PROGRAMMING__
* Use static allocation for dp grid. eg `static int dp[5001][5001];`
* General formula for n-steps problem `dp[i] = dp[i-1] + dp[i-2] + dp[i-3] + ...... + dp[i-n];`.
* The important point is that `top-down = recursive` and `bottom-up = iterative`.

## __BINARYSEARCH__
* Effective way to search in a sorted array. `O(log n)` time.
* Steps to solve Binary Search Problem.
** Find if the problem shows a monotonic nature.
*** MONOTONIC FUNCTIONS := Functions that are either non-increasing or non-decreasing.
** Find a Search Space. Mostly in problems the search space is not easly observable.
*** SEARCH SPACE := space of values where the function can be optimized.
*** search space should be monotonic to solve a problem using Binary Search.
* EX := Finding the root of the number, aggressive cow etc.

## __LINKEDLIST__

## __TREES__

## __GREEDY__

## __STACKS__

## __HASHMAP__

## __DICTIONARIES__

## __GRAPHS__

## __QUEUES__

## __BACKTRACKING__

## __RECURSION__

## __SORTING__

## __SEARCH__

## __MISCELLANEOUS__
