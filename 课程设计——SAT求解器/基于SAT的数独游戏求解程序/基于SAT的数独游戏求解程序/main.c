//
//  main.c
//  基于SAT的数独游戏求解程序
//
//  Created by 王铭璇 on 2019/2/13.
//  Copyright © 2019 王铭璇. All rights reserved.
//
#include <stdlib.h>
#include <stdio.h>
#include "cnf.h"
#include "DPLL.h"
#include "Sudoku.h"

extern ArgueValue *ValueList;
extern Root *r;



int main(int argc, const char * argv[]) {
    int op=1;
    while (op) {
        system("clear");
        printf("------------------------WELCOME!-------------------------\n");
        printf("\t\tChoose a progame please.\n");
       // printf("---------------------------------------------------------\n");
        printf("\n");
        printf("   1.Sudoku                 2.SAT                0.exit\n");
        printf("---------------------------------------------------------\n");
        scanf("%d",&op);
        switch (op) {
            case 1:
                Sudoku();
                break;
            case 2:
                SAT();
                break;
            case 0:
                break;
            default:
                printf("输入错误！");
                getchar();getchar();
                break;
        }
    }
    return 0;
}
