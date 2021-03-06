/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define MAX 100005




int main()
{
    int t;
    char c[20]="00111001111",
         d[20]="00111001110",
         e[20]="00111001100",
         f[20]="00111001000",
         g[20]="00111000000",
         a[20]="00110000000",
         b[20]="00100000000",
         C[20]="00010000000",
         D[20]="01111001110",
         E[20]="01111001100",
         F[20]="01111001000",
         G[20]="01111000000",
         A[20]="01110000000",
         B[20]="01100000000" ;

    //char fingering[40][20]={"00111001111","00111001110","00111001100","00111001000","00111000000","00110000000","00100000000","00010000000","01111001110","01111001100","01111001000","01111000000","01110000000","01100000000"};
    //char note[40]="cdefgabCDEFGAB";
    char inp[MAX],hand[20];
    int i,j,len;

    scanf("%d",&t);
    gets(inp);

    while(t--)
    {
        int pressed[20]={0,};
        strcpy(hand,"00000000000");
        gets(inp);
        len=strlen(inp);

        for(i=0;i<len;i++)
        {
            switch(inp[i])
            {
                    case 'c':
                    {
                        for(j=1;j<11;j++)
                        {
                            if(c[j]=='1')
                            {
                                if(hand[j]=='0')
                                {
                                    hand[j]='1';
                                    pressed[j]++;
                                }
                            }
                            else
                            {
                                hand[j]='0';
                            }
                        }
                    }
                    break;


                    case 'C':
                    {
                        for(j=1;j<11;j++)
                        {
                            if(C[j]=='1')
                            {
                                if(hand[j]=='0')
                                {
                                    hand[j]='1';
                                    pressed[j]++;
                                }
                            }
                            else
                            {
                                hand[j]='0';
                            }
                        }
                    }
                    break;

                    case 'd':
                    {
                        for(j=1;j<11;j++)
                        {
                            if(d[j]=='1')
                            {
                                if(hand[j]=='0')
                                {
                                    hand[j]='1';
                                    pressed[j]++;
                                }
                            }
                            else
                            {
                                hand[j]='0';
                            }
                        }
                    }
                    break;

                    case 'D':
                    {
                        for(j=1;j<11;j++)
                        {
                            if(D[j]=='1')
                            {
                                if(hand[j]=='0')
                                {
                                    hand[j]='1';
                                    pressed[j]++;
                                }
                            }
                            else
                            {
                                hand[j]='0';
                            }
                        }
                    }
                    break;

                    case 'e':
                    {
                        for(j=1;j<11;j++)
                        {
                            if(e[j]=='1')
                            {
                                if(hand[j]=='0')
                                {
                                    hand[j]='1';
                                    pressed[j]++;
                                }
                            }
                            else
                            {
                                hand[j]='0';
                            }
                        }
                    }
                    break;

                    case 'E':
                    {
                        for(j=1;j<11;j++)
                        {
                            if(E[j]=='1')
                            {
                                if(hand[j]=='0')
                                {
                                    hand[j]='1';
                                    pressed[j]++;
                                }
                            }
                            else
                            {
                                hand[j]='0';
                            }
                        }
                    }
                    break;

                    case 'f':
                    {
                        for(j=1;j<11;j++)
                        {
                            if(f[j]=='1')
                            {
                                if(hand[j]=='0')
                                {
                                    hand[j]='1';
                                    pressed[j]++;
                                }
                            }
                            else
                            {
                                hand[j]='0';
                            }
                        }
                    }
                    break;

                    case 'F':
                    {
                        for(j=1;j<11;j++)
                        {
                            if(F[j]=='1')
                            {
                                if(hand[j]=='0')
                                {
                                    hand[j]='1';
                                    pressed[j]++;
                                }
                            }
                            else
                            {
                                hand[j]='0';
                            }
                        }
                    }
                    break;

                    case 'g':
                    {
                        for(j=1;j<11;j++)
                        {
                            if(g[j]=='1')
                            {
                                if(hand[j]=='0')
                                {
                                    hand[j]='1';
                                    pressed[j]++;
                                }
                            }
                            else
                            {
                                hand[j]='0';
                            }
                        }
                    }
                    break;

                    case 'G':
                    {
                        for(j=1;j<11;j++)
                        {
                            if(G[j]=='1')
                            {
                                if(hand[j]=='0')
                                {
                                    hand[j]='1';
                                    pressed[j]++;
                                }
                            }
                            else
                            {
                                hand[j]='0';
                            }
                        }
                    }
                    break;

                    case 'a':
                    {
                        for(j=1;j<11;j++)
                        {
                            if(a[j]=='1')
                            {
                                if(hand[j]=='0')
                                {
                                    hand[j]='1';
                                    pressed[j]++;
                                }
                            }
                            else
                            {
                                hand[j]='0';
                            }
                        }
                    }
                    break;

                    case 'A':
                    {
                        for(j=1;j<11;j++)
                        {
                            if(A[j]=='1')
                            {
                                if(hand[j]=='0')
                                {
                                    hand[j]='1';
                                    pressed[j]++;
                                }
                            }
                            else
                            {
                                hand[j]='0';
                            }
                        }
                    }
                    break;

                    case 'b':
                    {
                        for(j=1;j<11;j++)
                        {
                            if(b[j]=='1')
                            {
                                if(hand[j]=='0')
                                {
                                    hand[j]='1';
                                    pressed[j]++;
                                }
                            }
                            else
                            {
                                hand[j]='0';
                            }
                        }
                    }
                    break;

                    case 'B':
                    {
                        for(j=1;j<11;j++)
                        {
                            if(B[j]=='1')
                            {
                                if(hand[j]=='0')
                                {
                                    hand[j]='1';
                                    pressed[j]++;
                                }
                            }
                            else
                            {
                                hand[j]='0';
                            }
                        }
                    }
                    break;

            }
        }

        for(j=1;j<10;j++)
            printf("%d ",pressed[j]);

        printf("%d\n",pressed[10]);

    }




    return 0;
}

