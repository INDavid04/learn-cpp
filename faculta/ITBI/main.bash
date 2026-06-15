vboxuser@UbuntuFMI:~$ a = 2009
a: command not found
vboxuser@UbuntuFMI:~$ cd ./ub
bash: cd: ./ub: No such file or directory
vboxuser@UbuntuFMI:~$ cd ubb/
vboxuser@UbuntuFMI:~/ubb$ ls
asc
vboxuser@UbuntuFMI:~/ubb$ mkdir itbi
vboxuser@UbuntuFMI:~/ubb$ cd itbi
vboxuser@UbuntuFMI:~/ubb/itbi$ a=2009
vboxuser@UbuntuFMI:~/ubb/itbi$ echo $a
2009
vboxuser@UbuntuFMI:~/ubb/itbi$ string1="anul ($a)"
vboxuser@UbuntuFMI:~/ubb/itbi$ echo string1
string1
vboxuser@UbuntuFMI:~/ubb/itbi$ echo $string1
anul (2009)
vboxuser@UbuntuFMI:~/ubb/itbi$ read var
test
vboxuser@UbuntuFMI:~/ubb/itbi$ echo var
var
vboxuser@UbuntuFMI:~/ubb/itbi$ read a b c
1 2 3 4 5 
vboxuser@UbuntuFMI:~/ubb/itbi$ echo $a $b
1 2
vboxuser@UbuntuFMI:~/ubb/itbi$ echo $c
3 4 5
vboxuser@UbuntuFMI:~/ubb/itbi$ echo ${a} si ${b} si ${c}
1 si 2 si 3 4 5
vboxuser@UbuntuFMI:~/ubb/itbi$ echo ${defaultstring:- Philip Yancey}
Philip Yancey
vboxuser@UbuntuFMI:~/ubb/itbi$ echo defaultstring
defaultstring
vboxuser@UbuntuFMI:~/ubb/itbi$ echo ${defaultstring}

vboxuser@UbuntuFMI:~/ubb/itbi$ echo $defaultstring

vboxuser@UbuntuFMI:~/ubb/itbi$ echo -n "prima lista de comenzi "; whoami; ls -l
prima lista de comenzi vboxuser
total 0
vboxuser@UbuntuFMI:~/ubb/itbi$ echo cat > animals.txt
vboxuser@UbuntuFMI:~/ubb/itbi$ grep cat animals.txt
cat
vboxuser@UbuntuFMI:~/ubb/itbi$ echo $?
0
vboxuser@UbuntuFMI:~/ubb/itbi$ grep dog animals.txt
vboxuser@UbuntuFMI:~/ubb/itbi$ echo $?
1
vboxuser@UbuntuFMI:~/ubb/itbi$ echo Ana > agend.txt
vboxuser@UbuntuFMI:~/ubb/itbi$ grep Ana agenda.txt
grep: agenda.txt: No such file or directory
vboxuser@UbuntuFMI:~/ubb/itbi$ grep Ana agend.txt
Ana
vboxuser@UbuntuFMI:~/ubb/itbi$ echo Ana > agend.txt
vboxuser@UbuntuFMI:~/ubb/itbi$ grep Ana agend.txt || echo "Persoana nu exista"
Ana
vboxuser@UbuntuFMI:~/ubb/itbi$ grep Mara agend.txt || "Persoana nu exista"
Persoana nu exista: command not found
vboxuser@UbuntuFMI:~/ubb/itbi$ echo Maria > agend.txt
vboxuser@UbuntuFMI:~/ubb/itbi$ grep Ana agenda.txt || grep Maria agend.txt
grep: agenda.txt: No such file or directory
Maria
vboxuser@UbuntuFMI:~/ubb/itbi$ cat -
echo
echo
stop doing that
stop doing that
press ctrl-d
press ctrl-d
vboxuser@UbuntuFMI:~/ubb/itbi$ cat - > hello.c
#include <iostream>
using namespace std;
int main() {
	print ("Hello world!");
	return 0;
}vboxuser@UbuntuFMI:~/ubb/itbi$ cat hello.c
#include <iostream>
using namespace std;
int main() {
	print ("Hello world!");
	return 0;
}vboxuser@UbuntuFMI:~/ubb/itbi$ cat << END > hello.c
> #include <stdio.h>
> 
> int main() {
> print("Hellow world!");
> }
> END
vboxuser@UbuntuFMI:~/ubb/itbi$ cat hello.c
#include <stdio.h>

int main() {
print("Hellow world!");
}
vboxuser@UbuntuFMI:~/ubb/itbi$ cat < 'tty' > hello.c
bash: tty: No such file or directory
vboxuser@UbuntuFMI:~/ubb/itbi$ cat < 'tty' > hello.c
bash: tty: No such file or directory
vboxuser@UbuntuFMI:~/ubb/itbi$ cat < /dev/pts/1 > hello.c
bash: /dev/pts/1: No such file or directory
vboxuser@UbuntuFMI:~/ubb/itbi$ cc hello.c -o hello
Command 'cc' not found, but can be installed with:
sudo apt install gcc              # version 4:13.2.0-2ubuntu1, or
sudo apt install clang            # version 1:17.0-58~exp1
sudo apt install pcc              # version 1.2.0~DEVEL+20220331-1
sudo apt install pentium-builder  # version 0.21+nmu2ubuntu1
sudo apt install tcc              # version 0.9.27+git20200814.62c30a4a-1
vboxuser@UbuntuFMI:~/ubb/itbi$ sudo apt install gcc
[sudo] password for vboxuser: 
Reading package lists... Done
Building dependency tree... Done
Reading state information... Done
The following additional packages will be installed:
  gcc-13 gcc-13-x86-64-linux-gnu gcc-x86-64-linux-gnu libasan8 libcc1-0
  libgcc-13-dev libhwasan0 libitm1 liblsan0 libquadmath0 libtsan2 libubsan1
Suggested packages:
  gcc-multilib make autoconf automake libtool flex bison gcc-doc
  gcc-13-multilib gcc-13-doc gcc-13-locales gdb-x86-64-linux-gnu
The following NEW packages will be installed:
  gcc gcc-13 gcc-13-x86-64-linux-gnu gcc-x86-64-linux-gnu libasan8 libcc1-0
  libgcc-13-dev libhwasan0 libitm1 liblsan0 libquadmath0 libtsan2 libubsan1
0 upgraded, 13 newly installed, 0 to remove and 5 not upgraded.
Need to get 35.2 MB of archives.
After this operation, 124 MB of additional disk space will be used.
Do you want to continue? [Y/n] y
Get:1 http://archive.ubuntu.com/ubuntu noble/main amd64 libcc1-0 amd64 14-20240412-0ubuntu1 [47.7 kB]
Get:2 http://archive.ubuntu.com/ubuntu noble/main amd64 libitm1 amd64 14-20240412-0ubuntu1 [28.9 kB]
Get:3 http://archive.ubuntu.com/ubuntu noble/main amd64 libasan8 amd64 14-20240412-0ubuntu1 [3,024 kB]
Get:4 http://archive.ubuntu.com/ubuntu noble/main amd64 liblsan0 amd64 14-20240412-0ubuntu1 [1,313 kB]
Get:5 http://archive.ubuntu.com/ubuntu noble/main amd64 libtsan2 amd64 14-20240412-0ubuntu1 [2,736 kB]
Get:6 http://archive.ubuntu.com/ubuntu noble/main amd64 libubsan1 amd64 14-20240412-0ubuntu1 [1,175 kB]
Get:7 http://archive.ubuntu.com/ubuntu noble/main amd64 libhwasan0 amd64 14-20240412-0ubuntu1 [1,632 kB]
Get:8 http://archive.ubuntu.com/ubuntu noble/main amd64 libquadmath0 amd64 14-20240412-0ubuntu1 [153 kB]
Get:9 http://archive.ubuntu.com/ubuntu noble/main amd64 libgcc-13-dev amd64 13.2.0-23ubuntu4 [2,688 kB]
Ign:9 http://archive.ubuntu.com/ubuntu noble/main amd64 libgcc-13-dev amd64 13.2.0-23ubuntu4
Get:10 http://archive.ubuntu.com/ubuntu noble/main amd64 gcc-13-x86-64-linux-gnu amd64 13.2.0-23ubuntu4 [21.9 MB]
Ign:10 http://archive.ubuntu.com/ubuntu noble/main amd64 gcc-13-x86-64-linux-gnu amd64 13.2.0-23ubuntu4
Get:11 http://archive.ubuntu.com/ubuntu noble/main amd64 gcc-13 amd64 13.2.0-23ubuntu4 [482 kB]
Get:12 http://archive.ubuntu.com/ubuntu noble/main amd64 gcc-x86-64-linux-gnu amd64 4:13.2.0-7ubuntu1 [1,212 B]
Get:13 http://archive.ubuntu.com/ubuntu noble/main amd64 gcc amd64 4:13.2.0-7ubuntu1 [5,018 B]
Get:9 http://archive.ubuntu.com/ubuntu noble/main amd64 libgcc-13-dev amd64 13.2.0-23ubuntu4 [2,688 kB]
Get:10 http://archive.ubuntu.com/ubuntu noble/main amd64 gcc-13-x86-64-linux-gnu amd64 13.2.0-23ubuntu4 [21.9 MB]
Ign:10 http://archive.ubuntu.com/ubuntu noble/main amd64 gcc-13-x86-64-linux-gnu amd64 13.2.0-23ubuntu4
Get:10 http://archive.ubuntu.com/ubuntu noble/main amd64 gcc-13-x86-64-linux-gnu amd64 13.2.0-23ubuntu4 [21.9 MB]
Ign:10 http://archive.ubuntu.com/ubuntu noble/main amd64 gcc-13-x86-64-linux-gnu amd64 13.2.0-23ubuntu4
Get:10 http://archive.ubuntu.com/ubuntu noble/main amd64 gcc-13-x86-64-linux-gnu amd64 13.2.0-23ubuntu4 [21.9 MB]
Fetched 26.4 MB in 10min 50s (40.6 kB/s)                                       
Selecting previously unselected package libcc1-0:amd64.
(Reading database ... 148327 files and directories currently installed.)
Preparing to unpack .../00-libcc1-0_14-20240412-0ubuntu1_amd64.deb ...
Unpacking libcc1-0:amd64 (14-20240412-0ubuntu1) ...
Selecting previously unselected package libitm1:amd64.
Preparing to unpack .../01-libitm1_14-20240412-0ubuntu1_amd64.deb ...
Unpacking libitm1:amd64 (14-20240412-0ubuntu1) ...
Selecting previously unselected package libasan8:amd64.
Preparing to unpack .../02-libasan8_14-20240412-0ubuntu1_amd64.deb ...
Unpacking libasan8:amd64 (14-20240412-0ubuntu1) ...
Selecting previously unselected package liblsan0:amd64.
Preparing to unpack .../03-liblsan0_14-20240412-0ubuntu1_amd64.deb ...
Unpacking liblsan0:amd64 (14-20240412-0ubuntu1) ...
Selecting previously unselected package libtsan2:amd64.
Preparing to unpack .../04-libtsan2_14-20240412-0ubuntu1_amd64.deb ...
Unpacking libtsan2:amd64 (14-20240412-0ubuntu1) ...
Selecting previously unselected package libubsan1:amd64.
Preparing to unpack .../05-libubsan1_14-20240412-0ubuntu1_amd64.deb ...
Unpacking libubsan1:amd64 (14-20240412-0ubuntu1) ...
Selecting previously unselected package libhwasan0:amd64.
Preparing to unpack .../06-libhwasan0_14-20240412-0ubuntu1_amd64.deb ...
Unpacking libhwasan0:amd64 (14-20240412-0ubuntu1) ...
Selecting previously unselected package libquadmath0:amd64.
Preparing to unpack .../07-libquadmath0_14-20240412-0ubuntu1_amd64.deb ...
Unpacking libquadmath0:amd64 (14-20240412-0ubuntu1) ...
Selecting previously unselected package libgcc-13-dev:amd64.
Preparing to unpack .../08-libgcc-13-dev_13.2.0-23ubuntu4_amd64.deb ...
Unpacking libgcc-13-dev:amd64 (13.2.0-23ubuntu4) ...
Selecting previously unselected package gcc-13-x86-64-linux-gnu.
Preparing to unpack .../09-gcc-13-x86-64-linux-gnu_13.2.0-23ubuntu4_amd64.deb ..
.
Unpacking gcc-13-x86-64-linux-gnu (13.2.0-23ubuntu4) ...
Selecting previously unselected package gcc-13.
Preparing to unpack .../10-gcc-13_13.2.0-23ubuntu4_amd64.deb ...
Unpacking gcc-13 (13.2.0-23ubuntu4) ...
Selecting previously unselected package gcc-x86-64-linux-gnu.
Preparing to unpack .../11-gcc-x86-64-linux-gnu_4%3a13.2.0-7ubuntu1_amd64.deb ..
.
Unpacking gcc-x86-64-linux-gnu (4:13.2.0-7ubuntu1) ...
Selecting previously unselected package gcc.
Preparing to unpack .../12-gcc_4%3a13.2.0-7ubuntu1_amd64.deb ...
Unpacking gcc (4:13.2.0-7ubuntu1) ...
Setting up libquadmath0:amd64 (14-20240412-0ubuntu1) ...
Setting up libubsan1:amd64 (14-20240412-0ubuntu1) ...
Setting up libhwasan0:amd64 (14-20240412-0ubuntu1) ...
Setting up libasan8:amd64 (14-20240412-0ubuntu1) ...
Setting up libtsan2:amd64 (14-20240412-0ubuntu1) ...
Setting up libcc1-0:amd64 (14-20240412-0ubuntu1) ...
Setting up liblsan0:amd64 (14-20240412-0ubuntu1) ...
Setting up libitm1:amd64 (14-20240412-0ubuntu1) ...
Setting up libgcc-13-dev:amd64 (13.2.0-23ubuntu4) ...
Setting up gcc-13-x86-64-linux-gnu (13.2.0-23ubuntu4) ...
Setting up gcc-13 (13.2.0-23ubuntu4) ...
Setting up gcc-x86-64-linux-gnu (4:13.2.0-7ubuntu1) ...
Setting up gcc (4:13.2.0-7ubuntu1) ...
Processing triggers for man-db (2.12.0-4build2) ...
Processing triggers for libc-bin (2.39-0ubuntu8.3) ...
vboxuser@UbuntuFMI:~/ubb/itbi$ cc hello.c -o hello
hello.c: In function ‘main’:
hello.c:4:1: warning: implicit declaration of function ‘print’; did you mean ‘printf’? [-Wimplicit-function-declaration]
    4 | print("Hellow world!");
      | ^~~~~
      | printf
/usr/bin/ld: /tmp/ccMv3dtj.o: in function `main':
hello.c:(.text+0x18): undefined reference to `print'
collect2: error: ld returned 1 exit status
vboxuser@UbuntuFMI:~/ubb/itbi$ cat hello.c
#include <stdio.h>

int main() {
print("Hellow world!");
}
vboxuser@UbuntuFMI:~/ubb/itbi$ cat - > hello.c
#include <stdio.h>
int main() {
	printf("Hello world!");
        return 0;
}
vboxuser@UbuntuFMI:~/ubb/itbi$ cc hello.c -o hello
vboxuser@UbuntuFMI:~/ubb/itbi$ hello
Command 'hello' not found, but can be installed with:
sudo snap install hello              # version 2.10, or
sudo apt  install hello              # version 2.10-3
sudo apt  install hello-traditional  # version 2.10-6
See 'snap info hello' for additional versions.
vboxuser@UbuntuFMI:~/ubb/itbi$ ./hello
Hello world!vboxuser@UbuntuFMI:~/ubb/itbi$ cat hello
@@@@�((yy   ���-�=�=X`�-�=�=�8880hhhDDS�td8880P�td   44Q�tdR�td�-�=�=HH/lib64/ld-linux-x86-64.so.2 GNU���GNU�\"�X���9?��}�|,�GNU��e�mJ "f u "__libc_start_main__cxa_finalizeprintflibc.so.6GLIBC_2.2.5GLIBC_2.34_ITM_deregisterTMCloneTable__gmon_start___ITM_registerTMCloneTable)u�i	3���?�@�?�?�?�?�?�?��H�H��/H��t��H���5�/�%�/@��h�����f����%�/fD���%v/fD��1�I��^H��H���PTE1�1�H�=��S/�f.�H�=y/H�r/H9�tH�6/H��t	�����H�=I/H�5B/H)�H��H��?H��H�H��tH�/H����fD�����=/u+UH�=�.H��t
                                                                       H�=�.�����d�����.]������w�����UH��H��H�Ǹ������]���H�H��Hello world!0
                                                           ���d,����<����L���L5����zRx
     ����&D$4���� FJ
Z                   �?�9*3$"\����t�����q���#E�C
@)
l������o���
�
 �?�   ������o ���o���o���o�=@GCC: (Ubuntu 13.2.0-23ubuntu4) 13.2.0��	� ��� �3I�@U�=|@��=������� ����=� ��?�
                               J @(@/l5H@U @q ��@N`&��@�I#�@� �"�
                                                                 Scrt1.o__abi_tagcrtstuff.cderegister_tm_clones__do_global_dtors_auxcompleted.0__do_global_dtors_aux_fini_array_entryframe_dummy__frame_dummy_init_array_entryhello.c__FRAME_END___DYNAMIC__GNU_EH_FRAME_HDR_GLOBAL_OFFSET_TABLE___libc_start_main@GLIBC_2.34_ITM_deregisterTMCloneTable_edata_finiprintf@GLIBC_2.2.5__data_start__gmon_start____dso_handle_IO_stdin_used_end__bss_startmain__TMC_END___ITM_registerTMCloneTable__cxa_finalize@GLIBC_2.2.5_init.symtab.strtab.shstrtab.interp.note.gnu.property.note.gnu.build-id.note.ABI-tag.gnu.hash.dynsym.dynstr.gnu.version.gnu.version_r.rela.dyn.rela.plt.init.plt.got.plt.sec.text.fini.rodata.eh_frame_hdr.eh_frame.init_array.fini_array.dynamic.data.bss.comment#886hh$I�� W���o��a
                                                               ��i���q���o~���o  �PP��   �@@�PP�``
�  �  4�H H ������=�-��?�@0
                         @00&80`�3�u5�vboxuser@UbuntuFMI:~/ubb/itbi$ cat hello.c
#include <stdio.h>
int main() {
	printf("Hello world!");
	return 0;
}
vboxuser@UbuntuFMI:~/ubb/itbi$ cat -  > hello
vboxuser@UbuntuFMI:~/ubb/itbi$ cat - > hello.c
vboxuser@UbuntuFMI:~/ubb/itbi$ cat - > hello.c
#include <iostream>
int main() {
	printf("Hello world!\n");
	return 0;
}
vboxuser@UbuntuFMI:~/ubb/itbi$ cc hello.c -o hello
hello.c:1:10: fatal error: iostream: No such file or directory
    1 | #include <iostream>
      |          ^~~~~~~~~~
compilation terminated.
vboxuser@UbuntuFMI:~/ubb/itbi$ cat - > hello
#include <stdio.h>
int main() {
	printf("Hello world!\n");
	return 0;
}
vboxuser@UbuntuFMI:~/ubb/itbi$ cc hello.c -o hello
hello.c:1:10: fatal error: iostream: No such file or directory
    1 | #include <iostream>
      |          ^~~~~~~~~~
compilation terminated.
vboxuser@UbuntuFMI:~/ubb/itbi$ cat - > hello.c
#include <iostream>
int main () {
	printf("Hello World!\n");
	return 0;
}
vboxuser@UbuntuFMI:~/ubb/itbi$ cc hello.c -o hello
hello.c:1:10: fatal error: iostream: No such file or directory
    1 | #include <iostream>
      |          ^~~~~~~~~~
compilation terminated.
vboxuser@UbuntuFMI:~/ubb/itbi$ gcc hello.c -0 hello
gcc: error: unrecognized command-line option ‘-0’
vboxuser@UbuntuFMI:~/ubb/itbi$ gcc hello.c -o hello
hello.c:1:10: fatal error: iostream: No such file or directory
    1 | #include <iostream>
      |          ^~~~~~~~~~
compilation terminated.
vboxuser@UbuntuFMI:~/ubb/itbi$ cat - > hello.c
#include <iostream>
int main () {
	printf("Hello World!\n");
	return 0;
}
vboxuser@UbuntuFMI:~/ubb/itbi$ cat - > hello.c
#include <stdio.h>
int main() {
	printf("Hello world!\n");
	return 0;
}
vboxuser@UbuntuFMI:~/ubb/itbi$ gcc hello.c -o hello
vboxuser@UbuntuFMI:~/ubb/itbi$ ./hello
Hello world!
vboxuser@UbuntuFMI:~/ubb/itbi$ cat - > printenv.c
#include <stdio.h>
int main() {
vboxuser@UbuntuFMI:~/ubb/itbi$ cat - > printenv.c
#include <stdio.h>
int main(int argc, char *argv[], char *envp[]) {
	prinf("Prima variabila de mediu este %s\n", envp[0]);
	exit(0);
} 
vboxuser@UbuntuFMI:~/ubb/itbi$ gcc printenv.c -o printenv
printenv.c: In function ‘main’:
printenv.c:3:9: warning: implicit declaration of function ‘prinf’; did you mean ‘printf’? [-Wimplicit-function-declaration]
    3 |         prinf("Prima variabila de mediu este %s\n", envp[0]);
      |         ^~~~~
      |         printf
printenv.c:4:9: warning: implicit declaration of function ‘exit’ [-Wimplicit-function-declaration]
    4 |         exit(0);
      |         ^~~~
printenv.c:2:1: note: include ‘<stdlib.h>’ or provide a declaration of ‘exit’
    1 | #include <stdio.h>
  +++ |+#include <stdlib.h>
    2 | int main(int argc, char *argv[], char *envp[]) {
printenv.c:4:9: warning: incompatible implicit declaration of built-in function ‘exit’ [-Wbuiltin-declaration-mismatch]
    4 |         exit(0);
      |         ^~~~
printenv.c:4:9: note: include ‘<stdlib.h>’ or provide a declaration of ‘exit’
/usr/bin/ld: /tmp/ccgqTzCC.o: in function `main':
printenv.c:(.text+0x31): undefined reference to `prinf'
collect2: error: ld returned 1 exit status
vboxuser@UbuntuFMI:~/ubb/itbi$ cat -> printenv.c
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[], char *envp[]) {
	printf("Prima variabila de mediu este %s\n", envp[0]);
        exit(0);
}
vboxuser@UbuntuFMI:~/ubb/itbi$ cc printenv.c -o printenv
vboxuser@UbuntuFMI:~/ubb/itbi$ ./printenv
Prima variabila de mediu este SHELL=/bin/bash
vboxuser@UbuntuFMI:~/ubb/itbi$ read a b c
12 4 14
vboxuser@UbuntuFMI:~/ubb/itbi$ echo ${a} + ${b} + ${c}
12 + 4 + 14
vboxuser@UbuntuFMI:~/ubb/itbi$ suma = $a + $b + $c
Command 'suma' not found, did you mean:
  command 'sma' from deb sma (1.4-3.1)
  command 'sum' from deb coreutils (9.4-2ubuntu2)
  command 'duma' from deb duma (2.5.21-7)
  command 'sumo' from deb sumo (1.18.0+dfsg-3build2)
  command 'puma' from deb puma (6.4.2-4ubuntu4.3)
Try: sudo apt install <deb name>
vboxuser@UbuntuFMI:~/ubb/itbi$ suma=$a+$b+$c
vboxuser@UbuntuFMI:~/ubb/itbi$ echo suma
suma
vboxuser@UbuntuFMI:~/ubb/itbi$ echo $suma
12+4+14
vboxuser@UbuntuFMI:~/ubb/itbi$ suma=expr $a + $b + $c
12: command not found
vboxuser@UbuntuFMI:~/ubb/itbi$ suma=expr $a+$b+$c
12+4+14: command not found
vboxuser@UbuntuFMI:~/ubb/itbi$ suma=$(expr $a+$b+$c)
vboxuser@UbuntuFMI:~/ubb/itbi$ echo $suma
12+4+14
vboxuser@UbuntuFMI:~/ubb/itbi$ expr $a+$b+$c
12+4+14
vboxuser@UbuntuFMI:~/ubb/itbi$ expr $a + $b + $c
30
vboxuser@UbuntuFMI:~/ubb/itbi$ suma=$(expr $a + $b + $c)
vboxuser@UbuntuFMI:~/ubb/itbi$ echo suma
suma
vboxuser@UbuntuFMI:~/ubb/itbi$ echo $suma
30
vboxuser@UbuntuFMI:~/ubb/itbi$ expr $a + $b + $c
30
vboxuser@UbuntuFMI:~/ubb/itbi$ myusername:- whoami
myusername:-: command not found
vboxuser@UbuntuFMI:~/ubb/itbi$ echo myusername:- whoami
myusername:- whoami
vboxuser@UbuntuFMI:~/ubb/itbi$ echo ${myusername:- whoami}
whoami
vboxuser@UbuntuFMI:~/ubb/itbi$ whoami
vboxuser
vboxuser@UbuntuFMI:~/ubb/itbi$ echo ${myusername:- $whoami}

vboxuser@UbuntuFMI:~/ubb/itbi$ echo ${myusername:- $(whoami)}
vboxuser
vboxuser@UbuntuFMI:~/ubb/itbi$ ./hello
Hello world!
vboxuser@UbuntuFMI:~/ubb/itbi$ cc hello.c -o hello && ./hello
Hello world!
vboxuser@UbuntuFMI:~/ubb/itbi$ cat - > hello.c
^C
vboxuser@UbuntuFMI:~/ubb/itbi$ nano hello.c
vboxuser@UbuntuFMI:~/ubb/itbi$ nano hello.c
vboxuser@UbuntuFMI:~/ubb/itbi$ ./hello
Hello world!
vboxuser@UbuntuFMI:~/ubb/itbi$ nano hello.c
vboxuser@UbuntuFMI:~/ubb/itbi$ cc hello.c -o hello && ./hello
hello.c: In function ‘main’:
hello.c:5:15: warning: format not a string literal and no format arguments [-Wformat-security]
    5 |         scanf(nume);
      |               ^~~~
Hello, ${nume}vboxuser@UbuntuFMI:~/ubb/itbi$ nano hello
vboxuser@UbuntuFMI:~/ubb/itbi$ nano hello.c
vboxuser@UbuntuFMI:~/ubb/itbi$ cc hello.c -o hello && ./hello
hello.c: In function ‘main’:
hello.c:5:15: error: ‘$’ undeclared (first use in this function)
    5 |         scanf(${nume});
      |               ^
hello.c:5:15: note: each undeclared identifier is reported only once for each function it appears in
hello.c:5:16: error: expected ‘)’ before ‘{’ token
    5 |         scanf(${nume});
      |              ~ ^
      |                )
vboxuser@UbuntuFMI:~/ubb/itbi$ nano hello.c
vboxuser@UbuntuFMI:~/ubb/itbi$ cc hello.c -o hello && ./hello
hello.c: In function ‘main’:
hello.c:5:15: error: ‘$nume’ undeclared (first use in this function); did you mean ‘nume’?
    5 |         scanf($nume);
      |               ^~~~~
      |               nume
hello.c:5:15: note: each undeclared identifier is reported only once for each function it appears in
vboxuser@UbuntuFMI:~/ubb/itbi$ nano hello.c
vboxuser@UbuntuFMI:~/ubb/itbi$ cc hello.c -o hello && ./hello
hello.c: In function ‘main’:
hello.c:5:15: error: ‘$nume’ undeclared (first use in this function); did you mean ‘nume’?
    5 |         scanf($nume);
      |               ^~~~~
      |               nume
hello.c:5:15: note: each undeclared identifier is reported only once for each function it appears in
vboxuser@UbuntuFMI:~/ubb/itbi$ nano hello.c
vboxuser@UbuntuFMI:~/ubb/itbi$ cc hello.c -o hello && ./hello
Mihaita
Hello, $numevboxuser@UbuntuFMI:~/ubb/itbi$ nano hello.c
vboxuser@UbuntuFMI:~/ubb/itbi$ cc hello.c -o hello && ./hello
Mihaita
Hello, ${nume}
vboxuser@UbuntuFMI:~/ubb/itbi$ nano hello.c
vboxuser@UbuntuFMI:~/ubb/itbi$ cc hello.c -o hello && ./hello
Mihaita
Hello, Mihaita
vboxuser@UbuntuFMI:~/ubb/itbi$ nano printenv.c
vboxuser@UbuntuFMI:~/ubb/itbi$ ./printenv 
Prima variabila de mediu este SHELL=/bin/bash
vboxuser@UbuntuFMI:~/ubb/itbi$ cc printenv.c -o printenv
vboxuser@UbuntuFMI:~/ubb/itbi$ ./printenv 
Variabila 0 este SHELL=/bin/bash
Variabila 1 este SHELL=/bin/bash
Variabila 2 este SHELL=/bin/bash
Variabila 3 este SHELL=/bin/bash
Variabila 4 este SHELL=/bin/bash
Variabila 5 este SHELL=/bin/bash
Variabila 6 este SHELL=/bin/bash
Variabila 7 este SHELL=/bin/bash
Variabila 8 este SHELL=/bin/bash
Variabila 9 este SHELL=/bin/bash
Variabila 10 este SHELL=/bin/bash
Variabila 11 este SHELL=/bin/bash
Variabila 12 este SHELL=/bin/bash
Variabila 13 este SHELL=/bin/bash
Variabila 14 este SHELL=/bin/bash
Variabila 15 este SHELL=/bin/bash
Variabila 16 este SHELL=/bin/bash
Variabila 17 este SHELL=/bin/bash
Variabila 18 este SHELL=/bin/bash
Variabila 19 este SHELL=/bin/bash
Variabila 20 este SHELL=/bin/bash
Variabila 21 este SHELL=/bin/bash
Variabila 22 este SHELL=/bin/bash
Variabila 23 este SHELL=/bin/bash
Variabila 24 este SHELL=/bin/bash
Variabila 25 este SHELL=/bin/bash
Variabila 26 este SHELL=/bin/bash
Variabila 27 este SHELL=/bin/bash
Variabila 28 este SHELL=/bin/bash
Variabila 29 este SHELL=/bin/bash
Variabila 30 este SHELL=/bin/bash
Variabila 31 este SHELL=/bin/bash
Variabila 32 este SHELL=/bin/bash
Variabila 33 este SHELL=/bin/bash
Variabila 34 este SHELL=/bin/bash
Variabila 35 este SHELL=/bin/bash
Variabila 36 este SHELL=/bin/bash
Variabila 37 este SHELL=/bin/bash
Variabila 38 este SHELL=/bin/bash
Variabila 39 este SHELL=/bin/bash
Variabila 40 este SHELL=/bin/bash
Variabila 41 este SHELL=/bin/bash
Variabila 42 este SHELL=/bin/bash
Variabila 43 este SHELL=/bin/bash
Variabila 44 este SHELL=/bin/bash
Variabila 45 este SHELL=/bin/bash
Variabila 46 este SHELL=/bin/bash
Variabila 47 este SHELL=/bin/bash
vboxuser@UbuntuFMI:~/ubb/itbi$ mkdir bin
vboxuser@UbuntuFMI:~/ubb/itbi$ echo $PATH
/home/vboxuser/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin:/snap/bin
vboxuser@UbuntuFMI:~/ubb/itbi$ export PATH=$PATH:~/ubb/itbi/bin
vboxuser@UbuntuFMI:~/ubb/itbi$ mv hello bin
vboxuser@UbuntuFMI:~/ubb/itbi$ cd bin
vboxuser@UbuntuFMI:~/ubb/itbi/bin$ ls
hello
vboxuser@UbuntuFMI:~/ubb/itbi/bin$ export PATH=$PATH:~/ubb/itbi/bin
vboxuser@UbuntuFMI:~/ubb/itbi/bin$ hello
Mihaita
Hello, Mihaita
vboxuser@UbuntuFMI:~/ubb/itbi/bin$ 
