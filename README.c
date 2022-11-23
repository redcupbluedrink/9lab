#include <stdio.h> 
#include <conio.h> 
#include <stdlib.h> 


/* 1
const int M = 10, N = 20;  
int random(int r) {  return rand()%r; }  
main() { 
int i, j, A[M][N], a = 1, b = 20, c;
for ( i = 0; i < M; i ++ ) 
  for ( j = 0; j < N; j ++ ) 
 {
     A[i][j] = random(b-a+1) + a;
 }
 printf("ishodnaya\n");
 for ( i = 0; i < M; i ++ ) 
{
  for ( j = 0; j < N; j ++ ) 
        printf ( "%4d", A[i][j] ); 
  printf("\n");
}
for (i = 0; i < M; i += 2){
	if (i + 1 == M)
	for (j = 0; j < N; j ++) {
		c = A[i][j];
		A[i][j] = A[i+1][j];
		A[i+1][j] = c;
	}
}
printf("izmenenaya\n");
for ( i = 0; i < M; i ++ ) 
{ 
  for ( j = 0; j < N; j ++ ) 
        printf ( "%4d", A[i][j] ); 
  printf("\n");
}
}
*/ 

/* 2
const int N = 5;
int random(int r) {  return rand()%r; }

main() {
	int i, j, a = -5, b = 5, sum = 0;
	float A[N][N];
for ( i = 0; i < N; i ++ ) 
  for ( j = 0; j < N; j ++ )
 {
     A[i][j] = random(b-a+1) + a;
 }
 printf("ishodnaya\n");
 for ( i = 0; i < N; i ++ ) 
{

  for ( j = 0; j < N; j ++ ) 
        printf ( "%6.2f", A[i][j] ); 
  printf("\n"); 
}
for (i = 0; i < N; i ++ ){
	for (j = 0; j < N; j ++ )
		sum += A[i][j];
	for (j = 0; j < N; j ++ )
 		A[i][j]=A[i][j] / sum;
	sum = 0;
	
}
printf("izmenenaya\n");
for ( i = 0; i < N; i ++ ) 
{ 
  for ( j = 0; j < N; j ++ ) 
        printf ( "%6.2f", A[i][j] ); 
  printf("\n"); 
}
}

*/

/* 3
const int N = 5;
int random (int r) { return rand()%r; }

main() {
	int i, j, A[N][N], a = 0, b = 15, B[N][N];
for ( i = 0; i < N; i ++ ) 
  for ( j = 0; j < N; j ++ ) 
 {
     A[i][j] = random(b-a+1) + a;
 }
 printf("ishodnaya\n");
 for ( i = 0; i < N; i ++ ) 
{
	 for ( j = 0; j < N; j ++ ) 
        printf ( "%4d", A[i][j] ); 
  printf("\n"); 
}
for (i =0; i < N;i ++ ){
	for (j = 0; j < N; j ++ )
		B[j][i] = A[i][j];
}
printf("tranponirovannaya\n");
 for ( i = 0; i < N; i ++ ) 
{
	 for ( j = 0; j < N; j ++ ) 
        printf ( "%4d", B[i][j] ); 
  printf("\n"); 
}
}
*/

/* 4
int main() {
int m[3][3], z = 0;
int x0 = 1, x1 = 2, x2 = 3;
int y0 = 1, y1 = 2, y2 = 3;
int i, j, r, t;
 
for(i = 0; i < 3; i ++ )
    for(j = 0; j < 3; j ++ )    
        m[i][j] = i * 3 + j + 1;

while(!(x0 == x1 && x1 == x2 && y0 == y1 && y1 == y2))
{
    for(i = 0; i < 3; i ++ ) 
    {
        for(j = 0; j < 3; j ++ )
        {
            r = (1 + rand()%9);
            t = m[r/3][r%3-1];
            m[r/3][r%3-1] = m[i][j];
            m[i][j] = t;
        }
    }
    x0 = m[0][0] + m[0][1] + m[0][2]; 
    x1 = m[1][0] + m[1][1] + m[1][2]; 
    x2 = m[2][0] + m[2][1] + m[2][2]; 
    y0 = m[0][0] + m[1][0] + m[2][0]; 
    y1 = m[0][1] + m[1][1] + m[2][1]; 
    y2 = m[0][2] + m[1][2] + m[2][2]; 
    z += 1;
}
 
for(i = 0; i < 3; i ++ ){
    for(j = 0; j < 3; j ++ )
        printf("%3d ", m[i][j]);
    printf("\n");
}
printf("\n");
printf("attempts: %d", z);
}
*/
