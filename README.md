# bfcpu
Brainf*** CPU.
# Using
This CPU emulated with logisim program.
# Architecture
9 commands, 8 same brainfuck:

0      >

1      <

2      +

3      -

4      .

5      ,

6      [

7      ]

F   HALT
# BF2MC
Small program translates Brainfuck to Mashine code of this CPU.
## Building
`gcc -O2 -o bf2mc bf2mc.c`
## Using
`./bf2mc.c < file.bf > file.hex`
Then load hex file in the CPU'S ROM.
