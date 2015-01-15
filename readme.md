# C - Multirotor Algos

This repository contains algorithms adapted to the C language for rapid development of an ideal multirotor vehicle.

I like ideal solutions. The equations and algos used in these programs are for building an ideal quadcopter. I strongly encourage the use, modification, and adaptation of these for hobbyists and small companies (I'm sure larger companies already have rich simulations built)
  - multirotorcot.cpp: Used to find the center of thrust. Flight controllers can usually calculate the COT on their own. However, this is for an ideal quadcopter build.


![COT Calculator Output](http://i.gyazo.com/8df353041e137a7495f1687836205377.png)

### Running

You'll need GCC...or any compiler that can interpret and run a .C file
```sh
$ gcc multirotorcot.c
```


License
----

MIT

**Free Software, Hell Yeah!**


