# C commands

[book](http://cpp.com.ru/kr_cbook/ch1kr.html#p11)
[cs50 book](https://cdn.cs50.net/2015/fall/psets/1/hacker1/hacker1.html)

`clang --version`

///

`make hello` - compile file
`./hello` - run compiled file
`clang hello.c` - compile file without make (compiled file called `a.out`)
`clang -o hello ./hello.c` - compile source file to hello
`clang -S ./hello.c` - compile to assembler code

`hello.c` -> compile -> `hello.s` (assembler code) -> collected -> `hello.o`

`man srand` -> display info about command

`./a.out 1000 > numbers.txt` - send printf of function to txt file
`./a.out 42 < numbers.txt` - send file data as argument
`./generate 1000 50 | ./find 127` - run several commands
`echo $?` - display last command return value

<!--  -->

docker run --privileged -e "IP=127.0.0.1" -e "PORT=8080" --name ide50 -d -p 5050:5050 -p 8080-8082:8080-8082 cs50/ide

127.0.0.1:5050

docker start ide50

## libs

***ctype.h***

## debugger

`lldb ./c/cycleFor.c`
`quit` - quit
`run [args cli]` - run
`break [str number/function name]` - set breakpoint
`next` - next string, miss function;
`step` - next string, visit function is it exists;
`list` - display several string of code around breakpoint
`print [var]` - print variable
`info locals` - print all variables values inside cycle, functions etc
`display [vars]` - print variables values for each debug step
`help` - display list of commands

```lldb
gdb ./caesar
break main
run 13
print argc
```

шестнадцатеричного редактора командной строки, программы xxd. Чтобы его запустить, выполните команду: `xxd -c 24 -g 3 -s 54 smiley.bmp`

отобразить различие между файлами `diff smiley.bmp copy.bmp` . Если идентичны, ничего не выведет

`man you_command` - вывести информацию по команде

## memory leak

мы запрашивали у ОС память, но не освобождали ее

после завершения программы память автоматически очищается

`valgring --leak-check=full ./program` - инструмент для поиска утечек памяти в программах

<!--  -->

`nslookup google.com` - поиск ip по доменному имени
`traceroute google.com` - отследить маршрут
`traceroute -q 1 google.com` - отследить маршрут
