<h2><a href="https://codeforces.com/contest/2112/problem/D" target="_blank" rel="noopener noreferrer">2112D — Reachability and Tree</a></h2>

| | |
|---|---|
| **Difficulty** | 1700 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2112D](https://codeforces.com/contest/2112/problem/D) |

## Topics
`constructive algorithms` `dfs and similar` `graphs` `trees`

---

## Problem Statement

<div class="header"><div class="title">D. Reachability and Tree</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Let $$$u$$$ and $$$v$$$ be two distinct vertices in a directed graph. Let's call the ordered pair $$$(u, v)$$$ <span class="tex-font-style-it">good</span> if there exists a path from vertex $$$u$$$ to vertex $$$v$$$ along the edges of the graph.</p><p>You are given an undirected tree with $$$n$$$ vertices and $$$n - 1$$$ edges. Determine whether it is possible to assign a direction to each edge of this tree so that the number of good pairs in it is <span class="tex-font-style-bf">exactly</span> $$$n$$$. If it is possible, print any way to direct the edges resulting in exactly $$$n$$$ good pairs.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/0d77fc354366371b9d92d7c2df72db7e28b7fa89.png" style="max-width: 100.0%;max-height: 100.0%;"> <span class="tex-font-size-small">One possible directed version of the tree for the first test case.</span> </center></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases.</p><p>The first line of each test case contains one integer $$$n$$$ ($$$2 \le n \le 2 \cdot 10^5$$$) — the number of vertices in the tree.</p><p>The next $$$n - 1$$$ lines describe the edges. The $$$i$$$-th line contains two integers $$$u_i$$$ and $$$v_i$$$ ($$$1 \le u_i, v_i \le n$$$; $$$u_i \neq v_i$$$) — the vertices connected by the $$$i$$$-th edge.</p><p>It is guaranteed that the edges in each test case form an undirected tree and that the sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print "<span class="tex-font-style-tt">NO</span>" (case-insensitive) if it is impossible to direct all edges of the tree and obtain exactly $$$n$$$ good pairs of vertices.</p><p>Otherwise, print "<span class="tex-font-style-tt">YES</span>" (case-insensitive) and then print $$$n - 1$$$ pairs of integers $$$u_i$$$ and $$$v_i$$$ separated by spaces — the edges directed from $$$u_i$$$ to $$$v_i$$$.</p><p>The edges can be printed in any order. If there are multiple answers, output any.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id000919473305121622" id="id0044080836818418256" class="input-output-copier">Copy</div></div><pre id="id000919473305121622"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">5</div><div class="test-example-line test-example-line-odd test-example-line-1">1 2</div><div class="test-example-line test-example-line-odd test-example-line-1">2 4</div><div class="test-example-line test-example-line-odd test-example-line-1">1 3</div><div class="test-example-line test-example-line-odd test-example-line-1">3 5</div><div class="test-example-line test-example-line-even test-example-line-2">5</div><div class="test-example-line test-example-line-even test-example-line-2">1 2</div><div class="test-example-line test-example-line-even test-example-line-2">1 3</div><div class="test-example-line test-example-line-even test-example-line-2">1 4</div><div class="test-example-line test-example-line-even test-example-line-2">4 5</div><div class="test-example-line test-example-line-odd test-example-line-3">2</div><div class="test-example-line test-example-line-odd test-example-line-3">2 1</div><div class="test-example-line test-example-line-even test-example-line-4">4</div><div class="test-example-line test-example-line-even test-example-line-4">3 1</div><div class="test-example-line test-example-line-even test-example-line-4">1 2</div><div class="test-example-line test-example-line-even test-example-line-4">2 4</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0037131351245180266" id="id003507360337338562" class="input-output-copier">Copy</div></div><pre id="id0037131351245180266">YES
1 2
3 1
3 5
4 2
YES
2 1
3 1
4 1
5 4
NO
YES
1 3
2 1
2 4
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The tree from the first test case and its possible directed version are shown in the legend above. In this version, there are exactly $$$5$$$ good pairs of vertices: $$$(3, 5)$$$, $$$(3, 1)$$$, $$$(3, 2)$$$, $$$(1, 2)$$$, and $$$(4, 2)$$$.</p><p>One possible directed version of the tree from the second test case is shown below: </p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/7bb39703f6c79cfba755916c6f5bee2b23ca370e.png" style="max-width: 100.0%;max-height: 100.0%;"> </center><p>In the presented answer, there are exactly $$$5$$$ good pairs of vertices: $$$(2, 1)$$$, $$$(3, 1)$$$, $$$(4, 1)$$$, $$$(5, 4)$$$, and $$$(5, 1)$$$.</p><p>In the third test case, there are only two directed pairs of vertices, but for any direction of the edge, only one pair will be good.</p></div>