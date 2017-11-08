#include <stdio.h>

#define N   5
#define M   10

int main( void ) 
{
    char lines[N][M];
    size_t n = 0;
    int p, q;
    while( n < N && fgets( lines[n], sizeof( *lines ), stdin ) != NULL ) ++n;

    for ( size_t i = 0; i < n; i++ ) puts( lines[i] );
    
  // for(p = 0; p <= N; p++){
//	for(q = 0; q <= M; q++){
    	//	printf("%s",lines[p][q]);
	//}
//    }     

    return 0;
}
