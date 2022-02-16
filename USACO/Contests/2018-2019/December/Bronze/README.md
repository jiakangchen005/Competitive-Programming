# 2018 December Bronze Notes

## Problem 1. Mixing Milk

- Simulate the mixing cycle for 100 times and print out the contents.

## Problem 2. The Bucket List

- Use an array of size 1000 to keep track of the buckets being used at the time intervals [1, 1000].
- Use memset to set all values to 0 in the array.
- For each cow, increment all values of the array in the range [s, t] by 1.
- Loop through the array to find and print the max value.

## Problem 3. Back and Forth

- Use two vectors to store buckets for each barn.
- Use recursion to generate all possible outcomes. The function takes in the barn of origin, destination, current tank volume, and day number.
- If the day is not Thursday (4), continue recursion.
- If the day is Thurday (4) add all the possible outcomes to a set.
- Print out the size of the set.
