<h2><a href="https://codeforces.com/contest/2067/problem/C" target="_blank" rel="noopener noreferrer">2067C — Devyatkino</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2067C](https://codeforces.com/contest/2067/problem/C) |

## Topics
`brute force` `dfs and similar` `greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">C. Devyatkino</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a positive integer $$$n$$$. In one operation, you can add to $$$n$$$ any positive integer whose decimal representation contains only the digit $$$9$$$, possibly repeated several times.</p><p>What is the minimum number of operations needed to make the number $$$n$$$ contain at least one digit $$$7$$$ in its decimal representation?</p><p>For example, if $$$n = 80$$$, it is sufficient to perform one operation: you can add $$$99$$$ to $$$n$$$, after the operation $$$n = 179$$$, which contains the digit $$$7$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$). The description of the test cases follows. </p><p>The only line of each test case contains an integer $$$n$$$ ($$$10 \leq n \leq 10^9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the minimum number of operations required for the number $$$n$$$ to contain the digit $$$7$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008769881969802965" id="id007883918107058407" class="input-output-copier">Copy</div></div><pre id="id008769881969802965"><div class="test-example-line test-example-line-even test-example-line-0">16</div><div class="test-example-line test-example-line-odd test-example-line-1">51</div><div class="test-example-line test-example-line-even test-example-line-2">60</div><div class="test-example-line test-example-line-odd test-example-line-3">61</div><div class="test-example-line test-example-line-even test-example-line-4">777</div><div class="test-example-line test-example-line-odd test-example-line-5">12345689</div><div class="test-example-line test-example-line-even test-example-line-6">1000000000</div><div class="test-example-line test-example-line-odd test-example-line-7">2002</div><div class="test-example-line test-example-line-even test-example-line-8">3001</div><div class="test-example-line test-example-line-odd test-example-line-9">977</div><div class="test-example-line test-example-line-even test-example-line-10">989898986</div><div class="test-example-line test-example-line-odd test-example-line-11">80</div><div class="test-example-line test-example-line-even test-example-line-12">800001</div><div class="test-example-line test-example-line-odd test-example-line-13">96</div><div class="test-example-line test-example-line-even test-example-line-14">70</div><div class="test-example-line test-example-line-odd test-example-line-15">15</div><div class="test-example-line test-example-line-even test-example-line-16">90</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008000610732167415" id="id007839592504371607" class="input-output-copier">Copy</div></div><pre id="id008000610732167415">3
2
1
0
1
3
5
4
0
7
1
2
7
0
7
3
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, three operations are sufficient: $$$51 + 9 + 9 + 9 = 78$$$, which contains the digit $$$7$$$. It can be shown that it is impossible to achieve the goal in one or two operations.</p><p>In the second test case, two operations are sufficient: $$$60 + 9 + 9 = 78$$$.</p><p>In the third test case, one operation is sufficient: $$$61 + 9 = 70$$$.</p><p>In the fourth test case, $$$n$$$ already contains the digit $$$7$$$, so no operations are required.</p><p>In the fifth test case, you can add $$$99$$$ to $$$n$$$ to obtain a number containing the digit $$$7$$$.</p></div>