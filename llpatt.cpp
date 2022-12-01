#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int c,r,i,j;
clrscr();
c=20;
r=5;
for(i=1;i<6;i++)
{
gotoxy(c,r);
printf("*");                           /*1*/
delay(100);
c++;
if(c>25)
break;
}
c=30;
r=5;
for(i=1;i<6;i++)
{
gotoxy(c,r);
printf("*");                           /*2*/
delay(100);
c++;
if(c>35)
break;
}

c=19;
r=6;
for(i=1;i<8;i++)                        /*3*/
{
gotoxy(c,r);
printf("*");
delay(100);
c++;
if(c>26)
break;
}
c=29;
r=6;
for(i=1;i<8;i++)                        /*4*/
{
gotoxy(c,r);
printf("*");
delay(100);
c++;
if(c>36)
break;
}
c=18;
r=7;
for(i=1;i<10;i++)                        /*5*/
{
gotoxy(c,r);
printf("*");
delay(100);
c++;
if(c>27)
break;
}
c=28;
r=7;
for(i=1;i<10;i++)                        /*6*/
{
gotoxy(c,r);
printf("*");
delay(100);
c++;
if(c>37)
break;
}

c=17;
r=8;
for(i=1;i<12;i++)                        /*7*/
{
gotoxy(c,r);
printf("*");
delay(100);
c++;
if(c>28)
break;
}
c=27;
r=8;
for(i=1;i<12;i++)                        /*8*/
{
gotoxy(c,r);
printf("*");
delay(100);
c++;
if(c>38)
break;
}
c=17;
r=9;
for(i=1;i<12;i++)                        /*9*/
{
gotoxy(c,r);
printf("*");
delay(100);
c++;
if(c>28)
break;
}
c=27;
r=9;
for(i=1;i<12;i++)                        /*10*/
{
gotoxy(c,r);
printf("*");
delay(100);
c++;
if(c>38)
break;
}
c=18;
r=10;
for(i=1;i<20;i++)                        /*11*/
{
gotoxy(c,r);
printf("*");
delay(100);
c++;
if(c>37)
break;
}
c=19;
r=11;
for(i=1;i<20;i++)                        /*12*/
{
gotoxy(c,r);
printf("*");
delay(100);
c++;
if(c>35)
break;
}
c=21;
r=12;
for(i=1;i<20;i++)
{
gotoxy(c,r);
printf("*");                           /*13*/
delay(100);
c++;
if(c>33)
break;
}
c=23;
r=13;
for(i=1;i<20;i++)
{
gotoxy(c,r);
printf("*");                           /*14*/
delay(100);
c++;
if(c>31)
break;
}
c=25;
r=14;
for(i=1;i<20;i++)
{
gotoxy(c,r);
printf("*");                           /*15*/
delay(100);
c++;
if(c>29)
break;
}
c=26;
r=15;
for(i=1;i<20;i++)
{
gotoxy(c,r);
printf("*");                           /*16*/
delay(100);
c++;
if(c>28)
break;
}
gotoxy(27,16);
printf("*");

getch();
}



