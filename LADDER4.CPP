#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int k=101,h=80,g,t,c=0,d=0;
char name1[20],name2[20];
void ladder(int x,int d,int y,int z)
{ system("cls");
	k=101,h=80;
	printf("\t\t\t\t\tLadder & Snake Game");
    printf("\n\n");
    for(int i=0;i<10;i++)
     { for(int j=0;j<10;j++)
       { k--;
	     if(i%2==0)
	     { if(k==x)
	       { textbackground(z-2);
		     textcolor(y+1);
		    cprintf("( )");
		    if(k!=d)
		    printf("\t");
	       }
	       if(k==d)
	       { textbackground(z);
		     textcolor(y);
		    cprintf("( )");
		    printf("\t");
	       }
	       else if(k!=x&&k!=d)
	       {    if((i>=6&&j==4)||(i>=4&&i<=8&&j==2)||(i>=3&&i<=6&&j==7))
		    {textbackground(3);
		    textcolor(5);
		    cprintf("| %-2d |",k);
		    printf("\t");
		    }
		    else if(((i+1)==j&&i<=5)||((i+j)==15&&i>=6))
		    {textbackground(5);
		    textcolor(4);
		    cprintf("| %-2d |",k);
		    printf("\t");
		    }
		    else
		    printf("%d\t",k);
	       }
	      }
	      else
	       { g++;
		   if(g==x)
		   { textbackground(z-2);
		    textcolor(y+1);
		    cprintf("( )");
		    if(g!=d)
		    printf("\t");
		   }
		   if(g==d)
		   { textbackground(z);
		     textcolor(y);
		    cprintf("( )");
		    printf("\t");
		   }
		   else if(g!=x&&g!=d)
		   { if((i>=6&&j==4)||(i>=4&&i<=8&&j==2)||(i>=3&&i<=6&&j==7))
		     {textbackground(3);
		      textcolor(5);
		      cprintf("| %-2d |",g);
		      printf("\t");
		    }
		    else if(((i+1)==j&&i<=5)||((i+j)==15&&i>=6))
		    {textbackground(5);
		    textcolor(4);
		    cprintf("| %-2d |",g);
		    printf("\t");
		    }
		     else
		     printf("%d\t",g);
		   }

	     }
       } g=h;
	     h-=10;
     printf("\n");
     }
}

int main()
{   clrscr();
    printf("\t\t");
    textcolor(7);
    cprintf("LADDER & SNAKE GAME");
    printf("\n\n");
    textcolor(5);
    cprintf("\n\nEnter Player 1 name=");
    scanf("%s",&name1);
    printf("\n\n");
    textcolor(6);
    cprintf("\n\nEnter Player 2 name=");
    scanf("%s",&name2);
    start:
    ladder(c,d,0,4);
    textbackground(2);
    textcolor(5);
    cprintf("%s PRESS ANY KEY TO TOSS THE DICE...",name1);
	getch();
	srand(time(0));
	t=rand()%7;
	if(t==0)
	t=t+1;
	if(101>(c+t))
	c=c+t;
    printf("\nYOU GOT... %d",t);
	getch();
	ladder(c,d,0,4);
	if(c==100)
	{
	printf("\nCongrats!!! %s Won. ",name1);
	getch();
	exit(0);
	}
	if(c==5||c==18||c==33)
	{ if(c==5)
	  c=36;
	  else if(c==18)
	  c=58;
	  else if(c==33)
	  c=68;
	  printf("\nYOU GOT LADDER AND ANOTHER CHANCE ");
	  getch();
	  clrscr();
	  goto start;
	}
	if(t==6)
	{ printf("\nYOU GOT ANOTHER CHANCE");
	  getch();
	  clrscr();
	  goto start;
	}
    else if(c==99||c==31)
	{ if(c==99)
	  c=47;
	  else if(c==31)
	  c=7;
	  printf("\nO Oh  YOU HAVE BITTEN BY A SNAKE!!! ");
	  getch();
	}
	start1:
	clrscr();
	ladder(c,d,0,4);
	textcolor(6);
	textbackground(4);
    cprintf("%s PRESS ANY KEY TO TOSS THE DICE...",name2);
	getch();
	srand(time(0));
	t=rand()%7;
	if(t==0)
	t=t+1;
	if(101>(d+t))
	d=d+t;
	printf("\nYOU GOT... %d",t);
	getch();
	ladder(c,d,0,4);
	if(d==100)
	{
	printf("\nCongrats!!! %s Won. ",name2);
	getch();
	exit(0);
	}
	if(d==5||d==18||d==33)
	{ if(d==5)
	   d=36;
	  else if(d==18)
	  d=58;
	  else if(d==33)
	  d=68;
	  printf("\nYOU GOT LADDER AND ANOTHER CHANCE ");
	  getch();
	  clrscr();
	  goto start1;
	}
	else if(t==6)
	{ printf("\nYOU GOT ANOTHER CHANCE");
	  getch();
	goto start1;
	}
	else if(d==99||d==31)
	{ if(d==99)
	  d=47;
	  else if(d==31)
	  d=7;
	  printf("\nO Oh  YOU HAVE BITTEN BY A SNAKE!!! ");
	  getch();
	  clrscr();
	  goto start;
	}
	else
	goto start;
}
