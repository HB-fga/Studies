/* Essa eh a funcao kbhit. Ela retorna 1 se existe algo no buffer do teclado, e 0 senao.
Existir algo no buffer do teclado significa que o usuario pressionou alguma tecla.
Se voce usar o scanf, provavelmente ele recebera esse valor que esta no buffer.
Obs: o buffer, pelo o que eu entendi, funciona meio como uma fila. Se voce pressionar:
"aaaaaaaa" e depois colocar o scanf pra ler, ele vai retirar um 'a' de cada vez ate pegar todos,
mesmo que voce esteja apertando novas teclas.
Eu nao consegui usar essa funcao pras setas do teclado, optei por WASD.*/

int kbhit(void)//FUNÇÃO KBHIT IMPLEMENTADA PRO LINUX	/**/
{														/**/
  struct termios oldt, newt;							/**/
  int ch;												/**/
  int oldf;												/**/
														/**/
  tcgetattr(STDIN_FILENO, &oldt);						/**/
  newt = oldt;											/**/
  newt.c_lflag &= ~(ICANON | ECHO);						/**/
  tcsetattr(STDIN_FILENO, TCSANOW, &newt);				/**/
  oldf = fcntl(STDIN_FILENO, F_GETFL, 0);				/**/
  fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);		/**/
 														/**/
  ch = getchar();										/**/
 														/**/
  tcsetattr(STDIN_FILENO, TCSANOW, &oldt);				/**/
  fcntl(STDIN_FILENO, F_SETFL, oldf);					/**/
 														/**/
  if(ch != EOF)											/**/
  {														/**/
    ungetc(ch, stdin);									/**/
    return 1;											/**/
  }														/**/
 														/**/
  return 0;												/**/
}														/**/
/**********************************************************/
