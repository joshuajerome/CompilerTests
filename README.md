# CompilerTests

Clone the repo:

```
git clone git@github.com/joshuajerome/CompilerTests
```

## Running Tests
1) Put your phasen.tar file into CompilerTests/projectn folder.
   Suppose phasen.tar exists in ../coen175/projectn/ , then you can do this with the following command:

   ```
   scp ../coen175/projectn/phasen.tar phasen.tar
   ```
   
2) Run CHECKSUB.sh:
   
   ```
   ./CHECKSUB.sh phasen.tar examples.tar
   ```

## Adding Test Files
Within CompilerTests folder...

1) *cd* examples
2) Add .c file and output file to examples.
3) Push changes
