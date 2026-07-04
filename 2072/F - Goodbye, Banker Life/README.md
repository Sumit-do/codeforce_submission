<h2><a href="https://codeforces.com/contest/2072/problem/F" target="_blank" rel="noopener noreferrer">2072F — Goodbye, Banker Life</a></h2>

| | |
|---|---|
| **Difficulty** | 1700 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2072F](https://codeforces.com/contest/2072/problem/F) |

## Topics
`2-sat` `bitmasks` `combinatorics` `constructive algorithms` `fft` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">F. Goodbye, Banker Life</div><div class="time-limit"><div class="property-title">time limit per test</div>3 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Monsters are approaching the city, and to protect it, Akito must create a protective field around the city. As everyone knows, protective fields come in various levels. Akito has chosen the field of level $$$n$$$. To construct the field, a special phrase is required, which is the $$$n$$$-th row of the Great Magical Triangle, represented as a two-dimensional array. We will call this array $$$T$$$.</p><p>The triangle is defined as follows: </p><ul> <li> In the $$$i$$$-th row, there are $$$i$$$ integers. </li><li> The single integer in the first row is $$$k$$$. </li><li> Let the $$$j$$$-th element of the $$$i$$$-th row be denoted as $$$T_{i,j}$$$. Then $$$$$$T_{i,j} = \begin{cases} T_{i-1,j-1} \oplus T_{i-1,j}, &\textrm{if } 1  \lt  j  \lt  i \\ T_{i-1,j}, &\textrm{if } j = 1 \\ T_{i-1,j-1}, &\textrm{if } j = i \end{cases}$$$$$$ </li></ul> where $$$a \oplus b$$$ is the bitwise <a href="https://en.wikipedia.org/wiki/Bitwise_operation#XOR">exclusive "OR"</a>(<span class="tex-font-style-tt">XOR</span>) of the integers $$$a$$$ and $$$b$$$.<p>Help Akito find the integers in the $$$n$$$-th row of the infinite triangle before the monsters reach the city.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains the integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases.</p><p>In the only line of each test case, there are two integers $$$n$$$ and $$$k$$$ ($$$1 \le n \le 10^6,\ 1 \le k  \lt  2^{31}$$$) — the row index that Akito needs and the integer in the first row of the Great Magical Triangle, respectively.</p><p>It is guaranteed that the sum of $$$n$$$ across all test cases does not exceed $$$10^6$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output $$$n$$$ integers — the elements of the $$$n$$$-th row of the Great Magical Triangle.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004050194403832891" id="id008549021118216859" class="input-output-copier">Copy</div></div><pre id="id004050194403832891"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">1 5</div><div class="test-example-line test-example-line-even test-example-line-2">2 10</div><div class="test-example-line test-example-line-odd test-example-line-3">3 16</div><div class="test-example-line test-example-line-even test-example-line-4">9 1</div><div class="test-example-line test-example-line-odd test-example-line-5">1 52</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id001426510779054685" id="id009959242781325023" class="input-output-copier">Copy</div></div><pre id="id001426510779054685">5
10 10
16 0 16
1 0 0 0 0 0 0 0 1
52
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, the first row of the Great Magical Triangle is $$$[5]$$$ by definition.</p><p>In the second example, $$$T_{2,1} = T_{1,1} = 10$$$ and $$$T_{2,2} = T_{1, 1} = 10$$$.</p></div>