/* int main (){

  int num = 42;
  float pi = 3.14;
  char ch = 'A';

//Criação dos ponteiros:

     int *ptr_int;
     float *ptr_float;
     char *ptr_char; 

//Atribuição do endereço de memória da variável:

     ptr_int = &num; 
     ptr_float = &pi;
     ptr_char = &ch; 

Usando os operadores de referência "&" e desreferência "*":

  int *ptr;

Atribuição de endereço ao ponteiro ptr:

  ptr = &num;

Imprimir o endereço da váriavel:

  printf("Endereço de num: %p\n", &num);

Imprimir o endereço armazenado no ponteiro:
  
  printf("Endereço armazenado em ptr: %p\n", ptr);

return 0; */

//Compilando o exemplo:

int main (){

  int num = 42;
  int *ptr = &num;
  
  printf("Valor de num: %d\n", num);
  printf("Endereço de memória de num: %p\n", &num);
  printf("Valor apontado por ptr: %d\n", *ptr);
  printf("Endereço de memória apontado por ptr: %p\n", ptr);

  *ptr = 98;

  printf("Novo valor de num: %d\n", num);

return 0;
}