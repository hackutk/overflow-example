# Complex Buffer Overflow Exploit

An example buffer overflow exploit for getting a shell on the target system.

###Included files

- overflow.c: a vulnerable C program
- disable_aslr.sh: a shell script to temporarily disable ASLR
- exploit.py: a python program to generate the exploit payload
- makefile: compiles the program without standard exploitation protections

###Usage
```
./disable_aslr.sh           # temporarily disable ASLR
make                        # compile the program
python exploit.py           # generate the payload
cat payload - | ./overflow  # exploit the program
```
