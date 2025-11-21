 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 struct student
 {
    char name[100];
    int age;
    float marks;
 };

 void main()
 {
    struct student s1 ;
    strcpy(s1.name,"joey");
    s1.age = 17;
    s1.marks = 67.89;

    struct student s2 ;
    strcpy(s2.name,"raj");
    s2.age = 43;
    s2.marks = 56.56;

    struct student s3 = {"popoye",23,58.9};

    printf("%s ", s3.name);
    printf("%d ",s3.age);
    printf("%f", s3.marks);


 }