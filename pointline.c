 void pointline (char *arr, int pointA, int pointB);
 // построение линии по двум точкам, заданным 
 // по координатам в одномерном массиве

int rUp(float d){
    int intd = (int)d;
    d -= intd;
    return d < 0.5 ? intd : ++intd ;
}

void pointline (char *arr, int pointA, int pointB) {
    
    
    int axPoint = 0;
    int bxPoint = 0;
    int ayPoint = 0;
    int byPoint = 0;

    if (pointA <=120) {
        ayPoint = 1;
        axPoint = pointA;
    }
    else {ayPoint = pointA/120;
        axPoint = pointA - ayPoint*120;
    }

    if (pointB <=120) {
        byPoint = 1;
        bxPoint = pointB;
    }
    else {byPoint = pointB/120;
        bxPoint = pointB - byPoint*120; 
    }

   // printf ("%d, %d, %d, %d \n", axPoint, ayPoint, bxPoint, byPoint);

    float k = (((float)byPoint-(float)ayPoint)/((float)bxPoint-(float)axPoint));
    float b = (float)ayPoint - (((float)byPoint-(float)ayPoint)/((float)bxPoint-(float)axPoint))*(float)axPoint;

   // printf("%f, %f \n", k, b);

    float nmodul = 0 > k >-1 ? -k : k;

    if (nmodul<=1) {
            int miny = ayPoint < byPoint ? ayPoint : byPoint;
            int maxy = ayPoint > byPoint ? ayPoint : byPoint;

        int NewPoint = (int)axPoint;

        for (int y = miny; y<=maxy; y++) {
            float xNewPoint = (y-b)/k;
            rUp (xNewPoint);
            int NewPoint = (int)xNewPoint+(int)y*120;
            arr[NewPoint] = '*';
        }
    }
   
    else if (axPoint==bxPoint) {
        int miny = ayPoint < byPoint ? ayPoint : byPoint;
        int maxy = ayPoint > byPoint ? ayPoint : byPoint;

        int NewPoint = (int)axPoint;

        for (int y = miny +1; y<=maxy; y++) {
            NewPoint = NewPoint + 120;
            arr[NewPoint] = '*';
        }
    }
    else {

        float minx = axPoint < bxPoint ? axPoint : bxPoint;
        float maxx = axPoint > bxPoint ? axPoint : bxPoint;

        if (ayPoint==byPoint) {
            for (int x=minx+1; x<maxx; x++){
                int NewPoint = x+ayPoint*120;
                arr[NewPoint] = '*';
            }

        } 
        else {
            //printf("%f, %f \n", k, b);
            for (float x = minx +1; x<maxx; x++) {
                float yNewPoint = k*x+b;
                rUp (yNewPoint);
                //printf ("%f, %f \n", x, yNewPoint);
                int NewPoint = (int)yNewPoint*120+(int)x;
                arr[NewPoint] = '*';
            }
        }    
    }
 
}