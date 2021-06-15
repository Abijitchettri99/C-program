#include<stdio.h>
#define INF 999

void printMatrix(int matrix[][4]);
void flyod_warshall(int graph[][4])
{
    int matrix[4][4],i,j,k;

    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            matrix[i][j] = graph[i][j];

    for(k=0;k<4;k++){
        for(i=0;i<4;i++){
            for(j=0;j<4;j++){
                if(matrix[i][k] + matrix[k][j] < matrix[i][j])
                    matrix[i][j] = matrix[i][k] + matrix[k][j];
            }
        }
    }
    printMatrix(matrix);
}
void printMatrix(int matrix[][4])
{
    printf("Sortest path between vertices are:\n");
    for(int i =0;i<4;i++){
        for(int j=0;j<4;j++){
            if(matrix[i][j] == INF)
                printf("%7s","INF");
            else
                printf("%7d", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{   
    int graph[4][4]={{0,7,5,INF},
                     {INF,0,7,6},
                     {INF,INF,0,INF},
                     {4,1,11,0}
                    };

    flyod_warshall(graph);
    return 0;
}