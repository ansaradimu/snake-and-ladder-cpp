       // __________________THE 'SNAKE AND LADDER' GAME______________________
       /*        DEVOLEPED BY.........
	 *****************A N S A R.K . A************************************
	 /////////////////MAHARAJAS TECHNOLOGICAL INSTITUTE/////////////////
	 *****************THRISSUR*******************************************/

#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>
#include<time.h>
#include<process.h>
#include<stdlib.h>
#include<bios.h>
// Class to design the game board
class board
 { public:
	  void board_des(); // Function to draw the board
 }bd;
// Class to design snakes
class snake
 { public:
	  void snake_des();  // Function to draw the snakes
 }sn;
// Class to design the ladders
class ladder
 { public:
	  void ladder_des();  //Function to draw the ladders
 }la;
// Class to carry out the dice operations
class dice
 { public:
	  void dice_des();  // Function to control the dice operations
 }di;
// Class to control the movements of the players
class movements
 { public:
	  void move_f(int,int,int); // Function to control forward movements
	  void move_b(int,int,int); // Function to control backward movements
 }mv;
void players();     // Function to draw the player indicating rectangles
void winner(int);   // Function to design the final winner window
void menu_page();   // Function to design the menu window
void design();      // Function to design the first output window
int d,q=0,p=0,red=0,sel=0,r_five=0,b_five=0,r_four=0,b_four=0,r_three=0,b_three=0,r_two=0,b_two=0,r_one=0,b_one=0,countr=2,countb=2,s=0,t=0,blue=0,l=0,y=0,lr=31,x1=409,x2=65,yr=418,lb=30,yb=434,flag=0,select=1,sr,sb;
char pla1[20],pla2[20];
void main()
 { int gd=DETECT,gm; char st[10];
   initgraph(&gd,&gm,"c:\tc\bin");
   cleardevice();
   setcolor(5);
   design();
   cleardevice();
   menu_page();
   cleardevice();
   settextstyle(0,0,1);
   bd.board_des();
   la.ladder_des();
   sn.snake_des();
   players();
   di.dice_des();
 }
void ladder::ladder_des()
 {
  setlinestyle(0,1,3);
  setcolor(YELLOW);
  // Ladder from 3 to 25
  line(149,421,222,350);
  line(237,364,162,435);
  line(163,407,173,424);
  line(185,413,175,398);
  line(189,385,199,399);
  line(211,388,199,373);
  line(210,362,222,376);
  // Ladder from 27 to 57
  line(300,350,186,240);
  line(204,232,312,337);
  line(294,319,284,332);
  line(273,325,284,311);
  line(276,301,267,315);
  line(256,309,267,294);
  line(258,284,247,299);
  line(237,290,248,275);
  line(239,266,226,280);
  line(218,270,229,257);
  line(219,247,207,261);
  // Ladder from 41 to 78
  line(66,257,138,153);
  line(153,165,83,269);
  line(77,240,93,253);
  line(99,244,84,229);
  line(91,221,105,234);
  line(111,225,97,211);
  line(104,202,118,214);
  line(125,203,112,191);
  line(120,181,133,194);
  line(139,184,124,171);
  line(131,163,145,175);
  // Ladder from 75 to 97
  line(255,149,190,84);
  line(206,73,270,135);
  line(242,137,257,123);
  line(250,113,234,129);
  line(226,120,240,107);
  line(229,95,215,109);
  line(204,99,218,84);
  // Ladder from  68 to 91
  line(346,178,415,70);
  line(430,83,364,188);
  line(356,161,373,172);
  line(380,162,363,151);
  line(370,140,386,150);
  line(395,135,380,127);
  line(387,113,404,123);
  line(412,109,397,99);
  line(404,86,420,97);
  setlinestyle(0,1,1);
 }
void snake::snake_des()
 { // Snake from 84 to 43
   setcolor(BROWN);
   arc(200,140,110,250,50);
   arc(150,227,270,65,50);
   arc(200,140,110,250,40);
   arc(150,227,270,65,60);
   line(137,282,150,276);
   line(137,282,150,287);
   line(195,95,184,103);
   line(195,95,180,94);
   setfillstyle(9,BROWN);
   floodfill(161,162,BROWN);
   setcolor(RED);
   setfillstyle(1,RED);
   circle(179,100,3);
   floodfill(179,100,RED);
   // Snake from 94 to 6
   setcolor(YELLOW);
   setfillstyle(2,YELLOW);
   arc(500,140,160,203,200);
   arc(190,300,300,35,150);
   arc(500,140,160,203,190);
   arc(190,300,300,35,160);
   line(322,57,311,73);
   line(322,57,320,78);
   line(256,440,265,430);
   line(256,440,270,439);
   floodfill(311,193,YELLOW);
   setcolor(RED);
   setfillstyle(1,RED);
   circle(315,75,3);
   floodfill(315,75,RED);
   // Snake from 54 to 8
   setcolor(GREEN);
   setfillstyle(3,GREEN);
   arc(450,230,180,215,150);
   arc(155,420,360,33,200);
   arc(450,230,180,215,140);
   arc(155,420,360,33,210);
   line(303,215,310,231);
   line(303,215,299,231);
   line(358,439,364,418);
   line(358,439,355,418);
   floodfill(357,386,GREEN);
   setcolor(RED);
   setfillstyle(1,RED);
   circle(304,231,3);
   floodfill(304,231,RED);
   // Snake from 61 to 23
   setcolor(DARKGRAY);
   setfillstyle(4,DARKGRAY);
   arc(120,210,160,240,50);
   arc(0,370,370,53,150);
   arc(120,210,160,240,40);
   arc(0,370,370,53,160);
   line(86,176,81,198);
   line(86,176,72,194);
   line(155,365,157,341);
   line(155,365,147,343);
   circle(76,196,3);
   floodfill(114,265,DARKGRAY);
   setcolor(RED);
   setfillstyle(1,RED);
   circle(76,196,3);
   floodfill(76,196,RED);
   // Snake from 70 to 19
   setcolor(5);
   setfillstyle(5,5);
   arc(450,330,100,155,150);
   arc(125,200,265,-18,200);
   arc(450,330,100,155,140);
   arc(125,200,265,-18,210);
   line(440,184,423,192);
   line(440,184,421,182);
   line(93,384,108,399);
   line(93,384,108,408);
   circle(421,187,3);
   floodfill(353,223,5);
   setcolor(RED);
   setfillstyle(1,RED);
   circle(421,187,3);
   floodfill(421,187,RED);

   bd.board_des();
 }
void players()
 { // Code to draw the RED player
   setcolor(RED);
   setfillstyle(1,RED);
   rectangle(31,418,45,430);
   floodfill(32,419,RED);
   // Code to draw the BLUE player
   setcolor(BLUE);
   setfillstyle(1,BLUE);
   rectangle(30,434,44,446);
   floodfill(31,435,BLUE);
 }
void dice::dice_des()
 {
   int k;
   char a,ms=' ';
   // Code to draw the dice
   setcolor(WHITE);
   setfillstyle(1,WHITE);
   rectangle(485,325,610,430);
   floodfill(486,326,WHITE);
   setcolor(BLACK);
     for(;;)
       {
	 randomize();
	 label:
	   if(ms==' ')       //Codes to controll the players
	     {
	       d=(rand() % 6)+1;
	       select++;
		 if(sel==1)
		   {
		     select--;
		     sel=0;
		   }
		if(d==6)
		     sel=1;
	     }
	   if(select%2==0&&ms==' ')
	     {
	       setcolor(GREEN);
	       outtextxy(100,20,"TURN OF ");
	       outtextxy(160,20,pla1);
	       setcolor(BLACK);
	       outtextxy(100,30,"TURN OF ");
	       outtextxy(160,30,pla2);
	     }
	      else if(select%2!=0&&ms==' ')
		 {
		   setcolor(BLACK);
		   outtextxy(100,20,"TURN OF ");
		   outtextxy(160,20,pla1);
		   setcolor(GREEN);
		   outtextxy(100,30,"TURN OF ");
		   outtextxy(160,30,pla2);
		 }
		   a=getch();
		   ms=a;
		     if(a==0x1b)
			{
			  exi:setcolor(RED);
			  outtextxy(100,455,"Do you want to quit the game ? Y-yes, N-no");
			  char ex=getch();
			     if(ex=='y' || ex=='Y')
				exit(0);
				 else if(ex=='n'||ex=='N')
				    {
				      setcolor(getbkcolor());
				      outtextxy(100,455,"Do you want to quit the game ? Y-yes, N-no");
				    }
			 else
			   goto exi;
			}
			    setcolor(BLACK);
			    setfillstyle(1,BLACK);
			      if(a==' ')
				 {
				   switch(d)
				      { case 1:if(select%2==0)
						red=1;
					       if(select%2!=0)
						blue=1;
					       rectangle(550,365,563,378);
					       floodfill(551,366,BLACK);
					       delay(2000);
					       setcolor(WHITE);
					       setfillstyle(1,WHITE);
					       floodfill(551,366,WHITE);
					       rectangle(550,365,563,378);
					       if(select%2==0)
						  {
						    if((yr+countr)%2==0)
						       {
							 labels1:
							 mv.move_f(lr,yr,4);
							    if(p==d)
							      {
								p=0;
								goto label;
							      }
						       }
						   if((yr+countr)%2!=0)
						       {
							 mv.move_b(lr,yr,4);
							 if(p==d)
							   {
							     p=0;
							     goto label;
							   }
							     else if(l<65&&p!=d)
								goto labels1;
							 }
						  }
						    else
						       {
							 if((yb+countb)%2==0)
							    {
							      labelp2: mv.move_f(lb,yb,1);
							      if(p==d)
								{
								  p=0;
								  goto label;
								}
							    }
							 if((yb+countb)%2!=0)
							    {
							      mv.move_b(lb,yb,1);
							      if(p==d)
								{
								  p=0;
								  goto label;
								}
								else if(l<65&&p!=d)
								   goto labelp2;
							    }
						       }
								   goto label;
					case 2:
						rectangle(513,347,526,360);
						rectangle(570,395,583,408);
						floodfill(514,348,BLACK);
						floodfill(571,396,BLACK);
						delay(2000);
						setcolor(WHITE);
						setfillstyle(1,WHITE);
						rectangle(513,347,526,360);
						rectangle(570,395,583,408);
						floodfill(514,348,WHITE);
						floodfill(571,396,WHITE);
						if((select%2)==0&&r_one==1&&d>1)
						    goto label;
						if((select%2)==1&&b_one==1&&d>1)
						    goto label;
						if(select%2==0)
						   {
							if((yr+countr)%2==0)
							   {
							       labels2:
							       mv.move_f(lr,yr,4);
								 if(p==d)
								    {
								       p=0;
								       goto label;
								    }
							   }
							if((yr+countr)%2!=0)
							   {
							       mv.move_b(lr,yr,4);
							       if(p==d)
								 {
								    p=0;
								    goto label;
								 }
								 else if(l<65&&p!=d)
								     goto labels2;
							   }
						   }
						   else
						     {
						       if((yb+countb)%2==0)
							  {
							     label3:
							     mv.move_f(lb,yb,1);
								if(p==d)
								  {
								    p=0;
								    goto label;
								  }
							  }
						      if((yb+countb)%2!=0)
							  {
							      mv.move_b(lb,yb,1);
								if(p==d)
								   {
								     p=0;
								     goto label;
								   }
								  else if(l<65&&p!=d)
								     goto label3;
							  }
						     }
						       goto label;
					case 3:
					       rectangle(500,340,513,353);
					       rectangle(580,340,593,353);
					       rectangle(545,395,558,408);
					       floodfill(501,341,BLACK);
					       floodfill(581,341,BLACK);
					       floodfill(546,396,BLACK);
					       delay(2000);
					       setcolor(WHITE);
					       setfillstyle(1,WHITE);
					       rectangle(500,340,513,353);
					       rectangle(580,340,593,353);
					       rectangle(545,395,558,408);
					       floodfill(501,341,WHITE);
					       floodfill(581,341,WHITE);
					       floodfill(546,396,WHITE);
						if((select%2)==0&&r_one==1&&d>1)
						   goto label;
						if((select%2)==1&&b_one==1&&d>1)
						   goto label;
						if((select%2)==0&&r_two==1&&d>2)
						   goto label;
						if((select%2)==1&&b_two==1&&d>2)
						   goto label;
						    if(select%2==0)
							{
							   if((yr+countr)%2==0)
							      {
								labels3:
								mv.move_f(lr,yr,4);
								 if(p==d)
								    {
								      p=0;
								      goto label;
								    }
							      }
							   if((yr+countr)%2!=0)
							      {
								mv.move_b(lr,yr,4);
								 if(p==d)
								   {
								     p=0;
								     goto label;
								   }
								    else if(l<65&&p!=d)
								       goto labels3;
							      }
							}
							  else
							    {
							     if((yb+countb)%2==0)
								{
								  label4:
								  mv.move_f(lb,yb,1);
								    if(p==d)
								       {
									p=0;
									goto label;
								       }
								}
							     if((yb+countb)%2!=0)
								{
								  mv.move_b(lb,yb,1);
								    if(p==d)
								       {
									p=0;
									goto label;
								       }
									else if(l<65&&p!=d)
									   goto label4;
								}
							    }
								goto label;
					case 4:
					       rectangle(500,340,513,353);
					       rectangle(580,340,593,353);
					       rectangle(500,400,513,413);
					       rectangle(580,400,593,413);
					       floodfill(501,341,BLACK);
					       floodfill(581,341,BLACK);
					       floodfill(501,401,BLACK);
					       floodfill(581,401,BLACK);
					       delay(2000);
					       setcolor(WHITE);
					       setfillstyle(1,WHITE);
					       rectangle(500,340,513,353);
					       rectangle(580,340,593,353);
					       rectangle(500,400,513,413);
					       rectangle(580,400,593,413);
					       floodfill(501,341,WHITE);
					       floodfill(581,341,WHITE);
					       floodfill(501,401,WHITE);
					       floodfill(581,401,WHITE);
						if((select%2)==0&&r_one==1&&d>1)
						    goto label;
						if((select%2)==1&&b_one==1&&d>1)
						    goto label;
						if((select%2)==0&&r_two==1&&d>2)
						    goto label;
						if((select%2)==1&&b_two==1&&d>2)
						    goto label;
						if((select%2)==0&&r_three==1&&d>3)
						    goto label;
						if((select%2)==1&&b_three==1&&d>3)
						    goto label;
						    if(select%2==0)
							{
							  if((yr+countr)%2==0)
							    {
							       labels4:
							       mv.move_f(lr,yr,4);
								if(p==d)
								  {
								    p=0;
								    goto label;
								  }
							    }
							 if((yr+countr)%2!=0)
							    {
							       mv.move_b(lr,yr,4);
								if(p==d)
								  {
								    p=0;
								    goto label;
								  }
								  else if(l<65&&p!=d)
								      goto labels4;
							    }
							}
							 else
							   {
							     if((yb+countb)%2==0)
								{
								   label5:
								   mv.move_f(lb,yb,1);
								     if(p==d)
									{
									  p=0;
									  goto label;
									}
								}
							     if((yb+countb)%2!=0)
								{
								   mv.move_b(lb,yb,1);
								     if(p==d)
									{
									  p=0;
									  goto label;
									}
									else if(l<65&&p!=d)
									    goto label5;
								}
							   }
							       goto label;
					case 5:
						rectangle(500,340,513,353);
						rectangle(580,340,593,353);
						rectangle(500,400,513,413);
						rectangle(580,400,593,413);
						rectangle(540,370,553,383);
						floodfill(501,341,BLACK);
						floodfill(581,341,BLACK);
						floodfill(501,401,BLACK);
						floodfill(581,401,BLACK);
						floodfill(541,371,BLACK);
						delay(2000);
						setcolor(WHITE);
						setfillstyle(1,WHITE);
						rectangle(500,340,513,353);
						rectangle(580,340,593,353);
						rectangle(500,400,513,413);
						rectangle(580,400,593,413);
						rectangle(540,370,553,383);
						floodfill(501,341,WHITE);
						floodfill(581,341,WHITE);
						floodfill(501,401,WHITE);
						floodfill(581,401,WHITE);
						floodfill(541,371,WHITE);
						 if((select%2)==0&&r_one==1&&d>1)
						    goto label;
						 if((select%2)==1&&b_one==1&&d>1)
						    goto label;
						 if((select%2)==0&&r_two==1&&d>2)
						    goto label;
						 if((select%2)==1&&b_two==1&&d>2)
						    goto label;
						 if((select%2)==0&&r_three==1&&d>3)
						    goto label;
						 if((select%2)==1&&b_three==1&&d>3)
						    goto label;
						 if((select%2)==0&&r_four==1&&d>4)
						    goto label;
						 if((select%2)==1&&b_four==1&&d>4)
						    goto label;
						    if(select%2==0)
							{
							    if((yr+countr)%2==0)
								{
								   labels5:
								   mv.move_f(lr,yr,4);
								     if(p==d)
									{
									  p=0;
									  goto label;
									}
								}
							    if((yr+countr)%2!=0)
								{
								   mv.move_b(lr,yr,4);
								     if(p==d)
									{
									  p=0;
									  goto label;
									}
									else if(l<65&&p!=d)
									    goto labels5;
								}
						    }
							else
							   {
							     if((yb+countb)%2==0)
								{
								   label6:
								   mv.move_f(lb,yb,1);
								     if(p==d)
									{
									  p=0;
									  goto label;
									}
								}
							     if((yb+countb)%2!=0)
								{
								   mv.move_b(lb,yb,1);
								     if(p==d)
									{
									  p=0;
									  goto label;
									}
									else if(l<65&&p!=d)
									    goto label6;
								}
							   }
								goto label;
					case 6:
						rectangle(500,340,513,353);
						rectangle(580,340,593,353);
						rectangle(500,400,513,413);
						rectangle(580,400,593,413);
						rectangle(500,370,513,383);
						rectangle(580,370,593,383);
						floodfill(501,341,BLACK);
						floodfill(581,341,BLACK);
						floodfill(501,401,BLACK);
						floodfill(581,401,BLACK);
						floodfill(501,371,BLACK);
						floodfill(581,371,BLACK);
						delay(2000);
						setcolor(WHITE);
						setfillstyle(1,WHITE);
						rectangle(500,340,513,353);
						rectangle(580,340,593,353);
						rectangle(500,400,513,413);
						rectangle(580,400,593,413);
						rectangle(500,370,513,383);
						rectangle(580,370,593,383);
						floodfill(501,341,WHITE);
						floodfill(581,341,WHITE);
						floodfill(501,401,WHITE);
						floodfill(581,401,WHITE);
						floodfill(501,371,WHITE);
						floodfill(581,371,WHITE);
						if((select%2)==0&&r_one==1&&d>1)
						    goto label;
						if((select%2)==1&&b_one==1&&d>1)
						    goto label;
						if((select%2)==0&&r_two==1&&d>2)
						    goto label;
						if((select%2)==1&&b_two==1&&d>2)
						    goto label;
						if((select%2)==0&&r_three==1&&d>3)
						    goto label;
						if((select%2)==1&&b_three==1&&d>3)
						    goto label;
						if((select%2)==0&&r_four==1&&d>4)
						    goto label;
						if((select%2)==1&&b_four==1&&d>4)
						    goto label;
						if((select%2)==0&&r_five==1&&d>5)
						    goto label;
						if((select%2)==1&&b_five==1&&d>5)
						    goto label;
						     if(select%2==0)
							{
							   if((yr+countr)%2==0)
							       {
								  labels6:
								  mv.move_f(lr,yr,4);
								     if(p==d)
									{
									  p=0;
									  goto label;
									}
								}
							   if((yr+countr)%2!=0)
								{
								   mv.move_b(lr,yr,4);
								     if(p==d)
									{
									  p=0;
									  goto label;
									}
									else if(l<65&&p!=d)
									    goto labels6;
								}
						    }
							else
							   {
							     if((yb+countb)%2==0)
								{
								   label7:
								   mv.move_f(lb,yb,1);
								      if(p==d)
									{
									  p=0;
									  goto label;
									}
								}
							     if((yb+countb)%2!=0)
								{
								   mv.move_b(lb,yb,1);
								      if(p==d)
									{
									  p=0;
									  goto label;
									}
									else if(l<65&&p!=d)
									    goto label7;
								}
							   }
								goto label;
			}
	       }
       }
 }
void movements::move_f(int vx,int vy,int color)
 {
   int col; l=vx; y=vy; col=color;
      if((red==1&&col==4)||(blue==1&&col==1))
	 {
	   if(col==RED&&sr==1)
	     {
	       y=yr+40;
	       l+=40;
	       setcolor(BLACK);
	       setfillstyle(1,BLACK);
	       rectangle(l,y,l+14,y+12);
	       floodfill(l+1,y+1,BLACK);
	       y-=40;sr=0;l-=40;
	     }
	    if(col==BLUE&&sb==1)
	     {
	       y=yb+40;
	       l+=40;
	       setcolor(BLACK);
	       setfillstyle(1,BLACK);
	       rectangle(l,y,l+14,y+12);
	       floodfill(l+1,y+1,BLACK);
	       y-=40;sb=0;l-=40;
	     }
	       s=0;
	       step1:
	       for(p,l;p<d&&l<=x1;l+=40,p++)
		  {
		    delay(100);
		    setcolor(BLACK);
		    setfillstyle(1,BLACK);
		    rectangle(l,y,l+14,y+12);
		    floodfill(l+1,y+1,BLACK);
		    la.ladder_des();
		    sn.snake_des();
		    bd.board_des();
		    delay(500);
		    setcolor(col);
		    setfillstyle(1,col);
		    rectangle(l+40,y,l+54,y+12);
		    floodfill(l+41,y+1,col);
		  }
	       if(l>409)
		 {
		   delay(1000);
		    if(p!=d)
		      {
			setcolor(BLACK);
			setfillstyle(1,BLACK);
			rectangle(l,y,l+14,y+12);
			floodfill(l+1,y+1,BLACK);
			la.ladder_des();
			sn.snake_des();
			bd.board_des();
			y-=40;
			  if(col==RED)
			     countr++;
			    else
			       countb++;
		      }
	 }
		//Codes for moving through snakes and ladders
			     // Ladder from 3 to 25
	     if(l>=133&&l<=168&&y>411&&y<447)
	       {
		 sel=1;
		 delay(1000);
		 setcolor(BLACK);
		 setfillstyle(1,BLACK);
		 rectangle(l,y,l+14,y+12);
		 floodfill(l+1,y+1,BLACK);
		 la.ladder_des();
		 sn.snake_des();
		 bd.board_des();
		 delay(1000);
		   if(col==RED)
		      {l=231;y=338;countr+=2;}
		       else
			   {l=230;y=354;countb+=2;}
			    setcolor(col);
			    setfillstyle(1,col);
			    rectangle(l,y,l+14,y+12);
			    floodfill(l+1,y+1,col);
			    la.ladder_des();
			    sn.snake_des();
			    bd.board_des();
	       }
	     // Ladder from 27 to 57
	     if(l>=291&&l<=326&&y>331&&y<368)
	      {  sel=1;
		 delay(1000);
		 setcolor(BLACK);
		 setfillstyle(1,BLACK);
		 rectangle(l,y,l+14,y+12);
		 floodfill(l+1,y+1,BLACK);
		 la.ladder_des();
		 sn.snake_des();
		 bd.board_des();
		 delay(1000);
		 if(col==RED)
		   {l=191;y=218;countr+=3;}
		 else
		   {l=190;y=234;countb+=3;}
		    setcolor(col);
		    setfillstyle(1,col);
		    rectangle(l,y,l+14,y+12);
		    floodfill(l+1,y+1,col);l-=40;
		    la.ladder_des();
		    sn.snake_des();
		    bd.board_des();
	      }
	      //Ladder from 41 to 78
	     if(l>=52&&l<86&&y>250&&y<287)
	      { sel=1;
		delay(500);
		setcolor(BLACK);
		setfillstyle(1,BLACK);
		rectangle(l,y,l+14,y+12);
		floodfill(l+1,y+1,BLACK);
		la.ladder_des();
		sn.snake_des();
		bd.board_des();
		if(col==RED)
		   { l=151;y=138;countr+=3;}
		else
		   { l=150;y=154;countb+=3;}
		    delay(1000);
		    setcolor(col);
		    setfillstyle(1,col);
		    rectangle(l,y,l+14,y+12);
		    floodfill(l+1,y+1,col);l-=40;
		    la.ladder_des();
		    sn.snake_des();
		    bd.board_des();
	      }
	      //Ladder from 68 to 91
	     if(l>=330&&l<=370&&y>=170&&y<=210)
	      { sel=1;
		delay(500);
		setcolor(BLACK);
		setfillstyle(1,BLACK);
		rectangle(l,y,l+14,y+12);
		floodfill(l+1,y+1,BLACK);
		la.ladder_des();
		sn.snake_des();
		bd.board_des();
		delay(1000);
		if(col==RED)
		  { l=431;y=58;countr+=3;}
		else
		  { l=430;y=74;countb+=3;}
		   setcolor(col);
		   setfillstyle(1,col);
		   rectangle(l,y,l+14,y+12);
		   floodfill(l+1,y+1,col); l-=40;
		   la.ladder_des();
		   sn.snake_des();
		   bd.board_des();
	      }
	     //Snake movements
	     //Snake from 70 to 19
	     if(l>=410&&l<=450&&y>=170&&y<=210)
	      { delay(500);
		setcolor(BLACK);
		setfillstyle(1,BLACK);
		rectangle(l,y,l+14,y+12);
		floodfill(l+1,y+1,BLACK);
		la.ladder_des();
		sn.snake_des();
		bd.board_des();
		delay(1000);
		if(col==RED)
		   { l=111;y=378;countr+=3;}
		else
		   { l=110;y=394;countb+=3;}
		setcolor(col);
		setfillstyle(1,col);
		rectangle(l,y,l+14,y+12);
		floodfill(l+1,y+1,col); l-=40;
		la.ladder_des();
		sn.snake_des();
		bd.board_des();
	      }
	     // Snake from 61 to 23
	     if(l>=50&&l<=90&&y>=170&&y<=210)
	      { delay(500);
		setcolor(BLACK);
		setfillstyle(1,BLACK);
		rectangle(l,y,l+14,y+12);
		floodfill(l+1,y+1,BLACK);
		la.ladder_des();
		sn.snake_des();
		bd.board_des();
		delay(1000);
		if(col==RED)
		   { l=151;y=338;countr+=2;}
		else
		   { l=150;y=354;countb+=2;}
		setcolor(col);
		setfillstyle(1,col);
		rectangle(l,y,l+14,y+12);
		floodfill(l+1,y+1,col);
		la.ladder_des();
		sn.snake_des();
		bd.board_des();
	      }
	      //Snake from 84 to 43
	     if(l>=170&&l<=210&&y>=90&&y<=130)
	      { delay(500);
		setcolor(BLACK);
		setfillstyle(1,BLACK);
		rectangle(l,y,l+14,y+12);
		floodfill(l+1,y+1,BLACK);
		la.ladder_des();
		sn.snake_des();
		bd.board_des();
		delay(1000);
		if(col==RED)
		   { l=151;y=258;countr+=2;}
		else
		   { l=150;y=274;countb+=2;}
		setcolor(col);
		setfillstyle(1,col);
		rectangle(l,y,l+14,y+12);
		floodfill(l+1,y+1,col);
		la.ladder_des();
		sn.snake_des();
		bd.board_des();
	      }
	     if(select%2==0)
	      { lr=l;yr=y;}
	     else
	      { lb=l;yb=y;}
     }
 }
 // Function to controll the backward movements of the players
void movements::move_b(int vx,int vy,int color)
 {
   s=1; l=vx; y=vy;
   int col=color;
   if(col==RED)
     sr=1;
      else
	sb=1;
	step1:
	for(p,l;p<d&&l>=65;l-=40,p++)
	   {
	     delay(100);
	     l+=40;
	     setcolor(BLACK);
	     setfillstyle(1,BLACK);
	     rectangle(l,y,l+14,y+12);
	     floodfill(l+1,y+1,BLACK);
	     l-=40;
	     setcolor(col);
	     setfillstyle(1,col);
	     rectangle(l,y,l+14,y+12);
	     floodfill(l+1,y+1,col);
	     la.ladder_des();
	     sn.snake_des();
	     bd.board_des();
	     delay(500);
	       if(p!=(d-1))
		 {
		   setcolor(BLACK);
		   setfillstyle(1,BLACK);
		   rectangle(l,y,l+14,y+12);
		   floodfill(l+1,y+1,BLACK);

		 }
	   }
	      //Ladder movements
	    if(l<=250&&l>=210&&y>=130&&y<=170)
		{
		  sel=1;
		  delay(1000); l+=40;
		  setcolor(BLACK);
		  setfillstyle(1,BLACK);
		  rectangle(l,y,l+14,y+12);
		  floodfill(l+1,y+1,BLACK);
		  bd.board_des();
		  la.ladder_des();
		  sn.snake_des();
		  delay(1000);
		    if(col==RED)
		       {l=191;y=58;countr+=2;}
		      else
			{ l=190;y=74;countb+=2;}
		  setcolor(col);
		  setfillstyle(1,col);
		  rectangle(l,y,l+14,y+12);
		  floodfill(l+1,y+1,col);l-=40;
		  bd.board_des();
		  la.ladder_des();
		  sn.snake_des();
		}
	     //Snake from 54 to 8
	    if(l<=290&&l>=250&&y>=210&&y<=250)
	      { delay(1000); l+=40;
		setcolor(BLACK);
		setfillstyle(1,BLACK);
		rectangle(l,y,l+14,y+12);
		floodfill(l+1,y+1,BLACK);l-=40;
		bd.board_des();
		la.ladder_des();
		sn.snake_des();
		delay(1000);
		if(col==RED)
		   { l=351;y=418;}
		else
		   { l=350;y=434;}
		setcolor(col);
		setfillstyle(1,col);
		rectangle(l,y,l+14,y+12);
		floodfill(l+1,y+1,col);
		if(col==RED)
		   countr++;
		else
		   countb++;
		bd.board_des();
		la.ladder_des();
		sn.snake_des();
	      }
	      //Snake from 94 to 6
	     if(l<=290&&l>=250&&y>=50&&y<=90)
	      { delay(1000); l+=40;
		setcolor(BLACK);
		setfillstyle(1,BLACK);
		rectangle(l,y,l+14,y+12);
		floodfill(l+1,y+1,BLACK);l-=40;
		bd.board_des();
		la.ladder_des();
		sn.snake_des();
		delay(1000);
		if(col==RED)
		   { l=271;y=418;}
		else
		   { l=270;y=434;}
		setcolor(col);
		setfillstyle(1,col);
		rectangle(l,y,l+14,y+12);
		floodfill(l+1,y+1,col);
		if(col==RED)
		   countr++;
		else
		   countb++;
		bd.board_des();
		la.ladder_des();
		sn.snake_des();
	      }
	     if(l<65)
	       {
		 y-=40;
		 if(col==RED)
		   { countr++;}
		 else
		   { countb++;}
	       }
	    if(select%2==0)
	      { lr=l;yr=y;}
	     else
	      { lb=l;yb=y;}
	     if(l>=210&&l<=250&&y>=50&&y<=90)
	       { if(col==RED)
		   r_five=1;
		 else
		   b_five=1;
	       }
	     if(l>=170&&l<=210&&y>=50&&y<=90)
	       { if(col==RED)
		   r_four=1;
		 else
		   b_four=1;
	       }
	     if(l>=130&&l<=170&&y>=50&&y<=90)
	       { if(col==RED)
		   r_three=1;
		 else
		   b_three=1;
	       }
	     if(l>=90&&l<=130&&y>=50&&y<=90)
	       { if(col==RED)
		   r_two=1;
		 else
		   b_two=1;
	       }
	     if(l>=30&&l<=70&&y>=50&&y<=90)
	       { if(col==RED)
		   r_one=1;
		 else
		   b_one=1;
	       }
	      if(l>=10&&l<=50&&y>=10&&y<=50)
		{
		  if(col==RED)
		   winner(RED);
		  else
		   winner(BLUE);
		}
 }
void board::board_des()
 {
   int i,j,b=1;
   char s[5];
   setlinestyle(0,1,1);
   setcolor(RED);
   setfillstyle(1,RED);
   rectangle(500,200,515,215);
   floodfill(501,201,RED);
   setcolor(BLUE);
   setfillstyle(1,BLUE);
   rectangle(500,230,515,245);
   floodfill(501,231,BLUE);
   setcolor(2);
   outtextxy(520,207,pla1);
   outtextxy(520,237,pla2);
   setbkcolor(0);
   setcolor(CYAN);
   rectangle(50,50,450,450);
   rectangle(55,55,445,447);
   setfillstyle(1,CYAN);
   floodfill(51,51,CYAN);
     for(i=90;i<=450;i+=40)
       line(i,50,i,450);
	for(i=90;i<=450;i+=40)
	  line(50,i,450,i);
	  setcolor(WHITE);
	  j=65; i=1; int k=425, p=10, m=65, h=425;
	   for(j,i;j<k,i<=p&&i<100;j+=40,i++,b++)
	      {
		itoa(b,s,10);
		outtextxy(j,h,s);
		  if(i==p)
		     { p+=10;h-=35;b++;
		       for(j=k,i;j<m,i<p;j-=40,i++,b++)
			 {
			   itoa(b,s,10);
			   outtextxy(j,h,s);
			 }
			   h-=45;p+=10;b--;
		     }
	       }
			   m--;m++;
 }
void winner(int color)
 {
  cleardevice();
  setbkcolor(GREEN);
  setcolor(RED);
  settextstyle(1,0,5);
  if(color==RED)
    {
      outtextxy(100,200,"THE WINNER IS:");
      outtextxy(450,200,pla1);
    }
  else
    {
      outtextxy(100,200,"THE WINNER IS:");
      outtextxy(450,200,pla2);
    }
  getch();
  cleardevice();
  setbkcolor(BLUE);
  setcolor(RED);
  settextstyle(1,0,3);
  outtextxy(150,200,"T H A N K Y O U");
  delay(2500);
  closegraph();
  exit(0);
 }
void menu_page()
 { int ch;
   menu:
   cleardevice();
   setlinestyle(3,1,3);
   setcolor(BLUE);
   rectangle(5,10,630,470);
   setcolor(RED);
   rectangle(10,15,625,465);
   int c,i,j;
   for(i=50,j=300,c=1;i<400,j>50,c<15;i+=20,j-=20,c++)
    {
     setcolor(c);
     setlinestyle(2,1,3);
     line(i,j,i+100,j+100);
    }
   for(i=250,j=350,c=15;i<600,j>50,c>1;i+=20,j-=20,c--)
    {
      setcolor(c);
      setlinestyle(2,1,3);
      line(i,j,i+100,j+100);
    }
   for(i=330,j=240,c=25;i<500,j>50,c>=5;i+=20,j-=20,c-=5)
    {
      setcolor(RED);
      setfillstyle(1,BLUE);
      circle(i,j,c);
      floodfill(i,j,RED);
    }
   for(i=330,j=240,c=25;i>50,j<450,c>=5;i-=20,j+=20,c-=5)
    {
      setcolor(RED);
      setfillstyle(1,BLUE);
      circle(i,j,c);
      floodfill(i,j,RED);
    }
     setbkcolor(BLACK);
     setcolor(WHITE);
     settextstyle(4,0,5);
     outtextxy(200,50," M E N U ");
     outtextxy(105,70,"");
     settextstyle(7,0,4);
     setcolor(RED);
     outtextxy(150,150,"1.PLAY NOW");
     setcolor(WHITE);
     outtextxy(150,250,"2.INSTRUCTIONS");
     setcolor(GREEN);
     outtextxy(150,350,"3.EXIT");
     setcolor(WHITE);
     settextstyle(1,0,2);
     outtextxy(375,425,"(use 'num pad' only)");
     ch=bioskey(0);
     ch=ch>>8;
     switch(ch)
	{
	  case 81:
		   exit(0);
	  case 80:
		  cleardevice();
		  setcolor(BLUE);
		  rectangle(30,100,600,425);
		  setfillstyle(9,BLUE);
		  setcolor(RED);
		  settextstyle(4,0,5);
		  outtextxy(125,30,"INSTRUCTIONS");
		  settextstyle(1,0,8);
		  outtextxy(110,10,"...................");
		  settextstyle(3,0,2);
		  outtextxy(40,100,"*. HERE THE PLAY IS BETWEEN TWO PERSONS");
		  outtextxy(40,130,"*. EACH PLAYERS MOVEMENT IS INDICATED BY A COLOR-");
		  outtextxy(55,160," FILLED RECTANGLE 'RED' OR 'BLUE'");
		  outtextxy(40,190,"*. 'RED' MOVES FIRST,THEN ONLY 'BLUE'");
		  outtextxy(40,220,"*. TO START PLAY EACH PLAYER NEED TO GET A '1'");
		  outtextxy(55,250," IN THE DICE INDIVIDUALLY");
		  outtextxy(40,280,"*. FOR DICE MOVE YOU HAVE TO PRESS 'SpaceBar'");
		  outtextxy(40,310,"*. IF THE PLAYER GOT A '6' OR HE MOVE THROUGH ");
		  outtextxy(55,340," A LADDER HE GOT AN EXTRA CHANCE TO PLAY!!");
		  outtextxy(40,370,"*. PRESS 'Esc' TO EXIT DURING THE GAME");
		  outtextxy(40,400,"*. TO SELECT THE FIRST PLAYER YOU NEED TO 'TOSS'");
		  outtextxy(150,440," PRESS ANY KEY TO GO BACK ");
		  getch();
		  goto menu;
	  case 79:
		  cleardevice();
		  settextstyle(0,0,1);
		  outtextxy(100,100,"ENTER THE NAME OF THE PERSON WHO PLAYS FIRST:");
		  gotoxy(60,7);
		  gets(pla1);
		  outtextxy(100,132,"ENTER THE NAME OF THE NEXT PERSON:");
		  gotoxy(48,9);
		  gets(pla2);
		  return;
	  default:goto menu;

    }
 }
 void design()
  { setbkcolor(BLACK);
    setcolor(GREEN);
    settextstyle(4,0,4);
    for(int i=-170,j=600,k=500;i<=170||(j>=260||k>=160);i++,j--,k--)
     { setcolor(i);
       outtextxy(i,100,"SNAKE");
       outtextxy(j,130,"AND");
       outtextxy(270,k,"LADDER");
       delay(10);
       setcolor(BLACK);
       outtextxy(i,100,"SNAKE");
       outtextxy(j,130,"AND");
       outtextxy(270,k,"LADDER");
     }
    setcolor(MAGENTA);
    outtextxy(170,100,"SNAKE");
    outtextxy(260,130,"AND");
    outtextxy(270,160,"LADDER");
    settextstyle(1,0,2);
    setcolor(RED);
    outtextxy(400,300,"DEVOLEPED BY:-");
    outtextxy(450,330,"ANSAR.K.A");
    outtextxy(450,360,"CLASS-CT(S4)");
    outtextxy(450,390,"M.T.I THRISSUR");
    delay(500);
    setlinestyle(0,0,3);
    setcolor(BLUE);
    setfillstyle(9,BLUE);
    arc(270,260,160,240,50);
    arc(150,420,370,53,150);
    arc(270,260,160,240,40);
    arc(150,420,370,53,160);
    line(237,225,231,247);
    line(237,225,222,244);
    line(309,441,297,392);
    line(309,441,306,389);
    floodfill(225,270,BLUE);
    setcolor(RED);
    setfillstyle(1,RED);
    circle(227,243,3);
    floodfill(227,243,RED);
    delay(500);
    setcolor(WHITE);
    line(300,350,186,240);
    line(204,232,312,337);
    line(294,319,284,332);
    line(273,325,284,311);
    line(276,301,267,315);
    line(256,309,267,294);
    line(258,284,247,299);
    line(237,290,248,275);
    line(239,266,226,280);
    line(218,270,229,257);
    line(219,247,207,261);
    delay(500);
    setcolor(LIGHTRED);
    settextstyle(1,0,3);
    outtextxy(100,440," L o a d i n g");
    setcolor(YELLOW);
    setlinestyle(0,1,3);
    rectangle(300,450,450,475);
    setcolor(GREEN);
    setlinestyle(0,1,1);
    rectangle(302,452,304,473);
    setfillstyle(1,GREEN);
    floodfill(303,453,GREEN);
    for(i=302;i<447;i++)
      {
	rectangle(i,452,i+2,473);
	floodfill(i+1,453,GREEN);
	delay(50);
      }
  }