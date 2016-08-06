//
//  main.c
//  Fibonacci
//
//  Created by chenyufeng on 8/6/16.
//  Copyright © 2016 chenyufeng. All rights reserved.
//

// C语言实现斐波那契数列
// 0 1 1 2 3 5 8 13 21
#include <stdio.h>
#include <stdlib.h>

int Fibonacci(int num);

int main(int argc, const char * argv[])
{
    int index = Fibonacci(6);
    printf("%d ",index);
    return 0;
}

int Fibonacci(int num)
{
    // 递归结束条件
    if (num == 0)
    {
        return 0;
    }

    if (num == 1)
    {
        return 1;
    }

    return Fibonacci(num - 1) + Fibonacci(num - 2);
}
