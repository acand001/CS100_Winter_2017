#!/bin/sh

#Change Path to loock for test.out
alias srcPath = "cd rshell/src"

srcPath

#Run Test File
./test.out


#Wait for a Prompt
expect "$ "

#Type Something
send "echo hello && echo world || echo test && echo a; echo me"

exit
