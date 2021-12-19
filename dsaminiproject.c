#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>

int i,n=0,total=0;
int y[5]={0,0,0,0,0};
struct data
{
	int id;
	int qty;
}d[20];

void welcome(void);
void delay(int number_of_seconds);
void Index(void);
void chkout(void);
void input(void);

int main()
{
	welcome();
	Index();
	input();
	system("cls");
	chkout();
	return 0;
}

void delay(int number_of_seconds) 
{ 
    // Converting time into milli_seconds 
    int milli_seconds = 1000 * number_of_seconds; 
  
    // Stroing start time 
    clock_t start_time = clock(); 
  
    // looping till required time is not acheived 
    while (clock() < start_time + milli_seconds) 
        ; 
} 

void welcome(void)
{   
    printf(".");
	printf("\n\n\n\n\n\n\n\n\n");					
	i=1;
	while(i>=1)
	{
					
		printf("\t\t\t                                  888       888          888                                                                                               \n");                                                                                                
        printf("\t\t\t                                  888   o   888          888                                                                                               \n"); 
        printf("\t\t\t                                  888  d8b  888          888                                                                                               \n"); 
        printf("\t\t\t                                  888 d888b 888  .d88b.  888  .d8888b  .d88b.  88888b.d88b.   .d88b.                                                       \n"); 
        printf("\t\t\t                                  888d88888b888 d8P  Y8b 888 d88P8    d888888b 888 8888 888b d8P  Y8b                                                      \n"); 
        printf("\t\t\t                                  88888P Y88888 88888888 888 888      888  888 888  888  888 88888888                                                      \n"); 
        printf("\t\t\t                                  8888P   Y8888 Y8b.     888 Y88b.    Y88..88P 888  888  888 Y8b.                                                          \n"); 
        printf("\t\t\t                                  888P     Y888  8Y8888  888  8Y8888P  8Y88P8  888  888  888  8Y8888                                                       \n\n");
		                                                                                                                        
        printf("\t\t\t                                                        88888888888                                                                                   \n");                            
        printf("\t\t\t                                                            888                                                                                       \n");                            
        printf("\t\t\t                                                            888                                                                                       \n");                            
        printf("\t\t\t                                                            888   .d88b.                                                                              \n");                            
        printf("\t\t\t                                                            888  d888888b                                                                             \n");                            
        printf("\t\t\t                                                            888  888  888                                                                             \n");                            
        printf("\t\t\t                                                            888  Y88..88P                                                                             \n");                            
        printf("\t\t\t                                                            888   8Y88P8                                                                              \n\n");
			                                                                                                                     
        printf("\t\t\t       .d88888b.           888 d8b                          .d8888b.  888                                 d8b                    \n");
        printf("\t\t\t      d88P8 8Y88b          888 Y8P                         d88P  Y88b 888                                 Y8P                    \n");
        printf("\t\t\t      888     888          888                             Y88b.      888                                                        \n");
        printf("\t\t\t      888     888 88888b.  888 888 88888b.   .d88b.         8Y888b.   88888b.   .d88b.  88888b.  88888b.  888 88888b.   .d88b.   \n");
        printf("\t\t\t      888     888 888 888b 888 888 888 888b d8P  Y8b           8Y88b. 888 888b d888888b 888 888b 888 888b 888 888 888b d88P888b  \n");
        printf("\t\t\t      888     888 888  888 888 888 888  888 88888888             8888 888  888 888  888 888  888 888  888 888 888  888 888  888  \n");
        printf("\t\t\t      Y88b. .d88P 888  888 888 888 888  888 Y8b.           Y88b  d88P 888  888 Y88..88P 888 d88P 888 d88P 888 888  888 Y88b 888  \n");
        printf("\t\t\t       8Y88888P8  888  888 888 888 888  888  8Y8888         8Y8888P8  888  888  8Y88P8  88888P8  88888P8  888 888  888  8Y88888  \n");
        printf("\t\t\t                                                                                        888      888                        888  \n");
        printf("\t\t\t                                                                                        888      888                   Y8b d88P  \n");
        printf("\t\t\t                                                                                        888      888                    8Y88P8   \n");
       
	i--;

    }
					
    printf("\t\t\t\t\t\t\t");
                    
	i=2;
	while(i>=1)
    {
        printf("=");
                    	     
        delay(1);
                    	

        printf("=");
						                                                      
        delay(1);
                    	

        printf(">");
                    	
                    	
        delay(1);
        i--;

    }
               	    
    i=1;
	while(i>=1)
    {
    
	   printf("LOADING");
       delay(1);
                        

       printf(".");                                  
       delay(1);
                        
                        
       printf(".");
       delay(1);
                    	
                    	
       printf(".");
       delay(1);
       system("cls");
                    	
    i--;

    }
}

void Index(void)
{
	printf("\n\n");
	printf("\t\t\t\t\t\t\t\t\t 888b     d888                               \n");                           
	printf("\t\t\t\t\t\t\t\t\t 8888b   d8888                               \n");                        
	printf("\t\t\t\t\t\t\t\t\t 88888b.d88888                               \n");                        
	printf("\t\t\t\t\t\t\t\t\t 888Y88888P888   .d88b.   88888b.   888  888 \n");
	printf("\t\t\t\t\t\t\t\t\t 888 Y888P 888  d8P  Y8b  888 888b  888  888 \n");
	printf("\t\t\t\t\t\t\t\t\t 888  Y8P  888  88888888  888  888  888  888 \n");
	printf("\t\t\t\t\t\t\t\t\t 888       888  Y8b.      888  888  Y88b 888 \n");
	printf("\t\t\t\t\t\t\t\t\t 888       888   888888   888  888   8Y88888 \n");
     
    printf("\n\n1.ELECTRONICS\t\t\t\tPRICE\t\t\t\tDISCOUNT\na.Redmi Note 5 Pro\t\t\tRs.12,000\nb.Asus ZenBook Duo Pro\t\t\tRs.1,50,000\nc.SkullCandy Crushers\t\t\tRs.7,000\t\t\tRs.700 off!!! on total on purchase of 2 \nd.Apple Watch Series 4\t\t\tRs.45,000\n\n2.SHOES\na.Nike Air Max\t\t\t\tRs.10,000\nb.Nike Mercurial\t\t\tRs.7,000\nc.Nike Air React\t\t\tRs.8,000\nd.Nike Air Jordan\t\t\tRs.18,000\n\n3.CLOTHING\na.H&M Hoodie\t\t\t\tRs.3,000\nb.Levis Jeans\t\t\t\tRs.2,500\t\t\tRs.200 off!!! on total on purchase of 2\nc.Zara Shirt\t\t\t\tRs.1,200\t\t\tRs.600 off!!! on total on purchase of 3\nd.Supreme T-shirt\t\t\tRs.10,000\n\n4.SPORTS\na.NBA Jersey\t\t\t\tRs.6,000\nb.FitBit\t\t\t\tRs.9,000\nc.Football Jersey\t\t\tRs.5,000\nd.TrackSuits\t\t\t\tRs.8,000\t\t\tRs.1100 off!!! on total on purchase of 2\n\n5.TOYS AND GAMES\na.Ludo\t\t\t\t\tRs.100\nb.Deal\t\t\t\t\tRs.250\nc.Life\t\t\t\t\tRs.1,000\nd.Uno\t\t\t\t\tRs.150\n\n"); 
}

void chkout(void)
{
	int j,s,w;
	printf("\n\n\n\n");
	printf("\t\t\tY88b   d88P                                .d8888b.  888                                 d8b                          .d8888b.                   888    \n");
	printf("\t\t\t Y88b d88P                                d88P  Y88b 888                                 Y8P                         d88P  Y88b                  888    \n");
	printf("\t\t\t  Y88o88P                                 Y88b.      888                                                             888    888                  888    \n");
	printf("\t\t\t   Y888P   .d88b.  888  888 888d888        .Y888b.   88888b.   .d88b.  88888b.  88888b.  888 88888b.   .d88b.        888         8888b.  888d888 888888 \n");
	printf("\t\t\t    888   d88..88b 888  888 888P.             .Y88b. 888 .88b d88..88b 888 .88b 888 .88b 888 888 .88b d88P888b       888            .88b 888P.   888    \n");
	printf("\t\t\t    888   888  888 888  888 888                 8888 888  888 888  888 888  888 888  888 888 888  888 888  888       888    888 .d888888 888     888    \n");
	printf("\t\t\t    888   Y88..88P Y88b 888 888           Y88b  d88P 888  888 Y88..88P 888 d88P 888 d88P 888 888  888 Y88b 888       Y88b  d88P 888  888 888     Y88b.  \n");
	printf("\t\t\t    888    .Y88P.   .Y88888 888            .Y8888P8  888  888  .Y88P.  88888P.  88888P.  888 888  888  .Y88888        .Y8888P.  .Y888888 888      .Y888 \n");
	printf("\t\t\t                                                                       888      888                        888                                          \n");
	printf("\t\t\t                                                                       888      888                        888                                          \n");    
	printf("\t\t\t                                                                       888      888                   Y8b.d88P                                          \n");
	printf("\t\t\t                                                                       888      888                    .Y88P.                                           \n\n\n");

	printf("ITEMS PURCHASED\t\t\tQUANTITY\t\t\tINDIVIDUAL RATE\t\t\tAMOUNT\t\t\tDISCOUNT\n");
	for(j=0;j<=n-1;j++)
	{
		switch(d[j].id)
		{
			case 101:
			{
				if(d[j].qty!=0)
				{
					s=(12000*d[j].qty);
				}
				else
				{
					s=0;
				}
				printf("Redmi Note 5 Pro\t\t  %d\t\t\t\tRs.12,000\t\t\tRs.%d\t\t\t\n",d[j].qty,s);
				y[0]+=s;
				total+=s;
				break;
			}
			case 102:
			{
				if(d[j].qty!=0)
				{
					s=(150000*d[j].qty);
				}
				else
				{
					s=0;
				}
				printf("Asus Zenbook Duo Pro\t\t  %d\t\t\t\tRs.1,50,000\t\t\tRs.%d\t\t\t\n",d[j].qty,s);
				y[0]+=s;
				total+=s;
				break;
			}
			case 103:
			{
				if(d[j].qty==2)
				{
					w=700;
				}
				else
				{
					w=0;
				}
				if(d[j].qty!=0)
				{
					if(d[j].qty==2)
					{
						s=((7000*d[j].qty)-700);
					}
					else
					{
					s=(7000*d[j].qty);
					}
				}
				else
				{
					s=0;
				}
				printf("SkullCandy Crushers\t\t  %d\t\t\t\tRs.7,000\t\t\tRs.%d\t\tRs.%d\n",d[j].qty,s,w);
				y[0]+=s;
				total+=s;
				break;
			}
			case 104:
			{
				if(d[j].qty!=0)
				{
					s=(45000*d[j].qty);
				}
				else
				{
					s=0;
				}
				printf("Apple Watch Series 4\t\t  %d\t\t\t\tRs.45,000\t\t\tRs.%d\t\t\t\n",d[j].qty,s);
				y[0]+=s;
				total+=s;
				break;
			}
			case 201:
			{
				if(d[j].qty!=0)
				{
					s=(10000*d[j].qty);
				}
				else
				{
					s=0;
				}
				printf("Nike Air Max\t\t\t  %d\t\t\t\tRs.10,000\t\t\tRs.%d\t\t\t\n",d[j].qty,s);
				y[1]+=s;
				total+=s;
				break;
			}
			case 202:
			{
				if(d[j].qty!=0)
				{
					s=(7000*d[j].qty);
				}
				else
				{
					s=0;
				}
				printf("Nike Mercurial\t\t\t  %d\t\t\t\tRs.7,000\t\t\tRs.%d\t\t\t\n",d[j].qty,s);
				y[1]+=s;
				total+=s;
				break;
			}
			case 203:
			{
				if(d[j].qty!=0)
				{
					s=(8000*d[j].qty);
				}
				else
				{
					s=0;
				}
				printf("Nike Air React\t\t\t  %d\t\t\t\tRs.8,000\t\t\tRs.%d\t\t\t\n",d[j].qty,s);
				y[1]+=s;
				total+=s;
				break;
			}
			case 204:
			{
				if(d[j].qty!=0)
				{
					s=(18000*d[j].qty);
				}
				else
				{
					s=0;
				}
				printf("Nike Air Jordan\t\t\t  %d\t\t\t\tRs.18,000\t\t\tRs.%d\t\t\t\n",d[j].qty,s);
				y[1]+=s;
				total+=s;
				break;
			}
			case 301:
			{
				if(d[j].qty!=0)
				{
					s=(3000*d[j].qty);
				}
				else
				{
					s=0;
				}
				printf("H&M Hoodie\t\t\t  %d\t\t\t\tRs.3,000\t\t\tRs.%d\t\t\t\n",d[j].qty,s);
				y[2]+=s;
				total+=s;
				break;
			}
			case 302:
			{
				if(d[j].qty==2)
				{
					w=200;
				}
				else
				{
					w=0;
				}
				if(d[j].qty!=0)
				{
					if(d[j].qty==2)
					{
						s=((2500*d[j].qty)-200);
					}
					else
					{
					s=(2500*d[j].qty);
					}
				}
				else
				{
					s=0;
				}
				printf("Levis Jeans\t\t\t  %d\t\t\t\tRs.2,500\t\t\tRs.%d\t\t\tRs.%d\n",d[j].qty,s,w);
				y[2]+=s;
				total+=s;
				break;
			}
			case 303:
			{
				if(d[j].qty==3)
				{
					w=600;
				}
				else
				{
					w=0;
				}
				if(d[j].qty!=0)
				{
					if(d[j].qty==3)
					{
						s=((1200*d[j].qty)-600);
					}
					else
					{
					s=(1200*d[j].qty);
					}
				}
				else
				{
					s=0;
				}
				printf("Zara Shirt\t\t\t  %d\t\t\t\tRs.1,200\t\t\tRs.%d\t\t\tRs.%d\n",d[j].qty,s,w);
				y[2]+=s;
				total+=s;
				break;
			}
			case 304:
			{
				if(d[j].qty!=0)
				{
					s=(10000*d[j].qty);
				}
				else
				{
					s=0;
				}
				printf("Supreme T-shirt\t\t\t  %d\t\t\t\tRs.10,000\t\t\tRs.%d\t\t\t\n",d[j].qty,s);
				y[2]+=s;
				total+=s;
				break;
			}
			case 401:
			{
				if(d[j].qty!=0)
				{
					s=(6000*d[j].qty);
				}
				else
				{
					s=0;
				}
				printf("NBA Jersey\t\t\t  %d\t\t\t\tRs.6,000\t\t\tRs.%d\t\t\t\n",d[j].qty,s);
				y[3]+=s;
				total+=s;
				break;
			}
			case 402:
			{
				if(d[j].qty!=0)
				{
					s=(9000*d[j].qty);
				}
				else
				{
					s=0;
				}
				printf("FitBit\t\t\t\t  %d\t\t\t\tRs.9,000\t\t\tRs.%d\t\t\t\n",d[j].qty,s);
				y[3]+=s;
				total+=s;
				break;
			}
			case 403:
			{
				if(d[j].qty!=0)
				{
					s=(5000*d[j].qty);
				}
				else
				{
					s=0;
				}
				printf("Football Jersey\t\t\t  %d\t\t\t\tRs.5,000\t\t\tRs.%d\t\t\t\n",d[j].qty,s);
				y[3]+=s;
				total+=s;
				break;
			}
			case 404:
			{
				if(d[j].qty==2)
				{
					w=1100;
				}
				else
				{
					w=0;
				}
				if(d[j].qty!=0)
				{
					if(d[j].qty==2)
					{
						s=((8000*d[j].qty)-1100);
					}
					else
					{
					s=(8000*d[j].qty);
					}
				}
				else
				{
					s=0;
				}
				printf("TrackSuits\t\t\t  %d\t\t\t\tRs.8,000\t\t\tRs.%d\t\tRs.%d\n",d[j].qty,s,w);
				y[3]+=s;
				total+=s;
				break;
			}
			case 501:
			{
				if(d[j].qty!=0)
				{
					s=(100*d[j].qty);
				}
				else
				{
					s=0;
				}
				printf("Ludo\t\t\t\t  %d\t\t\t\tRs.100\t\t\t\tRs.%d\t\t\t\n",d[j].qty,s);
				y[4]+=s;
				total+=s;
				break;
			}
			case 502:
			{
				if(d[j].qty!=0)
				{
					s=(250*d[j].qty);
				}
				else
				{
					s=0;
				}
				printf("Deal\t\t\t\t  %d\t\t\t\tRs.250\t\t\t\tRs.%d\t\t\t\n",d[j].qty,s);
				y[4]+=s;
				total+=s;
				break;
			}
			case 503:
			{
				if(d[j].qty!=0)
				{
					s=(1000*d[j].qty);
				}
				else
				{
					s=0;
				}
				printf("Life\t\t\t\t  %d\t\t\t\tRs.1,000\t\t\tRs.%d\t\t\t\n",d[j].qty,s);
				y[4]+=s;
				total+=s;
				break;
			}
			case 504:
			{
				if(d[j].qty!=0)
				{
					s=(150*d[j].qty);
				}
				else
				{
					s=0;
				}
				printf("Uno\t\t\t\t  %d\t\t\t\tRs.150\t\t\t\tRs.%d\t\t\t\n",d[j].qty,s);
				y[4]+=s;
				total+=s;
				break;
			}
			default:
			{
				printf(" ENTERED INVALID ID!!!\n");
				break;
			}
		}
	}
	printf("\n\nELECTRONICS total is Rs.%d\n\n",y[0]);
	printf("\n\nSHOES total is Rs.%d\n\n",y[1]);
	printf("\n\nCLOTHING total is Rs.%d\n\n",y[2]);
	printf("\n\nSPORTS total is Rs.%d\n\n",y[3]);
	printf("\n\nTOYS AND GAMES total is Rs.%d\n\n",y[4]);
	printf("\nTOTAL AMOUNT PAYABLE => Rs.%d\n",total);
	
}

void input(void)
{
	int a;
	printf("ID EXAMPLE => 401,302\n");
    do
    {	
		printf("ENTER THE ID OF THE ITEM YOU WANT TO BUY => \n");
		scanf("%d",& d[n].id);
		printf("ENTER THE QUANTITY TO BE PURCHASED => \n");
		scanf("%d",& d[n].qty);
		printf("ENTER 1 TO CONTINUE OR 0 TO CHECKOUT => \n");
		scanf("%d",& a);
        n++;
	}while(a==1);
    
}

