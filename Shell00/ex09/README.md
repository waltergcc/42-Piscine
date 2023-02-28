# ft_magic

#### Entendendo a escrita do arquivo:
```
41 string 42  42 file
└┬┘└─┬──┘ └┬┘ └──┬───┘
 │   │     │     └─── Texto a ser exibido quando os critérios forem achados.
 │   │     └───────── O texto a ser procurado é 42.
 │   └─────────────── Procura uma correspodência do tipo string.
 └─────────────────── Começa a procura a partir do byte 42. 
```
É 41 porque o índice começa em 0. Sendo assim o 42º é o 41. 


Para testar o magic file precisa compilar o arquivo usando o comando `file`.
```bash
file -C -m ft_magic
```
Após compilado é gerado um arquivo .mgc. Para listar os arquivos e mostrar a correspodência definidas no ft_magic.
```bash
file -m ft_magic.mgc *
```