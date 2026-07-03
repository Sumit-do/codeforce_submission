<h2><a href="https://codeforces.com/contest/2086/problem/D" target="_blank" rel="noopener noreferrer">2086D — Even String</a></h2>

| | |
|---|---|
| **Difficulty** | 1700 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2086D](https://codeforces.com/contest/2086/problem/D) |

## Topics
`brute force` `combinatorics` `dp` `math` `strings`

---

## Problem Statement

<div class="header"><div class="title">D. Even String</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You would like to construct a string $$$s$$$, consisting of lowercase Latin letters, such that the following condition holds:</p><ul> <li> For every pair of indices $$$i$$$ and $$$j$$$ such that $$$s_{i} = s_{j}$$$, the difference of these indices is even, that is, $$$|i - j| \bmod 2 = 0$$$. </li></ul><p>Constructing any string is too easy, so you will be given an array $$$c$$$ of $$$26$$$ numbers — the required number of occurrences of each individual letter in the string $$$s$$$. So, for every $$$i \in [1, 26]$$$, the $$$i$$$-th letter of the Latin alphabet should occur exactly $$$c_i$$$ times.</p><p>Your task is to count the number of distinct strings $$$s$$$ that satisfy all these conditions. Since the answer can be huge, output it modulo $$$998\,244\,353$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test consists of several test cases. The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^{4}$$$)— the number of test cases. The description of test cases follows.</p><p>Each test case contains $$$26$$$ integers $$$c_{i}$$$ ($$$0 \le c_{i} \le 5 \cdot 10^{5}$$$)— the elements of the array $$$c$$$.</p><p>Additional constraints on the input data:</p><ul> <li> The sum of $$$c_{i}$$$ for every test case is positive; </li><li> The sum of $$$c_{i}$$$ over all test cases does not exceed $$$5 \cdot 10^{5}$$$. </li></ul></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print one integer — the number of suitable strings $$$s$$$, taken modulo $$$998\,244\,353$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004274804112827787" id="id0018484008815176178" class="input-output-copier">Copy</div></div><pre id="id004274804112827787"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">2 1 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0</div><div class="test-example-line test-example-line-even test-example-line-2">3 1 1 0 0 0 0 0 0 0 0 0 0 0 0 1 0 1 0 0 0 0 0 0 1 0</div><div class="test-example-line test-example-line-odd test-example-line-3">0 0 0 0 0 0 0 0 0 0 0 0 1 0 3 0 0 0 0 0 0 0 0 0 0 0</div><div class="test-example-line test-example-line-even test-example-line-4">1 2 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0</div><div class="test-example-line test-example-line-odd test-example-line-5">1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 233527 233827</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0010907395303107692" id="id008509135111887862" class="input-output-copier">Copy</div></div><pre id="id0010907395303107692">4
960
0
1
789493841
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, there are $$$4$$$ suitable strings: "<span class="tex-font-style-tt">abak</span>", "<span class="tex-font-style-tt">akab</span>", "<span class="tex-font-style-tt">baka</span>" and "<span class="tex-font-style-tt">kaba</span>".</p></div>