# CompilerTests

Clone the repo:

```
git clone git@github.com/joshuajerome/CompilerTests
```

## Running Tests
1) Put your phase3.tar file into CompilerTests folder.
   Suppose phase3.tar exists in ../coen175/project3/ , then you can do this with the following command:

   ```
   scp ../coen175/project3/phase3.tar
   ```
   
2) Run MYCHECKSUB.sh:
   
   ```
   ./MYCHECKSUB.sh phase3.tar my_examples.tar
   ```

## Adding Test Files
Within CompilerTests folder...

1) *cd* my_examples
2) Add a *.c* file and a *.out* file to my_examples.
   You can either create your own expected *.out* file or do the following:
   
   a)  
   ```
   tar xvf phase3.tar phase3
   ```
   b) 
   ```
   cd phase3
   ```
   c)
   ``` 
   make clean all
   ```
   d) 
   ```
   ./scc <../my_examples/newfilename.c> ../my_examples/newfilename.out
   ```
   This will create an output file with code that you wrote.
