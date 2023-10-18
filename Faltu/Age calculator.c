 // Program to calculate the age taking input of current date and b'date


     #define anand main
    // #define sam gotoxy
    #include<windows.h>
     #include<stdio.h>
     #include<conio.h>
      void sam(int a,int b)
  {
      COORD m;
       m.X=a;
       m.Y=b;
       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),m);
  }
   void anand()
  {
       long int cy,cm,cd,y,m,d,td,tm,tw,ed=0,h=0,ly=0,ry=0,rm=0,rd=0,nd=0,nm=0;
	char a;
	/*
again: system("cls");textcolor(WHITE); printf("\n\n\t\t");
	cprintf("--------------------------------------------");printf("\n\t\t  ");
	cprintf("\" Do u want to use The age calculater \""); printf("\n\t\t");
	cprintf("---------------------------------------------"); printf("\n\t\t    ");
	cprintf("\"(y)\""  "  for yes \x3  " "\"(n)\""  " for exit \x1");printf("\n\t\t");
	cprintf("----------------------------------------------");printf("\n\t\t\t");
	cprintf("    your choice is (");
	scanf("%c",&a); sam(46,8); cprintf(")");  printf("\n\t\t");
	cprintf("-----------------------------------------------"); printf("\n\t\t\t ");
      //	printf("u press %c",a);

      if(isdigit(a))
       {   textcolor(RED+128);
	cprintf("\"pless select a charecter \x2 \"");
	 getch(); system("cls"); scanf("%c",&a);
	    goto again;
	}

   /*
     if(a!='Y'||'y'||'N'||'n')
       {
	 printf("hey chose""\ y\"" "  or  ""\ n\"");// printf("\n");
	      getch();  system("cls"); scanf("%c",&a);
		goto again;
	   }
	    */
	    /*

      if(a=='y')
      { printf("okey now we r starting age calculater \x3 "); printf("\n\t");
	 printf("press enter to go again \x3 ");
     //  getch();
     delay(2000);
      goto go;
      }
      else
      {     textcolor(GREEN);
	cprintf("----------------------");  printf("\n\t\t\t  ");
	cprintf("\"ok bye take care \x2\"");printf("\n\t\t\t ");
	cprintf("----------------------");
     delay(1000);
     //	getch();
	exit(0);
	}
	  */

	  // main program begines from here

  go:  system("cls"); printf("\n\t"); //textcolor(RED);
    //  printf("-------------------------------------------------------------\n");
    printf(" Enter current date in (dd,mm,yyyy) formate ");
    printf("\n");
    //  scanf("%ld%ld%ld",&cd,&cm,&cy);
    printf("----------------------------------------------------------------");
    printf("\n");
       a: sam(1,4); //textcolor(GREEN);
       printf(" Enter day = ");
	   scanf("%ld",&cd);

	if(cd>31)
	 {
	  // printf("\t pagal ho kya month me sirf 31 days hota hai \n ");
	     goto a;
	   }
      b: sam(20,4);
      printf("Enter month = ");
	   scanf("%ld",&cm);
       if(cm>12)
	{ // sam(20,4);
	  //printf("error");
	     goto b;
	  } //delay(500);
       c: sam(41,4);
      printf("Enter year = ");
	  scanf("%ld",&cy);
       if(cy<1900)
	{
	 // printf("error");
	      goto c;
	  }

       printf("----------------------------------------------------------------");
	 printf("\n\n\t");// textcolor(WHITE);
    printf(" Enter date of birth in (dd,mm,yyyy) formate");
       printf("\n");
      printf("----------------------------------------------------------------");
      printf("\n");
  d: sam(1,9); // textcolor(RED);
   printf(" Enter day=  ");
	scanf("%ld",&d);
     if(d>31)
      {
       //	printf("\t invalid day ");
	  goto d;
	  }
    e: sam(20,9);
      printf(" Enter month =  ");
	 scanf("%ld",&m);
      if(m>12)
       {
       //	printf("\t invalid month ");
	  goto e;
	  }
    f: sam(41,9);
      printf(" Enter year =  ");
	 scanf("%ld",&y);
       if(y<1900)
	{
	// printf("\t aazadi k pahele k hawa ka 1900\n");
	    goto f;
	    }
	    printf("----------------------------------------------------------------");
	// now the age calculating arithmatical operations begins

	if(cd<d)
	 {
	   cd=cd+30;
	   cm=cm-1;
	   }
	if(cm < m)
	 {
	   cm=cm+12;
	   cy=cy-1;
	   }

	rd=cd-d;// result day
	rm=cm-m;// result month
	ry=cy-y;// result year

       // Calculating the leap years faced in your age

	  while(cy>=y)
	   {
	     if(y%4==0)
	      {
		y=y+4;
		ly=ly+1;
		}
	     else
		{
		  y=y+1;
		  }
	      }
	// Calculating the total dayes,weaks,month and total hours

	ed=ry*7;
	tm=ry*12+rm;
	td=(ry*365)+(rm*30)+rd+ly+ed;
	tw=td/7;
	h=td*24;

	if(d<cd)
	 {
	    d=d+30;
	    m=m-1;
	    }
	 if(m<cm)
	 {
	 m=m+12;
	 }
       nd=30-rd;
       nm=m-cm;

      //	min=h*60;
       //	sec=min*60;
	printf("\n\n");

    printf(" your age is =----");
    printf("\n\n\t"); // textcolor(GREEN+WHITE+RED);
   printf("------------------------------------------------------------");
   printf("\n\t");
   printf(" years  months  days  t.months  t.weeks  t.days   t.hour ");
   printf("\n\t");
   printf("-------------------------------------------------------------");
   printf("\n\t");
   printf(" %ld     %ld       %ld     %ld      %ld       %ld    %ld ",ry,rm,rd,tm,tw,td,h);
   printf("\n\t");
   printf("-------------------------------------------------------------"); printf("\n\n\t");
//    printf("------------------------------------"); printf("\n\t");
//    printf(" total_hour  total_min.  total_sec ");printf("\n\t");
  //  printf("------------------------------------"); printf("\n\t");
    //printf("  %ld      %ld    %ld    ",h,min,sec); printf("\n\t");
 //   printf("------------------------------------"); printf("\n\t");


   printf("total leap year you have faced in your age = %ld",ly);printf("\n");
   printf("your next birthday is coming in %d month & %d  days \n",nm,nd);
   /*	getch();
      system("cls");

   printf("\"Do you want to use it again \"  ");
   printf("\" enter y for yes or n for no \""); //printf("\n\t");

	 scanf("%c",&a);

      printf("%c",a);
      */

   getch(); scanf("%c",&a);// goto again;
//   return 0;
   }



