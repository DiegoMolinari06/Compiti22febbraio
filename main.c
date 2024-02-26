int main(){
    int numeri[10];
    int i, massimo;
    printf("Inserisci 10 numeri positivi:\n");
    for(i=0; i<10; i++){
    	do{
    		printf("Numero %d: ",i+1);
        	scanf("%d", &numeri[i]);
		}while(numeri[i] < 0);
    }
    massimo = numeri[0];
    for(i=1; i<10; i++){
        if(numeri[i] > massimo){
            massimo = numeri[i];
        }
    }
    printf("Il massimo tra i numeri e': %d", massimo);
    return 0;
}
