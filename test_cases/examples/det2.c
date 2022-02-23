#include<stdio.h>
#include<math.h>

float determinent(float matrix[25][25], int size)
{

    int c;
    float det=0,s=1;
    float b[25][25];
    int i,j;
    int m,n;

    if(size == 1)
    {
        return (matrix[0][0]);//terminating condition
    }

    else
    {
        det=0;
        for(c=0; c<size; c++)
        {
            m=0;
            n=0;
            for(i=0; i<size; i++)
            {
                for(j=0; j<size; j++)
                {
                    *(*(b+i)+j) = 0;
                    if(i!=0 && j!=c)
                    {
                         *(*(b+m)+n) = *(*(matrix+i)+j);//pointer ops in array
                            if(n<(size-2))
                            {
                                n++;
                            }

                            else

                            {

                                n=0;
                                m++;

                            }
                        }
                    }
                }
            det = det + s*(matrix[0][c]*determinent(b,size-1));//recursor condition
            s = -1*s;//for alternate positions
        }
    }
    return (det);
}

int main()
{
    int n;
    printf("Enter either the row or column of the matrix ");
    scanf("%d",&n);
    int i,j;
    float m[25][25];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("Enter the %d%d element of the matrix ",i,j);
            scanf("%f", (*(m+i)+j));
        }
    }

    float result = determinent(m,n);
    printf("The determinent of the matrix is %f",result);}


 