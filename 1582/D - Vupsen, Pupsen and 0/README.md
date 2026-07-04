<h2><a href="https://codeforces.com/contest/1582/problem/D" target="_blank" rel="noopener noreferrer">1582D — Vupsen, Pupsen and 0</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1582D](https://codeforces.com/contest/1582/problem/D) |

## Topics
`constructive algorithms` `math`

---

## Problem Statement

<div class="header"><div class="title">D. Vupsen, Pupsen and 0</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Vupsen and Pupsen were gifted an integer array. Since Vupsen doesn't like the number $$$0$$$, he threw away all numbers equal to $$$0$$$ from the array. As a result, he got an array $$$a$$$ of length $$$n$$$.</p><p>Pupsen, on the contrary, likes the number $$$0$$$ and he got upset when he saw the array without zeroes. To cheer Pupsen up, Vupsen decided to come up with another array $$$b$$$ of length $$$n$$$ such that $$$\sum_{i=1}^{n}a_i \cdot b_i=0$$$. Since Vupsen doesn't like number $$$0$$$, <span class="tex-font-style-bf">the array $$$b$$$ must not contain numbers equal to $$$0$$$</span>. Also, the numbers in that array must not be huge, so <span class="tex-font-style-bf">the sum of their absolute values cannot exceed $$$10^9$$$</span>. Please help Vupsen to find any such array $$$b$$$!</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of test cases. The next $$$2 \cdot t$$$ lines contain the description of test cases. The description of each test case consists of two lines.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$2 \le n \le 10^5$$$) — the length of the array.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$-10^4 \le a_i \le 10^4$$$, $$$a_i \neq 0$$$) — the elements of the array $$$a$$$.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print $$$n$$$ integers $$$b_1, b_2, \ldots, b_n$$$ — elements of the array $$$b$$$ ($$$|b_1|+|b_2|+\ldots +|b_n| \le 10^9$$$, $$$b_i \neq 0$$$, $$$\sum_{i=1}^{n}a_i \cdot b_i=0$$$).</p><p>It can be shown that the answer always exists.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0033424068880924385" id="id005549969592144901" class="input-output-copier">Copy</div></div><pre id="id0033424068880924385">3
2
5 5
5
5 -2 10 -9 4
7
1 2 3 4 5 6 7
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0008908986843687206" id="id005960194815252293" class="input-output-copier">Copy</div></div><pre id="id0008908986843687206">1 -1
-1 5 1 -1 -1
-10 2 2 -3 5 -1 -1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, $$$5 \cdot 1 + 5 \cdot (-1)=5-5=0$$$. You could also print $$$3$$$ $$$-3$$$, for example, since $$$5 \cdot 3 + 5 \cdot (-3)=15-15=0$$$</p><p>In the second test case, $$$5 \cdot (-1) + (-2) \cdot 5 + 10 \cdot 1 + (-9) \cdot (-1) + 4 \cdot (-1)=-5-10+10+9-4=0$$$.</p></div>