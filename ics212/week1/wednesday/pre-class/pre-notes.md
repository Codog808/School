I accidentally rm'd the notes, thought it was an extra file I made...

focus upon working on linux machines

# SSH

- network protocol to connect to remote machines
- ssh shortcut; "ssh uhunix"; make 'config' in .ssh directory of the current user.

```bash
host uhunix
  hostname uhunix.hawaii.edu
  user <username>
```

# SFTP

- network protocol to transfer files between remote machines
- use of filezilla to transfer files between host machines and uhunix machines.

# finding

- wildcards
  - asterick (\*) ; represents any sting 0 or more.
    - matches all files containing characters prepended or appended to the asterick
    - "\*.c" display all files with the ".c" extension
  - question mark (?) ; represents a singular character
    - matches all files containing equal amount of characters, prepended or appended, to the question mark(s).
    - "???.c" could display "abc.c" or "add.c"

# terminal commands

- ls ; list directory
  - uses the wildcards to display those specified filename matches.
- pwd ; print working directory
- more ; display file contents, page at a time
- less ; display file contents, with scrolling and searching capabilities
- head ; display first 10 lines of a file
- tail - display last 10 lines of a file
- cd - change directory
- man - manual
  - uses 'more' to display information about a command

# vim

- text editor

# output redirection

- command > file.txt

# summary

- Complete usage of filezilla and ssh. Highlighting terminal commands and abilities of the terminal. Connecting to the UH linux servers to begin the journey of coding in the C language.
