README.md

carrie@ubuntu:~/making_change$ cat 0-main.py
#!/usr/bin/python3
"""
Main file for testing
"""

makeChange = __import__('0-making_change').makeChange

print(makeChange([1, 2, 25], 37))

print(makeChange([1256, 54, 48, 16, 102], 1453))

carrie@ubuntu:~/making_change$
carrie@ubuntu:~/making_change$ ./0-main.py
7
-1
carrie@ubuntu:~/making_change$