#!/usr/bin/python3

lp = 0

for i in range(100, 1000):
    for j in range(100, 1000):
        p = i * j
        if str(p) == str(p)[::-1] and p > lp:
            lp = p

# Save the result in the file
with open("102-result", "w") as f:
    f.write(str(lp))
