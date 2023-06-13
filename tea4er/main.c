//
//  main.c
//  tea4er
//
//  Created by Mike An on 13.06.2023.
//

#include <stdio.h>

int main(void) {
    int (* echo)(const char *) = puts;
    return echo("Hello, World!");
}
