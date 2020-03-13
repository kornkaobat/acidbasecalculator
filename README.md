# Acid-Base Universal Calculator

An efficient, easy to use C++ universal Acid-Base Calculator.

## Getting Started

0. Assuming you have [Git](https://git-scm.com/downloads) installed. If not, then install it to work with git repos.
```
For people who can't use git-cli properly like me, I've compiled a simple guide;
0. Recovery guide
    0.1 git reflog
    0.2 git checkout HEAD{HEAD_ID('0,1,2,... with 0 being most recent)'} that contains your local files
    0.3 do 0.2 until you are confident that the head contains your files
    0.4 Skip to step 2. to push this change back to remote repo 
1. Update your remote repo with kornkaobat/acidbasecalculator and then update your local repo with your remote repo.
 WARNING  This can cause serious repercussions if kornkaobat/acidbasecalculator replace some of your files. Don't update if you are not sure. Skip to 2. if not sure.
   1.1 Use Github Online Web UI to update remote repo with kornkaobat/acidbasecalculator
   1.2 Use git pull 'remote-repo-URL' to update your local repo
2. Create a new local branch : git checkout -b 'branch-name'
3. "git status" to check for new changes in local repo
4. " git add . " (all files) or " git add 'file' " for some file(s)
5. git commit
6. git push 'remote-repo-URL'
7. Go to Github Online Web UI to;
   7.1 Create a pull request from the newly pushed branch to master
   7.2 Merge the newly created pull request
```
1. Get [Dev-C++](https://sourceforge.net/projects/orwelldevcpp/) to compile and run the code.
2. git pull https://github.com/kornkaobat/acidbasecalculator and go to the local repo folder and run ChemAcidBaseCalculator.dev with Dev-C++
3. Compile and run the code from within the Dev-C++ program.

### Prerequisites

This is the current requirements to run this program.

```
-- Minimum requirements --
* Windows Vista or later
* 32 MB of RAM.
* The executables compiled by Dev-C++ will need MSVCRT.DLL (comes with Windows 95 OSR 2 or higher).
```

## Built With

* Dev-C++ 5.11 Using Compiler TDM-GCC 4.9.2 x64 Release

## Contributing

You are free to contribute by creating a new issue or pull request.

## Versioning

This project uses some parts of [SemVer](http://semver.org/) for versioning. 

## Authors

* **Korn aka kornkaobat** - *Development work*

## License

This project is licensed under the GNU GPL v.3 License - see the [LICENSE](LICENSE) file for details

## Acknowledgments

* Dev-C++ https://sourceforge.net/projects/orwelldevcpp/
