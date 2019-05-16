LINUX COMMANDS: 
www.tutorialspoint.com/unix/unix-shell.htm

"GNU's /Not Unix! / LINUX
A Linux distribution (often called a distro for short) is an operating system made from a software collection..

//
n Linux, every thing is file
.  Current Dirctory  [ls  .]
.. parent directory (previous) [ls  ..]
~ Home   [ls  ~]

//
Ls  [flag] [file]

Whoami,route,df-h,du –h ,free –m,echo $SHELL

Echo  $PWD $USER(username)   //http://www.computerhope.com/unix/uecho.htm

X=10 ;   Echo x is $x          =>         x is 10
echo –e(equivalent to pressing the escape key..) 'Here \b’(incoats)

\a \b \c \n …
Echo * (give present directoy list)


concatenare "to link together”

MAKE ANY SHORTCUTS  // http://www.computerhope.com/unix/ualias.htm
alias
alias rm="rm -i"

-R recersive


1.	Echo  ‘ Display any line of text’
2.	vi editor is a full screen editor
3.	awk
4.	awk '{ print $9 }' output.txt     // http://www.computerhope.com/unix/uawk.html	
6.	awk '{print $2,$2,$3,$1}' output.txt     ,Show line 2 3 1 in sequence
7.	awk 'length($0) > 70 ' output.txt           ,show line which are grater than 70 words
8.	df –i   // Show system disk usage ,  i index number
9.	df


10.	TOUCH :
	//The touch command is the easiest way to create new, empty files. 
	//It is also used to change the timestamps (i.e., dates and times of the most recent access and modification)
    //	on existing files and directories. 
http://www.linfo.org/touch.html

11.	Touch file1 file2 file3 ……….
12.	touch -d '1 May 2005 10:22' AnyFile
13.	stat AnyFile ;echo ‘give complete timestamps ‘
14.	mkdir file1 file2 ….
15.	Mkdir –p(permisson) home/A/B/C/D…
16.	Mkdir home/A/B/C/DDD…  home/A/B/C/DAD…
http://www.linfo.org/mkdir.html

17.	Cat filename filename
            http://www.computerhope.com/unix/ucat.htm



18.	More  filename    			//(open file and move page by page use space)
19.	Less   filename   			//(move line by line up down left rite arrow key)
20.	Head –(number) filename 	 // ; then use space to scroll down Easy
21.	Tail   –(number) finename
22.	Cp file1 file2 
http://www.computerhope.com/unix/ucp.htm
http://www.rapidtables.com/code/linux/cp.htm


23.	rm file1 file2
24.	rm –i  *                  Asks every time // interactive
25.	rmdir filename
26.	rm –r filename
27.	rm –r * Delete all files and sub directories
28.	sudo rm –r *    If permission denies   ..sudo for owoner groups and  group assess
http://www.computerhope.com/unix/urm.htm

29.	man man
30.	apropos keyword      apropos ls     echo ‘apropos matches the key word and give search resules
31.	ls /bin   , echo ‘consist all commands’

32.	which command  ,which ls, which pwd      ,echo ‘give file location’

33.	whatis 

34.	whereis

35.	chmod  777 filename               // 1  2  4    3  5  6  7
		r=4 w=2 x=1  ; 0 nopermision
		u=user g= group o =other
36.	chmod u=rwx,g=rwx,o=x Filename
			http://www.computerhope.com/unix/uchmod.htm


37.	Change group ownership of a file or files
http://www.computerhope.com/unix/uchgrp.htm

38.	Chmod  
39.	Chgrp     ?
40.	Chown   ?


41.	unmask 
http://www.computerhope.com/unix/uumask.htm

42.	unmask u+w
43.	unmask u-x,g=r,o+w
44.	umask a=

http://www.computerhope.com/unix/uumask.htm

45.	Tar    ,c create, x extract, c create ,t file view , v show progress ,  (COMPRESS )
http://www.tecmint.com/18-tar-command-examples-in-linux/

46.	Tar –cvf filename.tar <Files to be done tar>

47.	Tar –xvf filename.tar

48.	Gzip tomakefilename.txt nametobegiven.txt.gz

http://www.computerhope.com/unix/uzcat.htm

49.	Gzip –l filename.txt.gz

50.	Gzip -d filename.txt.gz      ;d decompress


51.	Zip outputfilename filetobecompresses
52.	Unzip unzipoutputfile
http://www.computerhope.com/unix/zip.htm


53.	ssh username.com  (clint remote login)
54.	ssh pathan.muzafar@WEB.iiit.ac.in              // http://www.folkstalk.com/2012/07/ssh-command-examples-unix-linux.html
55.	scp (secure copy form web)
56.	scp –r(recersive) fromfilename   topathanmuzafar@web.iiit.ac.in:  
57.	scp –r(recersie)  frompathanmuzafar@web.iiit.ac.in:filename    .(toanyloacioton)
58.	scp remote  totargetfile
59.	sftp   ‘secure file transfor portocal’
 

60.	vim/vi  ;nano ;pico ;emac ;gedit ;leafpad  ‘editing tools’



61.	grep     
	// Print line matcing patteran
    //the period (".") is interpreted as a single-character wildcard. 
	//It means "any character that appears in this place will match." The asterisk ("*") means "the preceding character, appearing zero or more times, 
	//will match." So the combination ".*" will match any number of any character.
62.	grep ‘word’ outputfile
-i, -v, -c, -e,-E,   --color=[auto|always|never]
-I ignore case distinction	
-c wordcont	
-e multiple patteran

http://www.computerhope.com/unix/ugrep.htm

-E extended,-e patteran multiplesearch

63.	Grep  -e ‘ali’ –e ‘thisis second’
64.	Else
65.	Egrep ‘[ali][thisis second]’
66.	Egrep  ‘^(ali)$’  or egrep –x ali  (both are same)
67.	Grep –x ‘(ali)’ => (ali)  ; Egrep –x  ‘(ali)’  => ali    ; grep –x  ‘\(ali)\
68.	Grep ‘\<ali\>’
69.	Grep ‘^\+’
70.	Egrep  ‘^[+?](91)[0-9]{10}$’
71.	Egrep  -e ‘^[+?](91)?[0-9]{10}$ -e ‘^(91)?[0-9]{10}$’  -e ^[0-9]{10}$
72.	Erep  ‘\(cannotdiff+)+?(91?)[0-9]{10}$’



73.	Mv directorylocation/filename  directory location/filename     http://www.computerhope.com/unix/umv.htm
74.	cp copy
75.	cp location/filename location/filename    http://www.computerhope.com/unix/ucp.htm

76.	uniq reports or filters out repeated lines in a file   http://www.computerhope.com/unix/uuniq.htm


77.	find  search directory hierechy                           http://www.tecmint.com/35-practical-examples-of-linux-find-command/
78.	find (very important) search files in directory hierarchy
79.	find  .  –name filename.txt  ; find  ~  –name filename.txt
80.	find  .  –iname filename.txt  (I both capital and small)

81.	cd  -- ‘find  ~ -name filenameyouserch`     http://www.tecmint.com/35-practical-examples-of-linux-find-command/



91. Metacharacters
* to match 0 or more characters, a question mark (?) matches with a single character






///
//
Mkdir Riyaz Riyaz_copy Riyaz_tar Riyaz_Rename
cd Riyaz 
touch a.txt b.txt c.txt d.txt
cd ..


i=1
for file in Riyaz/*                            */
do 
echo $file					 # Print
cp -r $file Riyaz_copy/ ;  	 # copy
ls -l $file;  				 # encript
# tar -cvf $file Riyaz_tar/; # Compress
mv $file Riyaz_Rename/$i ;   # move->Rename
i=$i+1;
done 
//
///







////////////////////////////////////////////////////////
//  WEB
// AMEZON WEB DOPOSIT
AMEZON WEB DEPOSIT REQUIRMENTS
Use sudo for mv and rm

Cd to muzafarsystem.pem location to access the surver
Then
ssh –I muzafarsystem.pem ubuntu@34.210.181.231 –v

Put the index.html file to var/www/html/
Amezon Server opens do what you want.



// TO COPY FILES TO SERVER

Normal file
	
scp -i muzafarsystem.pem certs.gz ubuntu@34.210.181.231:/home/ubuntu


Foulder 
	
scp -i muzafarsystem.pem –r foulderMAK ubuntu@34.210.181.231:/home/ubuntu



Vi vim
:wq save and quit
:1,$d  select all and delete all


Touch *    //to update all files in server !!
///////////////////////////////////////////////////////////////////////////


// Run .bash or .sh files
sh filename.sh
// chmod 777 Filename // DoubleClick Runsss