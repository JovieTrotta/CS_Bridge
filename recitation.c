Last login: Mon Sep 11 20:13:36 on console
joviennetrotta: ~
♥ ssh trottaj@login.khoury.northeastern.edu
The authenticity of host 'login.khoury.northeastern.edu (129.10.122.39)' can't be established.
ECDSA key fingerprint is SHA256:z+YetTuRaueaGupKdpACUIx2JC61Itjm0fbkYdBtShU.
Are you sure you want to continue connecting (yes/no)? yes
Warning: Permanently added 'login.khoury.northeastern.edu,129.10.122.39' (ECDSA) to the list of known hosts.
trottaj@login.khoury.northeastern.edu's password: 
Permission denied, please try again.
trottaj@login.khoury.northeastern.edu's password: 
=================================================================
You have logged into login-students.khoury.northeastern.edu
=================================================================
Linux at Khoury College
You may SSH to alternative linux machines.
Alternative linux machines are available if connected to NUwave, 
or if connected to Northeastern VPN.
The hostnames are linux-[071-085].khoury.northeastern.edu
=================================================================
Linux Beta
The Beta server may contain newer software versions
Available at login-beta.khoury.northeastern.edu
=================================================================
This server DOES NOT send emails.
Please use the faculty login server to send emails.
=================================================================
If you encounter any issues, please contact us via email
khoury-systems@northeastern.edu 
=================================================================
Last failed login: Wed Sep 13 18:13:41 EDT 2023 from 10.17.43.178 on ssh:notty
There was 1 failed login attempt since the last successful login.
[trottaj@login-students ~]$ pwd
/home/trottaj
[trottaj@login-students ~]$ ls
[trottaj@login-students ~]$ mkdir CS5008
[trottaj@login-students ~]$ ls
CS5008
[trottaj@login-students ~]$ cd CS5008
[trottaj@login-students CS5008]$ pwd
/home/trottaj/CS5008
[trottaj@login-students CS5008]$ ls
[trottaj@login-students CS5008]$ pwd
/home/trottaj/CS5008
[trottaj@login-students CS5008]$ git init
hint: Using 'master' as the name for the initial branch. This default branch name
hint: is subject to change. To configure the initial branch name to use in all
hint: of your new repositories, which will suppress this warning, call:
hint: 
hint: 	git config --global init.defaultBranch <name>
hint: 
hint: Names commonly chosen instead of 'master' are 'main', 'trunk' and
hint: 'development'. The just-created branch can be renamed via this command:
hint: 
hint: 	git branch -m <name>
Initialized empty Git repository in /home/trottaj/CS5008/.git/
[trottaj@login-students CS5008]$ git clone https://github.khoury.northeastern.edu/trottaj/CS5008_trottaj
Cloning into 'CS5008_trottaj'...
Username for 'https://github.khoury.northeastern.edu': trottaj
Password for 'https://trottaj@github.khoury.northeastern.edu': 
remote: Password authentication is not available for Git operations.
remote: You must use a personal access token or SSH key.
remote: See https://github.khoury.northeastern.edu/settings/tokens or https://github.khoury.northeastern.edu/settings/ssh
fatal: unable to access 'https://github.khoury.northeastern.edu/trottaj/CS5008_trottaj/': The requested URL returned error: 403
[trottaj@login-students CS5008]$ git clone https://github.khoury.northeastern.edu/trottaj/CS5008_trottaj
Cloning into 'CS5008_trottaj'...
Username for 'https://github.khoury.northeastern.edu': trottaj
Password for 'https://trottaj@github.khoury.northeastern.edu': 
remote: Password authentication is not available for Git operations.
remote: You must use a personal access token or SSH key.
remote: See https://github.khoury.northeastern.edu/settings/tokens or https://github.khoury.northeastern.edu/settings/ssh
fatal: unable to access 'https://github.khoury.northeastern.edu/trottaj/CS5008_trottaj/': The requested URL returned error: 403
[trottaj@login-students CS5008]$ git clone https://github.khoury.northeastern.edu/trottaj/CS5008_trottaj
Cloning into 'CS5008_trottaj'...
Username for 'https://github.khoury.northeastern.edu': trottaj
Password for 'https://trottaj@github.khoury.northeastern.edu': 
warning: You appear to have cloned an empty repository.
[trottaj@login-students CS5008]$ ls
CS5008_trottaj
[trottaj@login-students CS5008]$ pwd
/home/trottaj/CS5008
[trottaj@login-students CS5008]$ ls
CS5008_trottaj
[trottaj@login-students CS5008]$ pwd
/home/trottaj/CS5008
[trottaj@login-students CS5008]$ git clone http://github.khoury.northeastern.edu/trottaj/CS5008 ClassRepo.git
Cloning into 'ClassRepo.git'...
Username for 'https://github.khoury.northeastern.edu': trottaj
Password for 'https://trottaj@github.khoury.northeastern.edu': 
remote: Password authentication is not available for Git operations.
remote: You must use a personal access token or SSH key.
remote: See https://github.khoury.northeastern.edu/settings/tokens or https://github.khoury.northeastern.edu/settings/ssh
fatal: unable to access 'https://github.khoury.northeastern.edu/trottaj/CS5008/': The requested URL returned error: 403
[trottaj@login-students CS5008]$ git clone http://github.khoury.northeastern.edu/trottaj/CS5008 ClassRepo.git
Cloning into 'ClassRepo.git'...
Username for 'https://github.khoury.northeastern.edu': trottaj
Password for 'https://trottaj@github.khoury.northeastern.edu': 
remote: Password authentication is not available for Git operations.
remote: You must use a personal access token or SSH key.
remote: See https://github.khoury.northeastern.edu/settings/tokens or https://github.khoury.northeastern.edu/settings/ssh
fatal: unable to access 'https://github.khoury.northeastern.edu/trottaj/CS5008/': The requested URL returned error: 403
[trottaj@login-students CS5008]$ git clone http://github.khoury.northeastern.edu/trottaj/CS5008 ClassRepo.git
Cloning into 'ClassRepo.git'...
Username for 'https://github.khoury.northeastern.edu': trottaj
Password for 'https://trottaj@github.khoury.northeastern.edu': 
remote: Repository not found.
fatal: repository 'https://github.khoury.northeastern.edu/trottaj/CS5008/' not found
[trottaj@login-students CS5008]$ git clone http://github.khoury.northeastern.edu/trottaj/CS5008 ClassRepo.git
Cloning into 'ClassRepo.git'...
Username for 'https://github.khoury.northeastern.edu': trottaj
Password for 'https://trottaj@github.khoury.northeastern.edu': 
remote: Repository not found.
fatal: repository 'https://github.khoury.northeastern.edu/trottaj/CS5008/' not found
[trottaj@login-students CS5008]$ git clone https://github.khoury.northeastern.edu/trottaj/CS5008_ClassRepo.git
Cloning into 'CS5008_ClassRepo'...
Username for 'https://github.khoury.northeastern.edu': trottaj
Password for 'https://trottaj@github.khoury.northeastern.edu': 
remote: Repository not found.
fatal: repository 'https://github.khoury.northeastern.edu/trottaj/CS5008_ClassRepo.git/' not found
[trottaj@login-students CS5008]$ git clone http://github.khoury.northeastern.edu/sav/CS5008_ClassRepo.git
Cloning into 'CS5008_ClassRepo'...
Username for 'https://github.khoury.northeastern.edu': trottaj
Password for 'https://trottaj@github.khoury.northeastern.edu': 
warning: redirecting to https://github.khoury.northeastern.edu/sav/CS5008_ClassRepo.git/
remote: Enumerating objects: 728, done.
remote: Counting objects: 100% (728/728), done.
remote: Compressing objects: 100% (394/394), done.
remote: Total 728 (delta 311), reused 662 (delta 310), pack-reused 0
Receiving objects: 100% (728/728), 369.23 KiB | 5.68 MiB/s, done.
Resolving deltas: 100% (311/311), done.
[trottaj@login-students CS5008]$ ls
CS5008_ClassRepo  CS5008_trottaj
[trottaj@login-students CS5008]$ cd CS5008_ClassRepo
[trottaj@login-students CS5008_ClassRepo]$ ls
Lab00  README.md
[trottaj@login-students CS5008_ClassRepo]$ cat README.md
This is the CS5008 Fall 2023 Class Repo.


[trottaj@login-students CS5008_ClassRepo]$ cd Lab00
[trottaj@login-students Lab00]$ pwd
/home/trottaj/CS5008/CS5008_ClassRepo/Lab00
[trottaj@login-students Lab00]$ ls
helloworld.c  README.md
[trottaj@login-students Lab00]$ cat helloworld.c
// Your Name Here
// September 8, 2023
// Lab00 Coding Assignment

#include <stdio.h>         // A comment line

int main() {               /* A different comment line */
   printf("Hello World.  This is me.\n");
   return 0;
}
[trottaj@login-students Lab00]$ ls
helloworld.c  README.md
[trottaj@login-students Lab00]$ cat README.md
Lab00 Questions - September 8, 2023

As part of the Lab00 exercise, please complete the answers to the 
questions below:

1)  What is your name?

2)  What is your khoury username?

3)  What is your primary email address?  The address that ends 
@northeastern.edu.

4)  Approximately how long did it take for you to complete this lab in 
minutes?


[trottaj@login-students Lab00]$ pwd
/home/trottaj/CS5008/CS5008_ClassRepo/Lab00
[trottaj@login-students Lab00]$ cd ..
[trottaj@login-students CS5008_ClassRepo]$ pwd
/home/trottaj/CS5008/CS5008_ClassRepo
[trottaj@login-students CS5008_ClassRepo]$ git pull 
Username for 'https://github.khoury.northeastern.edu': trottaj
Password for 'https://trottaj@github.khoury.northeastern.edu': 
warning: redirecting to https://github.khoury.northeastern.edu/sav/CS5008_ClassRepo.git/
Already up to date.
[trottaj@login-students CS5008_ClassRepo]$ ls
Lab00  README.md
[trottaj@login-students CS5008_ClassRepo]$ cp -r Lab00 ../CS5008_trottaj/Lab00
[trottaj@login-students CS5008_ClassRepo]$ cd ..
[trottaj@login-students CS5008]$ ls
CS5008_ClassRepo  CS5008_trottaj
[trottaj@login-students CS5008]$ cd CS5008_trottaj
[trottaj@login-students CS5008_trottaj]$ ls
Lab00
[trottaj@login-students CS5008_trottaj]$ pwd
/home/trottaj/CS5008/CS5008_trottaj
[trottaj@login-students CS5008_trottaj]$ ls
Lab00
[trottaj@login-students CS5008_trottaj]$ cd Lab00
[trottaj@login-students Lab00]$ pwd
/home/trottaj/CS5008/CS5008_trottaj/Lab00
[trottaj@login-students Lab00]$ ls
helloworld.c  README.md
[trottaj@login-students Lab00]$ vi README.md
[trottaj@login-students Lab00]$ ls
helloworld.c  README.md
[trottaj@login-students Lab00]$ cat README.md
Lab00 Questions - September 8, 2023

As part of the Lab00 exercise, please complete the answers to the 
questions below:

1)  What is your name?
Jovienne (Jovie) Trotta
2)  What is your khoury username?
trottaj
3)  What is your primary email address?  The address that ends 
@northeastern.edu.
trottaj@northeastern.edu
4)  Approximately how long did it take for you to complete this lab in 
minutes?
75 minutes

[trottaj@login-students Lab00]$ vi README.md
[trottaj@login-students Lab00]$ cat README.md
Lab00 Questions - September 8, 2023

As part of the Lab00 exercise, please complete the answers to the 
questions below:

1)  What is your name?
Jovienne (Jovie) Trotta
2)  What is your khoury username?
trottaj
3)  What is your primary email address?  The address that ends 
@northeastern.edu.
trotta.j@northeastern.edu
4)  Approximately how long did it take for you to complete this lab in 
minutes?
75 minutes

[trottaj@login-students Lab00]$ ls
helloworld.c  README.md
[trottaj@login-students Lab00]$ cd ..
[trottaj@login-students CS5008_trottaj]$ cd ..
[trottaj@login-students CS5008]$ ls
CS5008_ClassRepo  CS5008_trottaj
[trottaj@login-students CS5008]$ pwd
/home/trottaj/CS5008
[trottaj@login-students CS5008]$ cd CS5008_trottaj
[trottaj@login-students CS5008_trottaj]$ ls
Lab00
[trottaj@login-students CS5008_trottaj]$ git add Lab00
[trottaj@login-students CS5008_trottaj]$ git commit -m "Lab00 initial commit"
[main (root-commit) 1ed7787] Lab00 initial commit
 Committer: Jovienne Trotta <trottaj@login-el8.khoury.northeastern.edu>
Your name and email address were configured automatically based
on your username and hostname. Please check that they are accurate.
You can suppress this message by setting them explicitly. Run the
following command and follow the instructions in your editor to edit
your configuration file:

    git config --global --edit

After doing this, you may fix the identity used for this commit with:

    git commit --amend --reset-author

 2 files changed, 26 insertions(+)
 create mode 100644 Lab00/README.md
 create mode 100644 Lab00/helloworld.c
[trottaj@login-students CS5008_trottaj]$ git push
Username for 'https://github.khoury.northeastern.edu': trottaj
Password for 'https://trottaj@github.khoury.northeastern.edu': 
Enumerating objects: 5, done.
Counting objects: 100% (5/5), done.
Delta compression using up to 24 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (5/5), 748 bytes | 374.00 KiB/s, done.
Total 5 (delta 0), reused 0 (delta 0), pack-reused 0
To https://github.khoury.northeastern.edu/trottaj/CS5008_trottaj
 * [new branch]      main -> main
[trottaj@login-students CS5008_trottaj]$ pwd
/home/trottaj/CS5008/CS5008_trottaj
[trottaj@login-students CS5008_trottaj]$ ls
Lab00
[trottaj@login-students CS5008_trottaj]$ cd ..
[trottaj@login-students CS5008]$ ls
CS5008_ClassRepo  CS5008_trottaj
[trottaj@login-students CS5008]$ cd CS5008_ClassRepo
[trottaj@login-students CS5008_ClassRepo]$ ls
Lab00  README.md
[trottaj@login-students CS5008_ClassRepo]$ cat README.md
This is the CS5008 Fall 2023 Class Repo.


[trottaj@login-students CS5008_ClassRepo]$ cd Lab))
-bash: syntax error near unexpected token `)'
[trottaj@login-students CS5008_ClassRepo]$ cd Lab00
[trottaj@login-students Lab00]$ ls
helloworld.c  README.md
[trottaj@login-students Lab00]$ cat helloworld.c
// Your Name Here
// September 8, 2023
// Lab00 Coding Assignment

#include <stdio.h>         // A comment line

int main() {               /* A different comment line */
   printf("Hello World.  This is me.\n");
   return 0;
}
[trottaj@login-students Lab00]$ cat README.md
Lab00 Questions - September 8, 2023

As part of the Lab00 exercise, please complete the answers to the 
questions below:

1)  What is your name?

2)  What is your khoury username?

3)  What is your primary email address?  The address that ends 
@northeastern.edu.

4)  Approximately how long did it take for you to complete this lab in 
minutes?


[trottaj@login-students Lab00]$ cd ..
[trottaj@login-students CS5008_ClassRepo]$ ls
Lab00  README.md
[trottaj@login-students CS5008_ClassRepo]$ cd ..
[trottaj@login-students CS5008]$ ls
CS5008_ClassRepo  CS5008_trottaj
[trottaj@login-students CS5008]$ cd CS5008_trottaj
[trottaj@login-students CS5008_trottaj]$ ls
Lab00
[trottaj@login-students CS5008_trottaj]$ cat Lab00
cat: Lab00: Is a directory
[trottaj@login-students CS5008_trottaj]$ cd Lab00
[trottaj@login-students Lab00]$ ls
helloworld.c  README.md
[trottaj@login-students Lab00]$ cat README.md
Lab00 Questions - September 8, 2023

As part of the Lab00 exercise, please complete the answers to the 
questions below:

1)  What is your name?
Jovienne (Jovie) Trotta
2)  What is your khoury username?
trottaj
3)  What is your primary email address?  The address that ends 
@northeastern.edu.
trotta.j@northeastern.edu
4)  Approximately how long did it take for you to complete this lab in 
minutes?
75 minutes

[trottaj@login-students Lab00]$ 
