<h2><a href="https://codeforces.com/contest/2043/problem/C" target="_blank" rel="noopener noreferrer">2043C — Sums on Segments</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2043C](https://codeforces.com/contest/2043/problem/C) |

## Topics
`binary search` `brute force` `data structures` `dp` `greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">C. Sums on Segments</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$a$$$ of $$$n$$$ integers, where all elements except for <span class="tex-font-style-bf">at most one</span> are equal to $$$-1$$$ or $$$1$$$. The remaining element $$$x$$$ satisfies $$$-10^9 \le x \le 10^9$$$.</p><p>Find all possible sums of subarrays of $$$a$$$, including the empty subarray, whose sum is defined as $$$0$$$. In other words, find all integers $$$x$$$ such that the array $$$a$$$ has at least one subarray (possibly empty) with sum equal to $$$x$$$. A subarray is a contiguous subsegment of an array.</p><p>Output these sums in ascending order. Each sum should be printed only once, even if it is achieved by multiple subarrays.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. Then, $$$t$$$ test cases follow.</p><p>Each test case consists of two lines: </p><ul> <li> The first line contains a single integer $$$n$$$ ($$$1 \le n \le 2 \cdot 10^5$$$) — the size of the array. </li><li> The second line contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$-10^9 \le a_i \le 10^9$$$) — the elements of the array $$$a$$$. <span class="tex-font-style-bf">In the array $$$a$$$, there is at most one element that is neither $$$1$$$ nor $$$-1$$$.</span> </li></ul><p>Additional constraint on the input: the sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output two lines: </p><ul> <li> In the first line, print a single integer — the number of distinct subarray sums. </li><li> In the second line, print these sums in ascending order. </li></ul><p>Each sum should be printed only once, even if it is produced by multiple subarrays.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0012483498468265364" id="id0025646437998722305" class="input-output-copier">Copy</div></div><pre id="id0012483498468265364"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">5</div><div class="test-example-line test-example-line-odd test-example-line-1">1 -1 10 1 1</div><div class="test-example-line test-example-line-even test-example-line-2">5</div><div class="test-example-line test-example-line-even test-example-line-2">-1 -1 -1 -1 -1</div><div class="test-example-line test-example-line-odd test-example-line-3">2</div><div class="test-example-line test-example-line-odd test-example-line-3">-1 2</div><div class="test-example-line test-example-line-even test-example-line-4">2</div><div class="test-example-line test-example-line-even test-example-line-4">7 1</div><div class="test-example-line test-example-line-odd test-example-line-5">3</div><div class="test-example-line test-example-line-odd test-example-line-5">1 4 -1</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008826331204967037" id="id007421620780438809" class="input-output-copier">Copy</div></div><pre id="id008826331204967037">8
-1 0 1 2 9 10 11 12 
6
-5 -4 -3 -2 -1 0 
4
-1 0 1 2 
4
0 1 7 8 
6
-1 0 1 3 4 5 
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Let's define $$$a[i,j]$$$ as the subarray of $$$a$$$ from position $$$i$$$ to position $$$j$$$.</p><p>Consider the first test case of the example:</p><ul> <li> $$$-1$$$ is produced by $$$a[2,2]$$$; </li><li> $$$0$$$ is produced by the empty subarray; </li><li> $$$1$$$ is produced by $$$a[4,4]$$$; </li><li> $$$2$$$ is produced by $$$a[4,5]$$$; </li><li> $$$9$$$ is produced by $$$a[2,3]$$$; </li><li> $$$10$$$ is produced by $$$a[1,3]$$$; </li><li> $$$11$$$ is produced by $$$a[3,4]$$$; </li><li> $$$12$$$ is produced by $$$a[3,5]$$$. </li></ul></div>