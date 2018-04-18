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
    int T,n1,n2,m1,m2,s,i,j,i1,j1,i2,j2,test,ans;
    char grid[100][100],block[100][100];

    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d%d",&n1,&m1,&s);

        for(i=0;i<n1;i++)
            scanf("%s",grid[i]);

        while(s--)
        {
            ans=0;
            scanf("%d%d",&n2,&m2);

            for(i=0;i<n2;i++)
                scanf("%s",block[i]);

            test=1;
            i1=0;
            j1=0;

            for(i=0;i<n2;i++)
            {
                for(j=0;j<m2;j++)
                {
                    if(block[i][j]=='*')
                    {
                        test=0;
                        break;
                    }
                }
                if(test==1)
                {
                    i1++;
                }
                else
                {
                    break;
                }
            }

            test=1;
            for(i=n2-1;i>=0;i--)
            {
                for(j=0;j<m2;j++)
                {
                    if(block[i][j]=='*')
                    {
                        test=0;
                        break;
                    }
                }
                if(test==1)
                {
                    n2--;
                }
                else
                {
                    break;
                }
            }

            test=1;
            for(j=0;j<m2;j++)
            {
                for(i=i1;i<n2;i++)
                {
                    if(block[i][j]=='*')
                    {
                        test=0;
                        break;
                    }
                }
                if(test==1)
                {
                    j1++;
                }
                else
                {
                    break;
                }
            }

            test=1;
            for(j=m2-1;j>=0;j--)
            {
                for(i=i1;i<n2;i++)
                {
                    if(block[i][j]=='*')
                    {
                        test=0;
                        break;
                    }
                }
                if(test==1)
                {
                    m2--;
                }
                else
                {
                    break;
                }
            }



            for(i=0;i<n1;i++)
            {
                for(j=0;j<m1;j++)
                {
                    test=1;

                    for(i2=i1;i2<n2;i2++)
                    {
                        for(j2=j1;j2<m2;j2++)
                        {
                            if(((i+i2-i1)>=n1)||((j+j2-j1)>=m1))
                            {
                                test=0;
                                goto abar_dekhi;
                            }

                            if(block[i2][j2]=='*')
                            {
                                if(grid[i+i2-i1][j+j2-j1]!='*')
                                {
                                    test=0;
                                    goto abar_dekhi;
                                }
                            }

                        }
                    }

                    abar_dekhi :

                    if(test==1)
                    {
                        ans=1;
                        goto shesh;
                    }
                }
            }

            shesh :

                if(ans==1)
                    printf("Yes\n");
                else
                    printf("No\n");


        }
        printf("\n");
    }


    return 0;
}

