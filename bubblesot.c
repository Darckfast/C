void bubble_sort(intvet[],intmax){
	int flag,i,aux;

	do{
		flag = 0;
		for(i = 0;i < (max-1);i++){
			if(vet[i] > vet[i+1]){
				aux = vet[i];
				vet[i] = vet[i+1];
				vet[i+1] = aux;
				flag = 1;
			}
		}
	}while(flag == 1);

	for(i = 0;i < max;i++){
		printf("%d",vet[i]);
	}
	printf("\n");
}
