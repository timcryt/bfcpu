# bfcpu
Brainf*** процессор.
# Использование
Этот Brainfuck процессор эмулируется с помощью программы Logisim.
# Архитектура 
Процессор содержит 8 команд, каждая состоит из кода и параметра, некоторые команды не используют свой параметр, но он все равно у них есть

Процессор содержит 2 регистра, регистр адресса A и регистр инсрукции I

0X      ADA X     (Прибавление X к регистру A)

1X      SBA X     (Вычитание X из регистра A)

2X      ADA [X]   (Прибавление X по адресу A)

3X      SBA [X]   (Вычитание X по адресу A)

4X      OUT       (Вывод)

5X      IN        (Ввод)

6X      JE X      (Переход на X если по адресу A 0)

7X      JNE X     (Переход на X если по адресу A не 0)

FX      HLT       (Конец программы)
# BF2MC
Маленькая программа, переводящая программу на Brainf*** в машинные коды процессора
## Компиляция
`gcc -O2 -o bf2mc bf2mc.c`
## Использование
`./bf2mc.c < file.bf > file.hex`

Файл file.hex будет содержать две строки, первая - инструкции, вторая - паараметры, их надо загрузить в соответствующие ПЗУ.
