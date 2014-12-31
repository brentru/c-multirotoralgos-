/*
The MIT License (MIT)

Copyright (c) 2015 Brent Rubell [Rubell Research Corp]

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//Finds center of thrust for multiple configurations of multrotors
int main()
{
    //decls
    double x1;
    double x2;
    double x3; // xaxis vars
    double x4;
    double y1;
    double ctx;
    double cty; // xaxis ct and yaxis ct
    printf("Multirotor Center of Thrust Calculator\n");
    printf("x1: ");
    scanf("%lf", &x1);
    printf("x2: ");
    scanf("%lf", &x2);
    printf("x3: ");
    scanf("%lf", &x3);
    printf("y: ");
    scanf("%lf", &y1);


    //math
    ctx = (((1 * 0) + (1 * x1) + (1 * x2) + (1 * x3)) / (4));
    cty = ((1 * y1) + (1 * y1) + (1 * 0) + (1 * 0)) / (4);
    printf("CTX=%lf mm\n", ctx);
    printf("CTY(Pitch Axis)=%lf mm\n", cty);
    printf("\tCTY is marked in the diagram below: \n");
    printf("\tMOT     MOT\n");
    printf("\t   HUB   \n");
    printf("\tMOT  X  MOT\n");


    return 0;
}
