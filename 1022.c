#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int SIMPLIFICA(int a, int b) {

    int rem;

    do {
        rem = a % b;

        a = b;
        b = rem;

    } while (rem != 0);

    return a;
}
int main (){
	int i, ac, db,a, b, c, d, n;
	char op;
	
	scanf("%d", &i);
	for(n = 0; i > n; n++){
		scanf("%d / %d %c %d / %d", &a, &b, &op, &c, &d);
		switch(op){
			case '+':
				db = d *b ;
				ac = (a * (db/b)) + (c * (db/d));
				printf("%d/%d = %d/%d\n", ac, db, (ac / SIMPLIFICA(ac, db)), (db / SIMPLIFICA(ac, db)));
				break;
			case '-':
				db = d *b ;
				ac = (a * (db/b)) - (c * (db/d));				
				if( SIMPLIFICA(ac ,db) < 0){
					printf("%d/%d = %d/%d\n", ac, db,-(ac / SIMPLIFICA(ac, db)), -(db / SIMPLIFICA(ac, db)));
				}else{
					printf("%d/%d = %d/%d\n", ac, db,(ac / SIMPLIFICA(ac, db)), (db / SIMPLIFICA(ac, db)));}
				break;
			case '*':
				ac = a * c;
				db = b * d;
				printf("%d/%d = %d/%d\n", ac, db,(ac / SIMPLIFICA(ac, db)),(db / SIMPLIFICA(ac, db)));
				break;
			case '/':
				ac = a * d;
				db = c * b;
				printf("%d/%d = %d/%d\n", ac, db,(ac / SIMPLIFICA(ac, db)), (db / SIMPLIFICA(ac, db)));
				break;
		}		 
	}	
return 0;
} 
