//Criando o registro:

struct Pessoa {
    
    char nome[50];
    int idade;
    char cidade[20];
};

//Declaração da variável "pessoa1":

struct Pessoa pessoa1;

//Acessar aos campos do registro "Pessoa" com o operador ".":

pessoa1.nome[50];

pessoa1.idade;

pessoa1.cidade[20];

//Inicializando os campos individuais:

pessoa1.nome = "João";

pessoa1.idade = 30;

strcpy(pessoa1.cidade, "São Paulo");

//Inicializando os campos em uma única linha, sistema de Array;

struct Pessoa pessoa2 = {"Maria", 25, "Rio de Janeiro"}

//Parâmentos para funções om o operador de seleção ".":


void imprimirPessoa(struct Pessoa p){
     
     printf("Nome:  %s\n", p.nome);
     printf("Idade:  %d\n", p.idade);
     printf("Cidade:  %s\n", p.cidade);
}

//Parâmentos para funções por referência:

void modificarPessoa(struct Pessoa* p, int novaIdade){
     
     p-> idade = novaIdade;
     strcpy(p->cidade, "Nova Cidade");
}
