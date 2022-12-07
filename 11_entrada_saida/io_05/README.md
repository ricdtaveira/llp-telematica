# Leitura e Gravação Randomica #

>
Nos exemplos anteriores os examplos acssavam arquivos sequencialmente, iniciando com 
o primeiro byte e acessando cada byte em ordem. 
>
>
Para uma função como copyfile() isso é razoavel desde que você queira ler 
e gravar cada byte de qualquer forma.
>
>
É tão rápido acessá-los sequencialmente quanto de qualquer outra forma.
>
> 
Para muitos aplicativos, no entanto, você precisa acessar bytes específicos em
no meio do arquivo.
>
> 
Nesses casos, é mais eficiente usar as funções randomicas fseek() e ftell().
>
