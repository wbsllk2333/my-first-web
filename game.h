 #include <stdio.h>
 #include<stdlib.h>
 #include<time.h>
 
void map(char wall[11][11],int r,int c,char d);

void printmap(char wall[11][11],int r,int c);

void setmines(char wall[11][11],int r,int c);

void openmines(char wall1[11][11], char wall2[11][11], int r, int c);
