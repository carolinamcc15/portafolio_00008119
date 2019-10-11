Obtener el segundo elemento de una pila, de arriba (top) hacia
abajo; dejando la pila sin sus dos elementos de arriba.

//Si se debe inicializar la pila

c = initialize;
valor=0;

push (c,H);
push (c,O);
push (c,L);
push (c,A);

pop (c);

valor = pop(c);	//Se guarda el valor del segundo elemento en la variable



//Si ya está inicializada

contador=0;
valor=0;

while(no se ha terminado de leer los elementos){
contador++;
}

if(!empty(c)){
	if(contador>=1){
	cout << "Solo hay un elemento" << endl;
}
	else if(contador>=2){
	pop (c);

	valor = pop(c);	//Se guarda el valor del segundo elemento en la variable
}

}
else{
cout << "La pila está vacía" << endl;
}

cout << "Segundo valor: " << valor << endl;

---------------------------------------------------------------------------------------
Obtenga el elemento que se encuentra al fondo de la pila, dejando
la pila vacía.

//Si se debe inicializar la pila

a = initialize

push (a,A);
push (a,D);
push (a,I);
push (a,O);
push (a,S);

pop (a);
pop (a);
pop (a);
pop (a);

fondo = pop (a);	//Se guarda el valor del fondo;

if (a==empty)
cout << "La pila está vacía";



//Si ya está inicializada

valor=0;

if(empty(c)){
cout << "La pila está vacía" << endl;
}
else if(!empty(c)){
	while(!empty(c)){
	valor= pop (c);
}
}

cout << "Último valor: " << valor << endl;
