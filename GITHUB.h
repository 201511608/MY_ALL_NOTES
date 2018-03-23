// GITHUB

NEW REPOSITORY -> FOULDER OR PROJECT
ls = dir  in windows
.md // mark down
//
git --help // open help options

git log // show all commits and mergs and all other actions
git show //
git config-- global user.name 'ANYNAMEINISNGLE COATS'
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
git branch -D 'branch name'
git push <remote_name> --delete <branch_name>   // Delete branch in github
git branch -m oldname newname
git pull // switch branch or restore working tree files

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

git clone https://github.com/201511608/Sample-app-for-tutorial.git  // create any file and do this and do programming

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
git pull  -> [resolve conflit] ->  git push