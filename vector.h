struct vector {

	vector (int initial_quantity);//construtor: funcao que é chamada qndo iniciado o vector.
	~vector();//destrutor : tem um til (~) antes do nome e não recebe parametros.
	
	int* values; //array que armazenará os valores (V)
	int quantity; //quantidade de elementos que tem no array (n)
	int array_size; //tamanho do vetor (N)

	int at (int index);
	void set (int index, int value);
	void insert (int index, int value);
	int erase (int index);
	int size ();
	bool empty (); 
};