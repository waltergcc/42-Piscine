# ft_magic

#### Understanding the writing of the file:
```
41 string 42  42 file
└┬┘└─┬──┘ └┬┘ └──┬───┘
 │   │     │     └─── Text to be displayed when the criteria are found.
 │   │     └───────── The text to be searched is 42.
 │   └─────────────── Search for a string type correspondence.
 └─────────────────── The search begins from byte 42. 
```
It is 41 because the index starts at 0. the 42º is 41. 


To test the Magic File it needs to compiled using the `File` command.
```bash
file -C -m ft_magic
```
After compiled, a .mgc file is generated. To list the files and show the defined correspondence in ft_magic use this command.
```bash
file -m ft_magic.mgc *
```