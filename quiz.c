#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define setsize 3
#define noofq 30
void q1(void);
void q2(void);
void q3(void);
void q4(void);
void q5(void);
void q6(void);
void q7(void);
void q8(void);
void q9(void);
void q10(void);
void intro(void);
int lifeline(float,int);
void start(void);
void check(float,int);
int n(int);
void wonprize(int);
void time();
int a1,a2,a3,a4,a=0,b=1,c=2,d=2,e=1,f=0,g=0,h=1,i=2,k=1,answer,t,z,flag=0;
float a6[30]={1.1,1.2,1.3,2.1,2.2,2.3,3.1,3.2,3.3,4.1,4.2,4.3,5.1,5.2,5.3,6.1,6.2,6.3,7.1,7.2,7.3,8.1,8.2,8.3,9.1,9.2,9.3,10.1,10.2,10.3};
int b1[30]={1,3,2,1,2,3,3,3,2,4,3,3,1,3,4,2,3,4,4,2,3,1,3,4,3,2,4,1,1,4};
void intro()
{
	printf("************\n"); 
	printf("RULE:\nENTER 0 FOR LIFLINE\n");
	printf("************\n");
}
int lifeline(float a1,int a2)
{
	if(a2==0&&flag==0)
	{
		printf("**********\n");
		printf("      EXPERT ADVICE\n");
		printf("**********\n");
					for(a4=0;a4<noofq;a4++)
					{
						if(a6[a4]==a1)
						{
							flag=1;
							return b1[a4];	
						}
		            }
	}
	if(a2==0&&flag==1)
	{
		printf("**********\n");
		printf("  EXPERT ADVICE ENDED\n");
		printf("**********\n");
		printf("  ENTER YOUR ANSWER\n");
		scanf("%d",&answer);
	    return answer;	
	}
	
}
void time()
{
	while(clock()<10000);
}
void wonprize(int j)
{
	system("color 20");
	time();
	if(j==1||j<=3)
	{
		printf("   YOU WON 1000\n");
		printf("**********\n");
	}
	else if(j==4||j<=6)
	{
		printf("   YOU WON 2000\n");
		printf("**********\n");
	}
	else if(j==7||j<=9)
	{
		printf("   YOU WON 3000\n");
		printf("**********\n");
	}
	else if(j==10||j<=12)
	{
		printf("   YOU WON 4000\n");
		printf("**********\n");
	}
	else if(j==13||j<=15)
	{
		printf("   YOU WON 5000\n");
		printf("**********\n");
	}
	else if(j==16||j<=18)
	{
		printf("   YOU WON 6000\n");
		printf("**********\n");
	}else if(j==19||j<=21)
	{
		printf("   YOU WON 7000\n");
		printf("**********\n");
	}else if(j==22||j<=24)
	{
		printf("   YOU WON 8000\n");
		printf("**********\n");
	}else if(j==25||j<=27)
	{
		printf("   YOU WON 9000\n");
		printf("**********\n");
	}else if(j==28||j<=30)
	{
		printf("   YOU WON 10000\n");
		printf("**********\n");
	}
	
}
void check(float p,int answer)
{
	for(z=0;z<noofq;z++)
	{
		if(a6[z]==p)
		{
			if(b1[z]==answer)
			{
				printf("**********\n");
				printf("CORRECT!ANSWER IS %d\n",b1[z]);
				printf("**********\n");
				wonprize(++z);
			}
			else
			{
				system("color 40");
				printf("**********\n");
				printf("      YOU LOSE!!!\n");
				printf("**********\n");
				printf("YOU HAVE EARNED NO PRIZE\n");
				printf("**********\n");
	            printf("ENTER 1 TO RESTART AND 0 TO EXIT\n");
	            int w;
	            scanf("%d",&w);
	            if(w==1)
	            {
	            	flag=0;
	            	start();
				}
				else
				{
					printf("GOOD BYE!!!");
				    exit(0);
				}
			}
		}
	}
}
int n(int x)
{
	if(x==setsize)
	{
		x=0;
		return x;
	}
}
void q1()
{
	time();
    system("color 09");
	switch(++a)
	{
		case 1:
			{
				printf("Q.1. WHO IS FATHER OF NATION?\n");
				printf("1.MOHANDAS KARAMCHAND GANDHI\n");
				printf("2.KARAMCHAND GANDHI\n");
				printf("3.SUBHASH CHANDRA BOSE\n");
				printf("4.SANJAY GANDHI\n");
				scanf("%d",&answer);
				answer=lifeline(1.1,answer);
				check(1.1,answer);
				break;
			}
		case 2:
			{
				printf("Q.1. WHO IS MOTHER OF NATION?\n");
				printf("1.SMRITI IRANI\n");
				printf("2.INDIRA GANDHI\n");
				printf("3.RASHTRA MATA\n");
				printf("4.MOTHER TERESA\n");
				scanf("%d",&answer);
				answer=lifeline(1.2,answer);
				check(1.2,answer);
				break;
			}
		case 3:
			{
				printf("Q.1. WHO INVENTED JET ENGINE?\n");
				printf("1.GOTTLIEB DAIMLER\n");
				printf("2.SIR FRANK WHITTLE\n");
				printf("3.LEWIS E.WARERMAN\n");
				printf("4.ROGER BACON\n");
				scanf("%d",&answer);
				answer=lifeline(1.3,answer);
				check(1.3,answer);
				break;
			}
	}
	a=n(a);
	q2();
}
void q2()
{
	time();
	system("color 09");
	switch(++b)
	{
		case 1:
			{
				printf("Q.2. WHO IS THE HOME MINISTER OF INDIA?\n");
				printf("1.NIRMALA SITHRAMA\n");
				printf("2.RAJNATH SINGH\n");
				printf("3.NARENDRA MODI\n");
				printf("4.AMIT SHAH\n");
				scanf("%d",&answer);
				answer=lifeline(2.1,answer);
				check(2.1,answer);
				break;
			}
		case 2:
			{
				printf("Q.2. WHO IS THE FINANCE MINISTER OF INDIA?\n");
				printf("1.NIRMALA SITHRAMA\n");
				printf("2.RAJNATH SINGH\n");
				printf("3.NARENDRA MODI\n");
				printf("4.AMIT SHAH\n");
				scanf("%d",&answer);
				answer=lifeline(2.2,answer);
				check(2.2,answer);
				break;
			}
		case 3:
			{
				printf("Q.2. WADIA INSTITUTE OF HIMALAYAN GEOLOGY IS LOCATED AT?\n");
				printf("1.SHIMLA\n");
				printf("2.DELHI\n");
				printf("3.DEHRADUN\n");
				printf("4.KULU\n");
				scanf("%d",&answer);
				answer=lifeline(2.3,answer);
				check(2.3,answer);
				break;
			}
	}
	b=n(b);
	q3();
}
void q3()
{
	time();
	system("color 09");
	switch(++c)
	{
		case 1:
			{
				printf("Q.3. THE CENTRE FOR CELLULAR ANS MOLECULAR BIOLOGY IS SITUATED AT?\n");
				printf("1.PATNA\n");
				printf("2.JAIPUR\n");
				printf("3.HYDERABAD\n");
				printf("4.NEW DELHI\n");
				scanf("%d",&answer);
				answer=lifeline(3.1,answer);
				check(3.1,answer);
				break;
			}
		case 2:
			{
				printf("Q.3. WHERE IS THE RAILWAY STAFF COLLEGE LOCATED?\n");
				printf("1.PUNE\n");
				printf("2.ALLAHABAD\n");
				printf("3.VADODARA\n");
				printf("4.DELHI\n");
				scanf("%d",&answer);
				answer=lifeline(3.2,answer);
				check(3.2,answer);
				break;
			}
		case 3:
			{
				printf("Q.3. THE FAMOUS DILWARA TEMPLES ARE SITUATED IN?\n");
				printf("1.UTTAR PRADESH\n");
				printf("2.RAJASTHAN\n");
				printf("3.MAHARASHTRA\n");
				printf("4.MADHYA PRADESH\n");
				scanf("%d",&answer);
				answer=lifeline(3.3,answer);
				check(3.3,answer);
				break;
			}
	}
	c=n(c);
	q4();
}
void q4()
{
	time();
	system("color 09");
	switch(++d)
	{
		case 1:
			{
				printf("Q.4. WHICH SCIENTIST DISCOVERED THE RADIOACTIVE ELEMENT RADIUM?\n");
				printf("1.ISSAC NEWTON\n");
				printf("2.ALBERT EINSTEIN\n");
				printf("3.BENJAMIN FRANKLIN\n");
				printf("4.MARIE CURIE\n");
				scanf("%d",&answer);
				answer=lifeline(4.1,answer);
				check(4.1,answer);
				break;
			}
		case 2:
			{
				printf("Q.4. WHO INVENTED THE BALLPOINT PEN?\n");
				printf("1.BICC BROTHERS\n");
				printf("2.WRITE BROTHERS\n");
				printf("3.BIRO BROTHERS\n");
				printf("4.WATERMAN BROTHERS\n");
				scanf("%d",&answer);
				answer=lifeline(4.2,answer);
				check(4.2,answer);
				break;
			}
		case 3:
			{
				printf("Q.4. THE HEADQUARTER OF THE NATIONAL POWER TRAINING INSTITUTE IS LOCATED IN?\n");
				printf("1.PUNE\n");
				printf("2.BHOPAL\n");
				printf("3.FARIDABAD\n");
				printf("4.LUCKNOW\n");
				scanf("%d",&answer);
				answer=lifeline(4.3,answer);
				check(4.3,answer);
				break;
			}
	}
	d=n(d);
	q5();
}
void q5()
{
	time();
	system("color 09");
	switch(++e)
	{
		case 1:
			{
				printf("Q.5. THE INTERNATIONAL LITERARY DAY IS OBSERVED ON?\n");
				printf("1.SEPT 8\n");
				printf("2.NOV 28\n");
				printf("3.MAY 2\n");
				printf("4.SEP 22\n");
				scanf("%d",&answer);
				answer=lifeline(5.1,answer);
				check(5.1,answer);
				break;
			}
		case 2:
			{
				printf("Q.5. THE LANGUAGE OF LAKSHADEEP ,A UNION TERRITORY OF INDIA,IS?\n");
				printf("1.TAMIL\n");
				printf("2.HINDI\n");
				printf("3.MALYALAM\n");
				printf("4.TELUGU\n");
				scanf("%d",&answer);
				answer=lifeline(5.2,answer);
				check(5.2,answer);
				break;
			}
		case 3:
			{
				printf("Q.5. BAHUBALI FESTIVAL IS RELATED TO?\n");
				printf("1.ISLAM\n");
				printf("2.HINDUISM\n");
				printf("3.BUDDHISM\n");
				printf("4.JAINISM\n");
				scanf("%d",&answer);
				answer=lifeline(5.3,answer);
				check(5.3,answer);
				break;
			}
	}
	e=n(e);
	q6();
}
void q6()
{
	time();
	system("color 09");
	switch(++f)
	{
		case 1:
			{
				printf("Q.6. WHICH DAY IS OBSERVED AS THE WORLD STANDARD DAY?\n");
				printf("1.JUNE 26\n");
				printf("2.OCT 14\n");
				printf("3.NOV 15\n");
				printf("4.DEC 2\n");
				scanf("%d",&answer);
				answer=lifeline(6.1,answer);
				check(6.1,answer);
				break;
			}
		case 2:
			{
				printf("Q.6. SEPT 27 IS CELEBRATED EVERY YEAR AS?\n");
				printf("1.TEACHER DAY\n");
				printf("2.NATIONAL INTEGERATION DAY\n");
				printf("3.WORLD TOURISM DAY\n");
				printf("4.INTERNATIONAL LITERACY DAY\n");
				scanf("%d",&answer);
				answer=lifeline(6.2,answer);
				check(6.2,answer);
				break;
			}
		case 3:
			{
				printf("Q.6. WHO IS THE AUTHOR OF 'MANAS-KA-HANS'?\n");
				printf("1.KHUSHWANT SINGH\n");
				printf("2.PREM CHAND\n");
				printf("3.JAYASHANKAR PRASAD\n");
				printf("4.AMRIT LAL NAGAR\n");
				scanf("%d",&answer);
				answer=lifeline(6.3,answer);
				check(6.3,answer);
				break;
			}
	}
	f=n(f);
	q7();
}
void q7()
{
	time();
	system("color 09");
	switch(++g)
	{
		case 1:
			{
				printf("Q.7. WHO IS THE AUTHOR OF 'MEGHDOOT'?\n");
				printf("1.VISHAKADATTA\n");
				printf("2.VALMIKI\n");
				printf("3.BANABHATTA\n");
				printf("4.KALIDAS\n");
				scanf("%d",&answer);
				answer=lifeline(7.1,answer);
				check(7.1,answer);
				break;
			}
		case 2:
			{
				printf("Q.7. WHO IS AUTHOR OF 'AMRIT-KI-ORE'?\n");
				printf("1.MUKESH KUMAR\n");
				printf("2.NARENDRA MOHAN\n");
				printf("3.UPENDRA NATH\n");
				printf("4.NIRAD C.CHOUDHARY\n");
				scanf("%d",&answer);
				answer=lifeline(7.2,answer);
				check(7.2,answer);
				break;
			}
		case 3:
			{
				printf("Q.7.SPORT DAY IS CELEBRATED ON?\n");
				printf("1.APR 22\n");
				printf("2.JUL 26\n");
				printf("3.AUG 29\n");
				printf("4.OCT 2\n");
				scanf("%d",&answer);
				answer=lifeline(7.3,answer);
				check(7.3,answer);
				break;
			}
	}
	g=n(g);
	q8();
}
void q8()
{
	time();
	system("color 09");
	switch(++h)
	{
		case 1:
			{
				printf("Q.8. WOLRD HEALTH DAY IS CELEBRATED ON?\n");
				printf("1.APR 7\n");
				printf("2.MAR 6\n");
				printf("3.MAR 15\n");
				printf("4.APR 28\n");
				scanf("%d",&answer);
				answer=lifeline(8.1,answer);
				check(8.1,answer);
				break;
			}
		case 2:
			{
				printf("Q.8. PONGAL IS A POPULAR FESTIVAL OF WHICH STATE?\n");
				printf("1.KARNATAKA\n");
				printf("2.KERALA\n");
				printf("3.TAMIL NADU\n");
				printf("4.ANDHRA PRADHESH\n");
				scanf("%d",&answer);
				answer=lifeline(8.2,answer);
				check(8.2,answer);
				break;
			}
		case 3:
			{
				printf("Q.8. GHOTOTKACH IN MAHARASHTA WAS THE SON OF?\n");
				printf("1.DURYODHANA\n");
				printf("2.ARJUNA\n");
				printf("3.YUDHISHTHIR\n");
				printf("4.BHIMA\n");
				scanf("%d",&answer);
				answer=lifeline(8.3,answer);
				check(8.3,answer);
				break;
			}
	}
	h=n(h);
	q9();
}
void q9()
{
	time();
	system("color 09");
	switch(++i)
	{
		case 1:
			{
				printf("Q.9. VAN MAHOTSAV WAS STARTED BY?\n");
				printf("1.MAHARSHI KARVE\n");
				printf("2.BAL GANGADHAR TILAK\n");
				printf("3.K.M.MUNSHI\n");
				printf("4.SANJAY GANDHI\n");
				scanf("%d",&answer);
				answer=lifeline(9.1,answer);
				check(9.1,answer);
				break;
			}
		case 2:
			{
				printf("Q.9. FIRST MONTH OF INDIAN NATIONAL CALENDER IS?\n");
				printf("1.MAGHA\n");
				printf("2.CHAITRA\n");
				printf("3.ASHADHA\n");
				printf("4.VAISHAKHA\n");
				scanf("%d",&answer);
				answer=lifeline(9.2,answer);
				check(9.2,answer);
				break;
			}
		case 3:
			{
				printf("Q.9. WHICH OF THE FOLLOWING IS NOT A DANCE FROM KERALA?\n");
				printf("1.KATHAKALI\n");
				printf("2.MOHINIATTAM\n");
				printf("3.OTTHAN THULLAL\n");
				printf("4.YAKSHA GANA\n");
				scanf("%d",&answer);
				answer=lifeline(9.3,answer);
				check(9.3,answer);
				break;
			}
	}
	i=n(i);
	q10();
}
void q10()
{
	time();
	system("color 09");
	switch(++k)
	{
		case 1:
			{
				printf("Q.10. WHICH OF THE FOLLOWING MUSLIM FESTIVAL IS BASED ON THE 'HOLY QURAN'?\n");
				printf("1.ID-UL-ZUHA\n");
				printf("2.ID-UL-FITR\n");
				printf("3.BAKRI-ID\n");
				printf("4.MOHARRAM\n");
				scanf("%d",&answer);
				answer=lifeline(10.1,answer);
				check(10.1,answer);
				break;
			}
		case 2:
			{
				printf("Q.10. WHERE IS THE HEADQUARTER OF OIL AND NATURAL GAS COMMISION?\n");
				printf("1.DEHRADUN\n");
				printf("2.VADODRA\n");
				printf("3.DIGBOI\n");
				printf("4.MUMBAI\n");
				scanf("%d",&answer);
				answer=lifeline(10.2,answer);
				check(10.2,answer);
				break;
			}
		case 3:
			{
				printf("Q.10. WHAT GALILEO INVENTED?\n");
				printf("1.BAROMETER\n");
				printf("2.PENDULUM CLOCK\n");
				printf("3.MICROSCOPE\n");
				printf("4.THERMOMETER\n");
				scanf("%d",&answer);
				answer=lifeline(10.3,answer);
				check(10.3,answer);
				break;
			}
	}
	k=n(k);
	printf("    CONGRATS!!! YOU WON \n");
	printf("**********\n");
	start();
	
}
void start()
{
	system("color 09");
	printf("************\n");
	printf("      WELCOME TO SKKY QUIZ\n");
	printf("************\n");
	printf("      I AM YOUR HOST\n\t*Er.Nazeem Ahmad \n");
	printf("************\n");
	intro();
	q1();
	getch();
}
int main()
{
	start();}
