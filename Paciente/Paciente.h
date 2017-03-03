class Paciente {
	char nome[50];
	int idade;
	float peso;
	float altura;

public:
	void entrada(void);
	void imprime(void);
	float calcula_IMC(void);
};
