 #include<stdio.h>
 int volume(int l, int b, int h)
 {
     int v=l*b*h;
     return v;
 }
 void main()
 {
     int l = 2;
     int b = 4;
     int h = 6;
     printf("volume is %d",volume (l,b,h));
 
 }