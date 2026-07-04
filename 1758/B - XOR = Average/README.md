<h2><a href="https://codeforces.com/contest/1758/problem/B" target="_blank" rel="noopener noreferrer">1758B — XOR = Average</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1758B](https://codeforces.com/contest/1758/problem/B) |

## Topics
`constructive algorithms`

---

## Problem Statement

<div class="header"><div class="title">B. XOR = Average</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an integer $$$n$$$. Find a sequence of $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ such that $$$1 \leq a_i \leq 10^9$$$ for all $$$i$$$ and $$$$$$a_1 \oplus a_2 \oplus \dots \oplus a_n = \frac{a_1 + a_2 + \dots + a_n}{n},$$$$$$ where $$$\oplus$$$ represents the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#XOR">bitwise XOR</a>.</p><p>It can be proven that there exists a sequence of integers that satisfies all the conditions above.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of input contains $$$t$$$ ($$$1 \leq t \leq 10^4$$$) — the number of test cases.</p><p>The first and only line of each test case contains one integer $$$n$$$ ($$$1 \leq n \leq 10^5$$$) — the length of the sequence you have to find.</p><p>The sum of $$$n$$$ over all test cases does not exceed $$$10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output $$$n$$$ space-separated integers $$$a_1, a_2, \dots, a_n$$$ satisfying the conditions in the statement. </p><p>If there are several possible answers, you can output any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008700789894803477" id="id007048258165486294" class="input-output-copier">Copy</div></div><pre id="id008700789894803477"><div class="test-example-line test-example-line-even test-example-line-0">3</div><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-even test-example-line-2">4</div><div class="test-example-line test-example-line-odd test-example-line-3">3</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007785772268133673" id="id005865397546876616" class="input-output-copier">Copy</div></div><pre id="id007785772268133673">69
13 2 8 1
7 7 7
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, $$$69 = \frac{69}{1} = 69$$$.</p><p>In the second test case, $$$13 \oplus 2 \oplus 8 \oplus 1 = \frac{13 + 2 + 8 + 1}{4} = 6$$$.</p></div>