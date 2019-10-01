/*Essa eh a funcao system. Ela eh usada para escrever no terminal.
No ubuntu voce pode apagar a tela do terminal usando o comando "tput reset",
entao, essa funcao nada mais eh que voce apagar o terminal via comando.
Obs: tanto essa funcao quanto a de kbhit, sao voltadas pro linux, especialmente ubuntu.
Caso voce esteja usando windows, devem haver outras funcoes, mas nao as conheco*/

#include <stdlib.h>
system("tput reset");
