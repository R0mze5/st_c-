# C++ commands

[book](http://cpp.com.ru/kr_cbook/ch1kr.html#p11)
[cs50 book](https://cdn.cs50.net/2015/fall/psets/1/hacker1/hacker1.html)

`clang --version`

///

`make hello` - compile file
`./hello` - run compiled file
`clang hello.c` - compile file without make (compiled file called `a.out`)
`clang -o hello ./hello.c` - compile source file to hello

<!--  -->

docker run --privileged -e "IP=127.0.0.1" -e "PORT=8080" --name ide50 -d -p 5050:5050 -p 8080-8082:8080-8082 cs50/ide

127.0.0.1:5050

docker start ide50

## libs

***ctype.h***
