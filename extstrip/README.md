# Strips Extension of files
### Compile:

```
gcc -march=native extstrip.c -o extstrip && strip --strip-unneeded extstrip
```
### Usage

```
$ ./extstrip hello-world-v0.1.2.pre.beta.rb
hello-world-v0.1.2.pre.beta

$ ./extstrip hello...world
hello..

$ ./extstrip something...
something...
```

By default, no output is given.
