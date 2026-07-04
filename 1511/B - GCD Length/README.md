<h2><a href="https://codeforces.com/contest/1511/problem/B" target="_blank" rel="noopener noreferrer">1511B — GCD Length</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1511B](https://codeforces.com/contest/1511/problem/B) |

## Topics
`constructive algorithms` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">B. GCD Length</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given three integers $$$a$$$, $$$b$$$ and $$$c$$$.</p><p>Find two positive integers $$$x$$$ and $$$y$$$ ($$$x  \gt  0$$$, $$$y  \gt  0$$$) such that: </p><ul> <li> the decimal representation of $$$x$$$ without leading zeroes consists of $$$a$$$ digits; </li><li> the decimal representation of $$$y$$$ without leading zeroes consists of $$$b$$$ digits; </li><li> the decimal representation of $$$gcd(x, y)$$$ without leading zeroes consists of $$$c$$$ digits. </li></ul><p>$$$gcd(x, y)$$$ denotes the <a href="https://en.wikipedia.org/wiki/Greatest_common_divisor">greatest common divisor (GCD)</a> of integers $$$x$$$ and $$$y$$$.</p><p>Output $$$x$$$ and $$$y$$$. If there are multiple answers, output any of them.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 285$$$) — the number of testcases.</p><p>Each of the next $$$t$$$ lines contains three integers $$$a$$$, $$$b$$$ and $$$c$$$ ($$$1 \le a, b \le 9$$$, $$$1 \le c \le min(a, b)$$$) — the required lengths of the numbers.</p><p>It can be shown that the answer exists for all testcases under the given constraints.</p><p>Additional constraint on the input: all testcases are different.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each testcase print two positive integers — $$$x$$$ and $$$y$$$ ($$$x  \gt  0$$$, $$$y  \gt  0$$$) such that </p><ul> <li> the decimal representation of $$$x$$$ without leading zeroes consists of $$$a$$$ digits; </li><li> the decimal representation of $$$y$$$ without leading zeroes consists of $$$b$$$ digits; </li><li> the decimal representation of $$$gcd(x, y)$$$ without leading zeroes consists of $$$c$$$ digits. </li></ul></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00038029719289476516" id="id007075548368163089" class="input-output-copier">Copy</div></div><pre id="id00038029719289476516">4
2 3 1
2 2 2
6 6 2
1 1 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008020942441779598" id="id009153444241064803" class="input-output-copier">Copy</div></div><pre id="id008020942441779598">11 492
13 26
140133 160776
1 1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the example: </p><ol> <li> $$$gcd(11, 492) = 1$$$ </li><li> $$$gcd(13, 26) = 13$$$ </li><li> $$$gcd(140133, 160776) = 21$$$ </li><li> $$$gcd(1, 1) = 1$$$ </li></ol></div>