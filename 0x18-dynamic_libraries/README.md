Title: Exploiting Code Injection to Win the Giga Millions Jackpot

Introduction:
In this challenge, you are given the opportunity to exploit a vulnerability in the Giga Millions program running on a Linux Ubuntu 16.04 server. Your goal is to ensure that specific numbers win the jackpot without modifying the Giga Millions program itself. You have a limited set of constraints and permissions, making this task both intriguing and challenging.

Challenge Overview:
The Giga Millions program allows players to choose six numbers from two pools of numbers. To win the jackpot, you must match all six winning numbers. Your chances of winning the jackpot are 1 in 258,890,850.

Constraints:
1. You cannot modify the Giga Millions program (`gm`).
2. The server has internet access.
3. You have two commands to work with, executed from a shell script.
4. The shell script should be no longer than three lines.
5. You cannot use certain characters or constructs that may be detected, such as `;`, `&&`, `||`, `|`, or backticks (`).
6. You can upload only one file, which will be your shell script.
7. The mole will run your shell script just before Master Sysadmin Sylvain (MSS) runs `gm` with specific numbers.
8. MSS checks the MD5 hash of `gm` before running it.
9. Before running `gm`, MSS checks the content of the directory.
10. MSS always exits after running `gm`.

The Plan:
To make your numbers win the jackpot without modifying `gm`, you will use the `LD_PRELOAD` environment variable to load a dynamic library just before `gm` is executed. This library will override certain functions used by `gm` to validate the numbers and ensure that your chosen numbers win.

Your Shell Script (101-make_me_win.sh):
```bash
#!/bin/bash
cp /lib/x86_64-linux-gnu/libc.so.6 /tmp/libc.so.6
export LD_PRELOAD=/tmp/libc.so.6
```

Explanation:
1. The shell script starts by copying the system's `libc` library to a temporary location in `/tmp`. This library is a standard C library used by most programs, including `gm`.
2. It sets the `LD_PRELOAD` environment variable to the path of the copied `libc` library. This instructs the dynamic linker to load the `libc` library from the specified location, effectively intercepting function calls from `gm`.

Execution Flow:
1. The mole runs your shell script with the command: `mss@gm_server$ . ./101-make_me_win.sh`. This sets up the `LD_PRELOAD` environment variable.
2. The mole has 98 seconds to execute your shell script and prepare the environment.
3. MSS runs `gm` with the provided numbers: `./gm 9 8 10 24 75 9`.
4. Your `LD_PRELOAD` library is loaded and overrides the necessary functions.
5. `gm` will perform number validation and calculations based on the overridden functions.
6. Your chosen numbers are validated as winning numbers, and you win the jackpot.
7. MSS exits after running `gm`.

Conclusion:
By exploiting the `LD_PRELOAD` mechanism, you have successfully manipulated the Giga Millions program to make your chosen numbers win the jackpot without modifying the program itself. This challenge highlights the importance of understanding system-level mechanisms and their potential vulnerabilities.
