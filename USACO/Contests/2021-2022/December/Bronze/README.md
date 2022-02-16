# 2021 December Bronze Notes

## Problem 1. Lonely Photo

- Loop through every character (species) in the lineup
- For every character, find the number of lonely photos they are part of by checking both the left and right of that character.
- Combine both left and right photos by doing (left photos * right photos) + (left photos + right photos)
- Print out the sum of the results in the end.
- Be careful of overcounting and overlapping issues (which gave me a LOT of trouble), as they are likely to occur in this problem.
