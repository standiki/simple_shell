# 0x16. C - Simple Shell

# Concepts

## Background Context
> Write a simple UNIX command interpreter.

## Learning Objectives
> At the end of this project, you are expected to be able to `explain to anyone`, **without the help of Google:**

## Learning Objectives
* Who designed and implemented the original Unix operating system
* Who wrote the first version of the UNIX shell
* Who invented the B programming language (the direct predecessor to the C programming language)
* Who is Ken Thompson
* How does a shell work
* What is a pid and a ppid
* How to manipulate the environment of the current process
* What is the difference between a function and a system call
* How to create processes
* What are the three prototypes of main
* How does the shell use the `PATH` to find the programs
* How to execute another program with the `execve` system call
* How to suspend the execution of a process until one of its children terminates
*What is `EOF` / “end-of-file”?

## Description


## Syntax


## Features

## Usage
* Enter custom shell by typing "./hsh". You should be prompted with the shell interface
* Type any valid commandof your choice and press "Enter"
* Appropriate output will appear
* Prompt reappears and awaits your next command
* To exit shell type  "exit" o "ctrl D"

## Compilation
> All files will be compiled this way
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh`