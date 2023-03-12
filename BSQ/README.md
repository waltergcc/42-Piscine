# BSQ

In this project we will create a program that receives a map with empty spaces and obstacles and return the largest square printed on the map. All files are commented for a better understanding.

## Maps generator

The folder `maps` contains a script that allows you to create random maps. To use this script you need to give this parameters:
```
program rows columns density > map_name
```
where `rows` receives the number of rows, `columns` receives the number of columns, `density` receives the  percent of obstacles on map and `map_name` receives the name of the output file. Follow an example:

```bash
./map_generator.pl 50 50 5 > map7 # Creates a 50x50 map with 5% obstacles
```
### Understanding the map

The map needs to have a header to be read by the program. In this header is gived the amount of lines and the characters for empty, obstacle and full.

In the map generated in the example above, the header is as follows:
```
50.ox
```
where `50` is the number of lines, `.` is the char for **empty**, `o` the char for **obstacle** and `x` the char for **full**.

## Main program

It's necessary to compile the files together to run. In this project we will compile the files using a makefile. Use the command below:

```bash
make all
```
Then run the executable with a parameter:
```bash
./bsq ./map/map_name # replace the map_name with the name of existing maps
```
## Final grade: Not started :x:
I didn't subscribe to this project during the Piscine period. All exercises were done after the Piscine end to consolidate knowledge. These exercises didn't have the validation of Moulinette.