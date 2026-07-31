<h2><a href="https://codeforces.com/contest/1227/problem/D1" target="_blank" rel="noopener noreferrer">1227D1 — Optimal Subsequences (Easy Version)</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1227D1](https://codeforces.com/contest/1227/problem/D1) |

## Topics
`data structures` `greedy`

---

## Problem Statement

<div class="header"><div class="title">D1. Optimal Subsequences (Easy Version)</div><div class="time-limit"><div class="property-title">time limit per test</div>3 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p><span class="tex-font-style-it">This is the easier version of the problem. In this version $$$1 \le n, m \le 100$$$. You can hack this problem only if you solve and lock both problems.</span></p><p>You are given a sequence of integers $$$a=[a_1,a_2,\dots,a_n]$$$ of length $$$n$$$. Its <span class="tex-font-style-it">subsequence</span> is obtained by removing zero or more elements from the sequence $$$a$$$ (they do not necessarily go consecutively). For example, for the sequence $$$a=[11,20,11,33,11,20,11]$$$:</p><ul> <li> $$$[11,20,11,33,11,20,11]$$$, $$$[11,20,11,33,11,20]$$$, $$$[11,11,11,11]$$$, $$$[20]$$$, $$$[33,20]$$$ are subsequences (these are just some of the long list); </li><li> $$$[40]$$$, $$$[33,33]$$$, $$$[33,20,20]$$$, $$$[20,20,11,11]$$$ are not subsequences. </li></ul><p>Suppose that an additional non-negative integer $$$k$$$ ($$$1 \le k \le n$$$) is given, then the subsequence is called <span class="tex-font-style-it">optimal</span> if:</p><ul> <li> it has a length of $$$k$$$ and the sum of its elements is the maximum possible among all subsequences of length $$$k$$$; </li><li> and among all subsequences of length $$$k$$$ that satisfy the previous item, it is <span class="tex-font-style-it">lexicographically</span> minimal. </li></ul><p>Recall that the sequence $$$b=[b_1, b_2, \dots, b_k]$$$ is lexicographically smaller than the sequence $$$c=[c_1, c_2, \dots, c_k]$$$ if the first element (from the left) in which they differ less in the sequence $$$b$$$ than in $$$c$$$. Formally: there exists $$$t$$$ ($$$1 \le t \le k$$$) such that $$$b_1=c_1$$$, $$$b_2=c_2$$$, ..., $$$b_{t-1}=c_{t-1}$$$ and at the same time $$$b_t \lt c_t$$$. For example:</p><ul> <li> $$$[10, 20, 20]$$$ lexicographically less than $$$[10, 21, 1]$$$, </li><li> $$$[7, 99, 99]$$$ is lexicographically less than $$$[10, 21, 1]$$$, </li><li> $$$[10, 21, 0]$$$ is lexicographically less than $$$[10, 21, 1]$$$. </li></ul><p>You are given a sequence of $$$a=[a_1,a_2,\dots,a_n]$$$ and $$$m$$$ requests, each consisting of two numbers $$$k_j$$$ and $$$pos_j$$$ ($$$1 \le k \le n$$$, $$$1 \le pos_j \le k_j$$$). For each query, print the value that is in the index $$$pos_j$$$ of the optimal subsequence of the given sequence $$$a$$$ for $$$k=k_j$$$.</p><p>For example, if $$$n=4$$$, $$$a=[10,20,30,20]$$$, $$$k_j=2$$$, then the optimal subsequence is $$$[20,30]$$$ — it is the minimum lexicographically among all subsequences of length $$$2$$$ with the maximum total sum of items. Thus, the answer to the request $$$k_j=2$$$, $$$pos_j=1$$$ is the number $$$20$$$, and the answer to the request $$$k_j=2$$$, $$$pos_j=2$$$ is the number $$$30$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$n$$$ ($$$1 \le n \le 100$$$) — the length of the sequence $$$a$$$.</p><p>The second line contains elements of the sequence $$$a$$$: integer numbers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 10^9$$$).</p><p>The third line contains an integer $$$m$$$ ($$$1 \le m \le 100$$$) — the number of requests.</p><p>The following $$$m$$$ lines contain pairs of integers $$$k_j$$$ and $$$pos_j$$$ ($$$1 \le k \le n$$$, $$$1 \le pos_j \le k_j$$$) — the requests.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print $$$m$$$ integers $$$r_1, r_2, \dots, r_m$$$ ($$$1 \le r_j \le 10^9$$$) one per line: answers to the requests in the order they appear in the input. The value of $$$r_j$$$ should be equal to the value contained in the position $$$pos_j$$$ of the optimal subsequence for $$$k=k_j$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00001134983470369999" id="id009406000134442528" class="input-output-copier">Copy</div></div><pre id="id00001134983470369999">3
10 20 10
6
1 1
2 1
2 2
3 1
3 2
3 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008874701360897279" id="id008675546109282571" class="input-output-copier">Copy</div></div><pre id="id008874701360897279">20
10
20
10
20
10
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006308550917264537" id="id0018628993370095515" class="input-output-copier">Copy</div></div><pre id="id006308550917264537">7
1 2 1 3 1 2 1
9
2 1
2 2
3 1
3 2
3 3
1 1
7 1
7 7
7 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00613086531800288" id="id0015104928908356496" class="input-output-copier">Copy</div></div><pre id="id00613086531800288">2
3
2
3
2
3
1
1
3
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, for $$$a=[10,20,10]$$$ the optimal subsequences are: </p><ul> <li> for $$$k=1$$$: $$$[20]$$$, </li><li> for $$$k=2$$$: $$$[10,20]$$$, </li><li> for $$$k=3$$$: $$$[10,20,10]$$$. </li></ul></div>