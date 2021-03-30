####### Start of Template #######

from sys import stdin, stdout
from io import BytesIO, IOBase
# from time import perf_counter
# import collections
# import itertools
# import math
import os

#                                #
####### PyRival's Fast I/O #######
#                                #

BUFSIZE = 8192

class FastIO(IOBase):
    newlines = 0

    def __init__(self, file):
        self._fd = file.fileno()
        self.buffer = BytesIO()
        self.writable = "x" in file.mode or "r" not in file.mode
        self.write = self.buffer.write if self.writable else None

    def read(self):
        while True:
            b = os.read(self._fd, max(os.fstat(self._fd).st_size, BUFSIZE))
            if not b:
                break
            ptr = self.buffer.tell()
            self.buffer.seek(0, 2), self.buffer.write(b), self.buffer.seek(ptr)
        self.newlines = 0
        return self.buffer.read()

    def readline(self):
        while self.newlines == 0:
            b = os.read(self._fd, max(os.fstat(self._fd).st_size, BUFSIZE))
            self.newlines = b.count(b"\n") + (not b)
            ptr = self.buffer.tell()
            self.buffer.seek(0, 2), self.buffer.write(b), self.buffer.seek(ptr)
        self.newlines -= 1
        return self.buffer.readline()

    def flush(self):
        if self.writable:
            os.write(self._fd, self.buffer.getvalue())
            self.buffer.truncate(0), self.buffer.seek(0)

class IOWrapper(IOBase):
    def __init__(self, file):
        self.buffer = FastIO(file)
        self.flush = self.buffer.flush
        self.writable = self.buffer.writable
        self.write = lambda s: self.buffer.write(s.encode("ascii"))
        self.read = lambda: self.buffer.read().decode("ascii")
        self.readline = lambda: self.buffer.readline().decode("ascii")

#                                       #
####### End of PyRival's Fast I/O #######
#                                       #

stdin, stdout = IOWrapper(stdin), IOWrapper(stdout)

readlines = stdin.readlines
readline = stdin.readline
write = stdout.write

print = lambda output: write(str(output) + "\n")
input = lambda: readline().rstrip("\r\n")

m = map
l = list

intline = lambda: m(int, input().strip().split())
strline = lambda: input().strip().split()
strlines = lambda: l(m(lambda s: s.strip(), readlines()))
intput = lambda: int(input())

# start = perf_counter()

####### End of Template #######

def solve():
    n = intput()
    a = strlines()
    score = 0
    for x in range(1, len(a)):
        if (a[x] == a[x - 1]):
            score = score + 1
    print(score)

if __name__ == "__main__":
    solve()
