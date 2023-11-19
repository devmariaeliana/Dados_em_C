int main (){
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

return 0;


}