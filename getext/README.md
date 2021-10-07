# Get Extension of Files
### Compile:

```
gcc -march=native getext.c -o getext && strip --strip-unneeded getext
```
### Usage

```
$ ./getext hello-world-v0.1.2.pre.beta.rb
rb

$ ./getext hello...world
world

$ ./getext something...

```

If the input has no extension (like the `something...` example, it will return "\n").
By default, no output is given.
