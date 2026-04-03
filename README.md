# LSC-alghorithm-
Hi guys! This is a implementation of LSC alghorithm. 
Let's explain what is LSC. LSC means -longest subsequence common by two strings. We have two strings 
and we want know to find the longest subsequence common that's an example:

Input:
Strings a[m] and b[n] n and m is the size of the strings 

Output: 
A subsequence a[i1]...a[ik] of , a subsequence b[j1]...b[jk] such that 
 a[i1=b[j1]...a[ik]=b[jk] with k big as possible 
 
LSC applications: 

 🔧 Version Control (Git, SVN)

The git diff command uses LCS to show differences between files, highlighting added and removed lines.
🧬 Bioinformatics
Comparison of DNA, RNA and protein sequences to find genetic similarities between organisms.

📝 Spell Checkers and Autocorrect
Calculation of the edit distance between words, useful for suggesting spelling corrections.

🔒 Plagiarism Detection
Comparison of documents to find portions of text in common.

🗜️ Data Compression
Algorithms like diff and patch use LCS to represent only the differences between file versions, reducing storage space.

🤖 NLP – Natural Language Processing
Calculation of sentence similarity in machine translation and question-answering systems.

🎮 Input Sequence Comparison
In video games and gesture recognition systems, to recognize sequences of moves.

The first steps is to formulate the problem in ricursive way cause we implement with dynamic programming technique 
and there are two possible case:

Case 1: a[i]=b[j] 
This case is very simple we take the letter and be worth c[i,k]= k and now we solve the problem for instance
c[i,j]=c[i-1,j-1] +1 

Case 2: a[i]!=b[j] 
In this there are two possible ways:

1) a[i] don't be part of the longest common subsequence or b[j] don't be part of. So what we choose?
   we take both and choose that return the max subsquence that is to say
   c[i,j]= max{c[i-1,j], c[i,j-1]}

And that's all with recurrence relation we can simplely write the alghorithm. 
   
