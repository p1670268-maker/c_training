 //write a function which will accept 3 parameters l,b,h and return the volume of cube 
 #include<stdio.h>
 float volume(float l,float b,float h)
 {
    float v;
    v=l*b*h;
    return v;
    float main()
    {
        float l,b,h,v;
        printf("enter the lenght,breadth and height of the cube");
        scanf("%f%f%f",&l,&b,&h);
        v=v0lume(l,b,h);
        printf("the volume of the cube is %f",v);
        return 0;
    }
 }