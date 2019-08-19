// GITHUB

NEW REPOSITORY -> FOULDER OR PROJECT
ls = dir  in windows
.md // mark down
//
git --help // open help options

git log // show all commits and mergs and all other actions
git show //
git config --global user.name 'ANYNAMEINISNGLE COATS'
git config --global user.email 'ANYEMAIL'

git diff   // show diff between commit and un commit differece
git diff branch_1 branch_2

git --version // show version
git  // show all commands
git init // create an empty repository
git clone http  //    NICE TO WORK HERE
git status
git add file
git add . 	// all every thing
gti add -A  // all
git rm --cached "finelname no coats"  // remove all files
git commit -m "added index.html -m is message"  // save in local repository
git commit    // save in loal repository show vim text editor  || vim  click i to get insert mode and then start inserting   esc and :wq
git push   // push to mail sitegit
git checkout // creats branch
git branch //
git branch -a // List all 
git branch -D 'branch name'
git push <remote_name> --delete <branch_name>   // Delete branch in github
git branch -m oldname newname
git pull // switch branch or restore working tree files      // Pull execute “ Fetch and  Merge” both
Git Rebase   // Similer to pull but different related to branch ! check it

git branch branchanyname   // To create branch
git checkout branchanyname   // To get in to branch
git checkout master  // default master branch
git merge loginbranch frommaster // add two branches [we are in login branch    then merge, it merge to login branch

git remote // show internet access routs
git remote add origin https://github.com/201511608/Sample-app-for-tutorial.git // origin :: can name any thing 
git push origin master
git pull origin master

git pull http   // After doing   git init
git push http   // 
git push --set-upstream http     master

git clone https://github.com/201511608/Sample-app-for-tutorial.git  // create any file and do this and do programming  // Default clone master branch
git clone -b branch_name  https://address.git   //

esc  :wq   // full commit
ctrl d // get out from cat

vim  click i to get insert mode and then start inserting   esc and :wq

touch .gitignore  // create and put any file name it will ignore that to add and commit  //file names :: log.txt  log.text  /dir2  *.txt



// Notes
// fetch will download any changes from the remote* branch, updating your repository data, but leaving your local* branch unchanged.
// pull will perform a fetch and additionally merge the changes into your local branch.


//Techniques / //// / / / / // / / / // / 
git init
git commit -m "first commit"
git remote add origin https://github.com/201511608/IS_DEVELOPMENT.git
git push -u origin master







////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////
// GITHUB

// Course Unit 1

// Repository:  two files (myfile+gitfiles)
: the files and directories that you create and edit directly, and the extra information that Git records about the project's
 history. The combination of these two things is called a repository.

//Commands
history
ls -a   // show hidden files too
git status  // know which file have been changed
git diff  // Show difference of all files with inthe directory
git diff filename  // show difference of particular file
git diff -r HEAD path/to/file   // The -r flag means "compare to a particular revision", HEAD is a shortcut meaning "the most recent commit"

git add filename  // add to staging area   // Can remove and modify until we commit
git add .  //Git add all

nano filename.txt // text editor Linux 

git commit -m 'Discription' // Save the file.
git commit    // commits  :: Open text windows to describe discription

// logs   
git log path/to/file  //filename   //particular file log//   
git log    		//All logs// show save id,  date  and commit message
	space // move down
	q  //quit

// REPOSITORY
COMMIT -> TREE -> BLOB

git show Hash_first_few_lines // Git Show 
  git show 71ee7d   // get hash using git log !!!
git show HEAD  //	SHOW RESENT COMMITTED CHANGED FILES
git show HEAD~1 // BUT ONE BEFORE COMMIT           // HEAD  1  2  3  4  5  6  || COMMIT FILES IN SEQUENCE
git show HEAD~3 // BUT THREE BEFORE COMMIT 

git annotate filename // see who changed what in a file

// see what changed between two commits
git diff HEAD..HEAD~1  // connector ..   //HEAR OR HASH ADDRESS

// To start tracking we must add anc commit
git add file_name  // to start track
.gitignore ->  // FILE
	*.mpl    //ADD FILE NAMES TO IGNOER
	FILENAME  
	
// remove unwanted files
git clean -n  // show   //  list of files that are in the repository, but whose history Git is not currently tracking. 
git clean -f    // Remove unwanted files which are not traking by git [.gitignore files and not git add files]!

// see how Git is configured
git config --list --system
git config --list --global
git config --list --local

//  change my Git configuration?
git config --global user.email Mak@gmail.com
git config --global user.name Mak


// git stage a change  	 // save local and can do undoo locally   -> After stage -> Commiting to main branch
git add filename
// git re-stage a change  
git add filename

// undo changes to unstaged files      -> Bring Back to Old stage level
	//discard the changes that have not yet been staged   // Brings to previous staged stage
git checkout -- filename

// unstage a file that I have staged
	// it resets the file to the state you last staged
git reset HEAD filename

// restore an old version of a file
// Restoring a file doesn't erase any of the repository's history   // the act of restoring the file is saved as another commit [crosscheck it]
		// Hashkey   use  // git log finename   to get hashkeys
git checkout hashkey filename    //would replace 'filename' with whatever was committed


// undo all of the changes I have made?
git reset HEAD .  // ALL FILE
		// TO REVERT IN THERE PREVIOUS STAGE
git reset HEAD directoryName
git checkout

ssh –I muzafarsystem.pem ubuntu@34.192.168.3.7 –v


// See what branches 
git branch   // show all branches and show * which iam present in

// View different between branches
git diff branch otherbranch
git diff branc..Otherbranch
// switch from one branch to another
git checkout branchnameyouwannamove 
		// if show error  ::  commit all change or remove and chane branch		
										git commit -m "msg"   :: 	git rm file name
										
//create a branch	
		// The contents of the new branch are initially identical to the contents of the original. 
git checkout -b branch-name     // which creates the branch and switches you to it
git branch branch-name    // just creates branch dose not switchs
									
						
// merge two branches
	// one branch (call it the source) into another (call it the destination)
	// Git incorporates the changes made to the source branch into the destination branch
	// if dosen't overlaps results in new commit !
git merge source destination    // Git automatically opens an editor so that you can write a log message for the merge
		// Source -> Destination    // i.e Merging source content into the destination
		
		
// conflicts
// Git relies on you to reconcile the conflicting changes
Remove conflit manually

// initialze git repository
git init // same foulder initialize git repository
git init foulder_New // initialzie new foulder with git repository
git init a/b/c     //  initialize with in foulder to foulders


// copy of an existing repository
git clone URL
git clone LocalLocation      // file:///existing/project   =    file://    +     /existing/project
		git clone file:///home/thunk/repo // Creats repo in the present loaction as new gitreposotory 
		git clone file:///home/thunk/repo   dental  // Creats dental as new gitreposotory    //USE THIS COMMAND //

// find out where a cloned repository originated   //   git remember clone loaction
git remote
git remote -v   // Name with url with detail     // IMPORTANT USE THIS COMMAND   // 

// Add remote   urls
git remote add remote-name URL
	git remote add origin file:///home/thunk/repo   // We can even add Local  urls

// Remove remote url&name
git remote rm remote-name



//pull in changes from a remote repository     Pull only changes Cool :P
	//gets everything in branch in the remote repository identified by remote and merges it into the current branch of your local repository
git pull remote branch
	//  remote -> to what ever branch


// push my changes to a remote repository
	// which pushes the contents of your branch branch-name into a branch with the same name in the remote repository associated with remote-name
 git push remote-name branch-name
	git push origin master // Example

/// If conflit in the Remort 
git pull  -> [resolve conflit] ->  git push    // [resolve conflit] by   Git add .  || git commit -m "updated"



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
GIT CHEATSHEET
https://gist.github.com/hofmannsven/6814451


//Setup
See where Git is located: which git

Get the version of Git: git --version

Create an alias (shortcut) for git status: git config --global alias.st status

Help
Help: git help

//General
Initialize Git: git init

Get everything ready to commit: git add .

Get custom file ready to commit: git add index.html

Commit changes: git commit -m "Message"

Add and commit in one step: git commit -am "Message"

Remove files from Git: git rm index.html

Update all changes: git add -u

Remove file but do not track anymore: git rm --cached index.html

Move or rename files: git mv index.html dir/index_new.html

Undo modifications (restore files from latest commited version): git checkout -- index.html

Restore file from a custom commit (in current branch): git checkout 6eb715d -- index.html

//Reset
Go back to commit: git revert 073791e7dd71b90daa853b2c5acc2c925f02dbc6

Soft reset (move HEAD only; neither staging nor working dir is changed): git reset --soft 073791e7dd71b90daa853b2c5acc2c925f02dbc6

Undo latest commit: git reset --soft HEAD~

Mixed reset (move HEAD and change staging to match repo; does not affect working dir): git reset --mixed 073791e7dd71b90daa853b2c5acc2c925f02dbc6

Hard reset (move HEAD and change staging dir and working dir to match repo): git reset --hard 073791e7dd71b90daa853b2c5acc2c925f02dbc6

//Update & Delete
Test-Delete untracked files: git clean -n

Delete untracked files (not staging): git clean -f

Unstage (undo adds): git reset HEAD index.html

Update most recent commit (also update the commit message): git commit --amend -m "New Message"

//Branch
Show branches: git branch

Create branch: git branch branchname

Change to branch: git checkout branchname

Create and change to new branch: git checkout -b branchname

Rename branch: git branch -m branchname new_branchname or: git branch --move branchname new_branchname

Show all completely merged branches with current branch: git branch --merged

Delete merged branch (only possible if not HEAD): git branch -d branchname or: git branch --delete branchname

Delete not merged branch: git branch -D branch_to_delete

//Merge
True merge (fast forward): git merge branchname

Merge to master (only if fast forward): git merge --ff-only branchname

Merge to master (force a new commit): git merge --no-ff branchname

Stop merge (in case of conflicts): git merge --abort

Stop merge (in case of conflicts): git reset --merge // prior to v1.7.4

Merge only one specific commit: git cherry-pick 073791e7

Rebase: git checkout branchname » git rebase master or: git merge master branchname (The rebase moves all of the commits in master onto the tip of branchname.)

Squash multiple commits into one: git rebase -i HEAD~3 (source)

//Stash
Put in stash: git stash save "Message"

Show stash: git stash list

Show stash stats: git stash show stash@{0}

Show stash changes: git stash show -p stash@{0}

Use custom stash item and drop it: git stash pop stash@{0}

Use custom stash item and do not drop it: git stash apply stash@{0}

Delete custom stash item: git stash drop stash@{0}

Delete complete stash: git stash clear

//Gitignore & Gitkeep
About: https://help.github.com/articles/ignoring-files

Useful templates: https://github.com/github/gitignore

Add or edit gitignore: nano .gitignore

Track empty dir: touch dir/.gitkeep

//Log
Show commits: git log

Show oneline-summary of commits: git log --oneline

Show oneline-summary of commits with full SHA-1: git log --format=oneline

Show oneline-summary of the last three commits: git log --oneline -3

Show only custom commits: git log --author="Sven" git log --grep="Message" git log --until=2013-01-01 git log --since=2013-01-01

Show only custom data of commit: git log --format=short git log --format=full git log --format=fuller git log --format=email git log --format=raw

Show changes: git log -p

Show every commit since special commit for custom file only: git log 6eb715d.. index.html

Show changes of every commit since special commit for custom file only: git log -p 6eb715d.. index.html

Show stats and summary of commits: git log --stat --summary

Show history of commits as graph: git log --graph

Show history of commits as graph-summary: git log --oneline --graph --all --decorate

//Compare
Compare modified files: git diff

Compare modified files and highlight changes only: git diff --color-words index.html

Compare modified files within the staging area: git diff --staged

Compare branches: git diff master..branchname

Compare branches like above: git diff --color-words master..branchname^

Compare commits: git diff 6eb715d git diff 6eb715d..HEAD git diff 6eb715d..537a09f

Compare commits of file: git diff 6eb715d index.html git diff 6eb715d..537a09f index.html

Compare without caring about spaces: git diff -b 6eb715d..HEAD or: git diff --ignore-space-change 6eb715d..HEAD

Compare without caring about all spaces: git diff -w 6eb715d..HEAD or: git diff --ignore-all-space 6eb715d..HEAD

Useful comparings: git diff --stat --summary 6eb715d..HEAD

Blame: git blame -L10,+1 index.html

//Releases & Version Tags
Show all released versions: git tag

Show all released versions with comments: git tag -l -n1

Create release version: git tag v1.0.0

Create release version with comment: git tag -a v1.0.0 -m 'Message'

Checkout a specific release version: git checkout v1.0.0

//Collaborate
Show remote: git remote

Show remote details: git remote -v

Add remote upstream from GitHub project: git remote add upstream https://github.com/user/project.git

Add remote upstream from existing empty project on server: git remote add upstream ssh://root@123.123.123.123/path/to/repository/.git

Fetch: git fetch upstream

Fetch a custom branch: git fetch upstream branchname:local_branchname

Merge fetched commits: git merge upstream/master

Remove origin: git remote rm origin

Show remote branches: git branch -r

Show all branches: git branch -a

Compare: git diff origin/master..master

Push (set default with -u): git push -u origin master

Push: git push origin master

Force-Push: `git push origin master --force

Pull: git pull

Pull specific branch: git pull origin branchname

Clone to localhost: git clone https://github.com/user/project.git or: git clone ssh://user@domain.com/~/dir/.git

Clone to localhost folder: git clone https://github.com/user/project.git ~/dir/folder

Clone specific branch to localhost: git clone -b branchname https://github.com/user/project.git

Delete remote branch (push nothing): git push origin :branchname or: git push origin --delete branchname

//Archive
Create a zip-archive: git archive --format zip --output filename.zip master

Export/write custom log to a file: git log --author=sven --all > log.txt

//Troubleshooting
Ignore files that have already been committed to a Git repository: http://stackoverflow.com/a/1139797/1815847

//Security
Hide Git on the web via .htaccess: RedirectMatch 404 /\.git (more info here: http://stackoverflow.com/a/17916515/1815847)

//Large File Storage
Website: https://git-lfs.github.com/

Install: brew install git-lfs

Track *.psd files: git lfs track "*.psd" (init, add, commit and push as written above)


// Stash
Stash will move your modified files into a stack. So, later in the same or in another branch,
you will be able to bring them back and see those modifications in your project.
// Stage
Stage is the step before to make a commit, you add modified files to "Staged files" to create your next commit.
git stash
git add  // you add files (stage) with

    // https://youtu.be/KLEDKgMmbBI
git stash save "Savename"
git stash list  // show to older // do not delete stash list
git stash pop   // show to older // deletes stash list  // Preview old stash list   like 3 2 1 0
git stash drop STASHID// remove perticular stash list
GIT stash clear  // remove all stash // move to HEAD

// DEPTH
Clone depth" is a feature of git to reduce server load: Instead of cloning the complete repository
(as usually done with git), using clone depth just clones the last clone-depth-number revisions of your repository.
In literature this

 
 
 