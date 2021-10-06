Strips Extension of files. By default, no output.
### Compile:
gcc -march=native extstrip.c -o extstrip && strip --strip-unneeded extstrip

### Execute
$ ./extstrip hello-world-v0.1.2.pre.beta.rb
hello-world-v0.1.2.pre.beta

$ ./extstrip hello...world
hello..

$ ./extstrip something...
something...
