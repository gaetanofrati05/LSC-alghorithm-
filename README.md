<h1>🧬 Longest Common Subsequence (LCS) Algorithm</h1>

<p>
  This repository contains a high-performance implementation of the <strong>LCS (Longest Common Subsequence)</strong> 
  algorithm, solved efficiently using <strong>Dynamic Programming</strong>.
</p>

<hr />

<h2>📝 What is LCS?</h2>
<p>
  Given two strings, the goal is to find the longest subsequence common to both. A <em>subsequence</em> 
  is a sequence that appears in the same relative order, but not necessarily contiguously.
</p>

<blockquote>
  <strong>Example:</strong><br />
  <strong>Input:</strong> String <code>A</code> of size <code>m</code>, String <code>B</code> of size <code>n</code>.<br />
  <strong>Output:</strong> A subsequence $A[i_1 \dots i_k]$ and $B[j_1 \dots j_k]$ such that 
  $A[i_1] = B[j_1] \dots A[i_k] = B[j_k]$, making the length <strong>$k$ as large as possible</strong>.
</blockquote>

---

<h2>🚀 Real-World Applications</h2>
<p>The LCS algorithm is a fundamental building block in computer science and is widely used in:</p>

<ul>
  <li>🔧 <strong>Version Control Systems (Git, SVN):</strong> The <code>git diff</code> command uses LCS to find and highlight added/removed lines between file versions.</li>
  <li>🧬 <strong>Bioinformatics:</strong> Comparing DNA, RNA, and protein sequences to discover genetic similarities between organisms.</li>
  <li>📝 <strong>Spell Checkers:</strong> Calculating the edit distance between words to suggest the best auto-corrections.</li>
  <li>🔒 <strong>Plagiarism Detection:</strong> Comparing documents to find shared portions of text.</li>
  <li>🗜️ <strong>Data Compression:</strong> Tools like <code>diff</code> and <code>patch</code> use LCS to store only the delta (differences) between files, saving disk space.</li>
  <li>🤖 <strong>NLP (Natural Language Processing):</strong> Computing sentence similarity in machine translation and AI chatbots.</li>
  <li>🎮 <strong>Gesture Recognition:</strong> Matching sequences of inputs or moves in video games.</li>
</ul>

---

<h2>🧠 Dynamic Programming & Recurrence Relation</h2>
<p>
  To solve the problem efficiently without repeating calculations, we break it down into smaller subproblems 
  using a 2D matrix $c[i, j]$, which represents the length of the LCS of the prefixes $A[0 \dots i]$ and $B[0 \dots j]$.
</p>

<h3>The Recurrence Relation:</h3>

$$c[i, j] = 
\begin{cases} 
0 & \text{if } i = 0 \text{ or } j = 0 \\
c[i-1, j-1] + 1 & \text{if } A[i] = B[j] \\
\max(c[i-1, j], c[i, j-1]) & \text{if } A[i] \neq B[j] 
\end{cases}$$

<br />

<h4>Detailed Cases:</h4>
<ul>
  <li>
    <strong>Case 1: $A[i] == B[j]$ (Match)</strong><br />
    The current characters are identical! We include this character in our subsequence and look at the optimal solution for the remaining prefixes:
    <br /><code>c[i][j] = c[i-1][j-1] + 1</code>
  </li>
  <li>
    <strong>Case 2: $A[i] \neq B[j]$ (Mismatch)</strong><br />
    The characters don't match. This means either $A[i]$ or $B[j]$ is not part of the current optimal LCS. 
    We drop one at a time and choose the path that yields the maximum length:
    <br /><code>c[i][j] = max(c[i-1][j], c[i][j-1])</code>
  </li>
</ul>

---

<h2>🤝 Contributing & Support</h2>
<p>
  With this recurrence formula, the algorithm can be easily written using an iterative bottom-up approach.
</p>
<p>
  If you want to suggest optimizations, add space-complexity improvements (like reducing the matrix to two rows), 
  or just support the project, <strong>your help is highly appreciated!</strong> Feel free to open a pull request.
</p>
