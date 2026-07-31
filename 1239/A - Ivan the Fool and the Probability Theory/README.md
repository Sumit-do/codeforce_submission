<h2><a href="https://codeforces.com/contest/1239/problem/A" target="_blank" rel="noopener noreferrer">1239A — Ivan the Fool and the Probability Theory</a></h2>

| | |
|---|---|
| **Difficulty** | 1700 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1239A](https://codeforces.com/contest/1239/problem/A) |

## Topics
`combinatorics` `dp` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Ivan the Fool and the Probability Theory</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Recently Ivan the Fool decided to become smarter and study the probability theory. He thinks that he understands the subject fairly well, and so he began to behave like he already got PhD in that area.</p><p>To prove his skills, Ivan decided to demonstrate his friends a concept of random picture. A picture is a field of $$$n$$$ rows and $$$m$$$ columns, where each cell is either black or white. Ivan calls the picture random if for every cell it has <span class="tex-font-style-bf">at most</span> one adjacent cell of the same color. Two cells are considered adjacent if they share a side.</p><p>Ivan's brothers spent some time trying to explain that it's not how the randomness usually works. Trying to convince Ivan, they want to count the number of different random (according to Ivan) pictures. Two pictures are considered different if at least one cell on those two picture is colored differently. Since the number of such pictures may be quite large, print it modulo $$$10^9 + 7$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The only line contains two integers $$$n$$$ and $$$m$$$ ($$$1 \le n, m \le 100\,000$$$), the number of rows and the number of columns of the field.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print one integer, the number of random pictures modulo $$$10^9 + 7$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0021847362334736375" id="id0043298804369542254" class="input-output-copier">Copy</div></div><pre id="id0021847362334736375">2 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005056472707692127" id="id0003888722974783354" class="input-output-copier">Copy</div></div><pre id="id005056472707692127">8
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The picture below shows all possible random pictures of size $$$2$$$ by $$$3$$$. </p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/e79b8ef3c81994845537c3f16c0d1e227bd4aec0.png" style="max-width: 100.0%;max-height: 100.0%;"> </center></div>