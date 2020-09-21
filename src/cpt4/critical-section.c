#include<stdio.h>
#include<pthread.h>
#include<string.h>
/*Un vector de saldo en cuentas, se indexa por número de cuenta*/
float* account_balances;

/*Transferimos DOLLARS de la cuenta FROM_ACCT a la cuenta 
TO_ACCT. Retornamos 0 si la operaciónfue exitosa, 
o 1 si el saldo de FROM_ACCT no es suficiente*/

int process_transaction(int from_acct, int to_acct, float dollars){
	int old_cancel_state;
	/*Controlamos el saldo de FROM_ACCT*/
	if(account_balances[from_acct] < dollars)
		return 1;
	/*Inicio de la sección crítica*/
	pthread_setcancelstate(PTHREAD_CANCEL_DISABLE, &old_cancel_state);
	/*Movemos el dinero*/
	account_balances[to_acct] += dollars;
	account_balances [from_acct] -= dollars;
	/*Fin de la sección crítica*/
	return 0;
}

int main(){
	
	return 0;
}
