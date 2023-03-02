# Diff

The `patch` command applies changes of files to other files. The ** a ** and ** sw.diff ** files need to be in the same folder.

`a` Original file name.

`sw.diff` file that contains the differences.

`-o` generates an output with the name `b` with the differences between file 'a' and 'sw.siff'.

```bash
patch a sw.diff -o b
```