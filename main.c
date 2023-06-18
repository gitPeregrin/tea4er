//
//  main.c
//  tea4er
//
//  Created by Peregrin on 13.06.2023.
//

#include <stdio.h>
#include <math.h>

#define screenW 40

typedef struct {
    float x;
    float y;
} point;

int ROUND(float f){
    int intF = (int)f;
    f -= intF;
    return f < 0.5 ? intF : ++intF;
}

float mod(float f){
    return f < 0.0 ? -1.0 * f : f;
}

int getIndex(point p){
    return ROUND(p.x) + ROUND(p.y) * screenW;
}

void drawPoint(char * arr, point p, char sym){
    if( getIndex(p)%screenW != 0 ) arr[getIndex(p)] = sym;
}

void drawLine(char * arr, point p1, point p2, char sym){
    float k,b,dir;
    k = (p1.y - p2.y)/(p1.x - p2.x);
    b = p1.y - k * p1.x;
    
    if(mod(k) > 1){
        
        dir = p2.y - p1.y;;
        
        for(float j = 0; j< mod(dir); j++){
            float   y = p1.y + j * (dir<0 ? -1 : 1),
                    x = mod(k)!=INFINITY ? (y-b) / k : p1.x;
            point p = {x,y};
            drawPoint(arr, p, sym);
        }
        
    }else{
        
        dir = p2.x - p1.x;
        
        for(float i = 0; i< mod(dir); i++){
            float   x = p1.x + i * (dir<0 ? -1 : 1),
                    y = k * x + b;
            point p = {x,y};
            drawPoint(arr, p, sym);
        }
        
    }
    
}

int main(void) {

    point A = {3,3}, B = {19,3}, C = {19,19};           // точки треугольника
    
    const int size = screenW * (screenW/2) + 1;
    char screen[size] = {0};
    
    for(int i = 0; i < size-1; i++ ){
        screen[i] = i%screenW == 0 ? '\n' : '.';
    }
    
    drawLine(screen,A,B,'=');
    drawLine(screen,B,C,'&');
    drawLine(screen,C,A,'*');
    
    drawPoint(screen, A, 'A');
    drawPoint(screen, B, 'B');
    drawPoint(screen, C, 'C');
    
    puts(screen);
    
    return 0;
}
