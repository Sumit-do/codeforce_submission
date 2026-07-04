<h2><a href="https://codeforces.com/contest/1761/problem/C" target="_blank" rel="noopener noreferrer">1761C — Set Construction</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1761C](https://codeforces.com/contest/1761/problem/C) |

## Topics
`constructive algorithms` `dfs and similar` `graphs` `greedy`

---

## Problem Statement

<div class="header"><div class="title">C. Set Construction</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a binary matrix $$$b$$$ (all elements of the matrix are $$$0$$$ or $$$1$$$) of $$$n$$$ rows and $$$n$$$ columns.</p><p>You need to construct a $$$n$$$ sets $$$A_1, A_2, \ldots, A_n$$$, for which the following conditions are satisfied:</p><ul> <li> Each set is nonempty and consists of distinct integers between $$$1$$$ and $$$n$$$ inclusive. </li><li> All sets are distinct. </li><li> For all pairs $$$(i,j)$$$ satisfying $$$1\leq i, j\leq n$$$, $$$b_{i,j}=1$$$ if and only if $$$A_i\subsetneq A_j$$$. In other words, $$$b_{i, j}$$$ is $$$1$$$ if $$$A_i$$$ is a proper subset of $$$A_j$$$ and $$$0$$$ otherwise. </li></ul><p>Set $$$X$$$ is a proper subset of set $$$Y$$$, if $$$X$$$ is a nonempty subset of $$$Y$$$, and $$$X \neq Y$$$.</p><p>It's guaranteed that for all test cases in this problem, such $$$n$$$ sets exist. <span class="tex-font-style-bf">Note that it doesn't mean that such $$$n$$$ sets exist for all possible inputs.</span></p><p>If there are multiple solutions, you can output any of them.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains a single integer $$$t$$$ ($$$1\le t\le 1000$$$) — the number of test cases. The description of test cases follows.</p><p>The first line contains a single integer $$$n$$$ ($$$1\le n\le 100$$$).</p><p>The following $$$n$$$ lines contain a binary matrix $$$b$$$, the $$$j$$$-th character of $$$i$$$-th line denotes $$$b_{i,j}$$$.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$1000$$$.</p><p>It's guaranteed that for all test cases in this problem, such $$$n$$$ sets exist. </p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output $$$n$$$ lines.</p><p>For the $$$i$$$-th line, first output $$$s_i$$$ $$$(1 \le s_i \le n)$$$  — the size of the set $$$A_i$$$. Then, output $$$s_i$$$ distinct integers from $$$1$$$ to $$$n$$$  — the elements of the set $$$A_i$$$.</p><p>If there are multiple solutions, you can output any of them.</p><p>It's guaranteed that for all test cases in this problem, such $$$n$$$ sets exist. </p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008780441357084012" id="id004346572043624387" class="input-output-copier">Copy</div></div><pre id="id008780441357084012">2
4
0001
1001
0001
0000
3
011
001
000
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006216779229588679" id="id00027379805840961002" class="input-output-copier">Copy</div></div><pre id="id006216779229588679">3 1 2 3
2 1 3
2 2 4
4 1 2 3 4
1 1
2 1 2
3 1 2 3
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, we have $$$A_1 = \{1, 2, 3\}, A_2 = \{1, 3\}, A_3 = \{2, 4\}, A_4 = \{1, 2, 3, 4\}$$$. Sets $$$A_1, A_2, A_3$$$ are proper subsets of $$$A_4$$$, and also set $$$A_2$$$ is a proper subset of $$$A_1$$$. No other set is a proper subset of any other set.</p><p>In the second test case, we have $$$A_1 = \{1\}, A_2 = \{1, 2\}, A_3 = \{1, 2, 3\}$$$. $$$A_1$$$ is a proper subset of $$$A_2$$$ and $$$A_3$$$, and $$$A_2$$$ is a proper subset of $$$A_3$$$.</p></div>