#!/usr/bin/python3
p = input('Password: ')
o = 'Zen of Python'
o = o + ' C'
o = o[1:3] + o[3] + o[14] + o[3] + o[7:9] + o[:6][::-1]
if p == o:
    print('OK')
else:
    print('KO')
