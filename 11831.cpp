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
    char grid[205][205],instructions[MAX];
    int n , m , s , x , y , i , j , k , total , found , orientation ;

    while(scanf("%d%d%d",&n,&m,&s)!=EOF)
    {
        if(n==0&&m==0&&s==0)
            break;

        gets(instructions);

        for(i=0;i<n;i++)
            gets(grid[i]);

        total=0;

        /**
        north means 1
        south means -1
        west means 2
        east means -2
         */

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(grid[i][j]=='*')
                    total++;

                else if(grid[i][j]=='N')
                {
                    x=i;
                    y=j;
                    orientation=1;
                }

                else if(grid[i][j]=='S')
                {
                    x=i;
                    y=j;
                    orientation=-1;
                }

                else if(grid[i][j]=='L')
                {
                    x=i;
                    y=j;
                    orientation=-2;
                }

                else if(grid[i][j]=='O')
                {
                    x=i;
                    y=j;
                    orientation=2;
                }

            }
        }

        gets(instructions);

        found =0;

        for(k=0;k<s;k++)
        {
            if(instructions[k]=='D')
            {
                if(orientation==-1)
                    orientation=2;
                else if(orientation==2)
                    orientation=1;
                else if(orientation==1)
                    orientation=-2;
                else if(orientation==-2)
                    orientation=-1;
            }

            else if(instructions[k]=='E')
            {
                if(orientation==-1)
                    orientation=-2;
                else if(orientation==2)
                    orientation=-1;
                else if(orientation==1)
                    orientation=2;
                else if(orientation==-2)
                    orientation=1;
            }

            else if(instructions[k]=='F')
            {
                if(orientation==-1)
                {
                    if((x<(n-1))&&(grid[x+1][y]!='#'))
                    {
                        x++;

                        if(grid[x][y]=='*')
                        {
                            found++;
                            grid[x][y]='.';
                        }
                    }
                }

                else if(orientation==2)
                {
                    if((y>0)&&(grid[x][y-1]!='#'))
                    {
                        y--;

                        if(grid[x][y]=='*')
                        {
                            found++;
                            grid[x][y]='.';
                        }
                    }
                }

                else if(orientation==1)
                {
                    if((x>0)&&(grid[x-1][y]!='#'))
                    {
                        x--;

                        if(grid[x][y]=='*')
                        {
                            found++;
                            grid[x][y]='.';
                        }
                    }
                }

                else if(orientation==-2)
                {
                    if((y<(m-1))&&(grid[x][y+1]!='#'))
                    {
                        y++;

                        if(grid[x][y]=='*')
                        {
                            found++;
                            grid[x][y]='.';
                        }
                    }
                }
            }

            if(found==total)
                break;

        }

        printf("%d\n",found);
    }



    return 0;
}

