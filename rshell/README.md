#Rshell Command Shell

## Synopsis

The rshell program runs a Linux style command prompt which allows for the input of a single command or multiple commands utilizing semicolon, &&, or || as command connectors. Once the commands are entered they are executed in the order they were read and according to their command connectors. If and when a command fails rshell is designed to output and error message and return to the command prompt.

Example of command input:

```
$ command [arguments] [connector]

```

## Code Example

Our code is constructed of vectors and objects which reads and executes shell commands in the following manner:

The following is example code which we used to created objects which would then be evaluated and returned depending on their individual outcome.
```
	if(cnn.at(i) == "&&"){
        Cmds* cmds1 = new Cmds(cmds.at(j));
        j++;
        Cmds* cmds2 = new Cmds(cmds.at(j));
        And* A = new And(cmds1, cmds2);
        A->execute();
```

## Installation

The following are instructions for installing and running rshell
```
1. $ git clone  https://github.com/victormedel/CS100_Winter_2017
2. $ cd rshell
3. $ git checkout hw2
4. $ make
5. $ bin/rshell
```

## Tests

Describe and show how to run the tests with code examples.

## Contributors

Assignment was completed by:
```
Alex Candia
Victor Medel

```

## License

The GNU General Public License is a free, copyleft license for software and other kinds of works.