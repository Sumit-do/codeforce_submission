<h2><a href="https://codeforces.com/contest/1338/problem/B" target="_blank" rel="noopener noreferrer">1338B — Edge Weight Assignment</a></h2>

| | |
|---|---|
| **Difficulty** | 1800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1338B](https://codeforces.com/contest/1338/problem/B) |

## Topics
`bitmasks` `constructive algorithms` `dfs and similar` `greedy` `math` `trees`

---

## Problem Statement

<div class="header"><div class="title">B. Edge Weight Assignment</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You have unweighted tree of $$$n$$$ vertices. You have to assign a <span class="tex-font-style-bf">positive</span> weight to each edge so that the following condition would hold:</p><ul> <li> For every two different leaves $$$v_{1}$$$ and $$$v_{2}$$$ of this tree, <a href="https://en.wikipedia.org/wiki/Bitwise_operation#XOR">bitwise XOR</a> of weights of all edges on the simple path between $$$v_{1}$$$ and $$$v_{2}$$$ has to be equal to $$$0$$$. </li></ul><p>Note that you can put <span class="tex-font-style-bf">very large</span> positive integers (like $$$10^{(10^{10})}$$$).</p><p>It's guaranteed that such assignment always exists under given constraints. Now let's define $$$f$$$ as <span class="tex-font-style-bf">the number of distinct weights</span> in assignment.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/5b0101e1310bed98e055bbf14738361d76eac0d7.png" style="max-width: 100.0%;max-height: 100.0%;"> In this example, assignment is valid, because bitwise XOR of all edge weights between every pair of leaves is $$$0$$$. $$$f$$$ value is $$$2$$$ here, because there are $$$2$$$ distinct edge weights($$$4$$$ and $$$5$$$).<p><img class="tex-graphics" src="https://espresso.codeforces.com/0069cd7e09cedad856e36260655c8bbd4f42062f.png" style="max-width: 100.0%;max-height: 100.0%;"> In this example, assignment is invalid, because bitwise XOR of all edge weights between vertex $$$1$$$ and vertex $$$6$$$ ($$$3, 4, 5, 4$$$) is not $$$0$$$. </p></center><p>What are the minimum and the maximum possible values of $$$f$$$ for the given tree? Find and print both.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains integer $$$n$$$ ($$$3 \le n \le 10^{5}$$$) — the number of vertices in given tree.</p><p>The $$$i$$$-th of the next $$$n-1$$$ lines contains two integers $$$a_{i}$$$ and $$$b_{i}$$$ ($$$1 \le a_{i} \lt b_{i} \le n$$$) — it means there is an edge between $$$a_{i}$$$ and $$$b_{i}$$$. It is guaranteed that given graph forms tree of $$$n$$$ vertices.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print two integers — the minimum and maximum possible value of $$$f$$$ can be made from valid assignment of given tree. Note that it's always possible to make an assignment under given constraints.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0008432912463871123" id="id008390630891388361" class="input-output-copier">Copy</div></div><pre id="id0008432912463871123">6
1 3
2 3
3 4
4 5
5 6
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007242339329541743" id="id009801268905632671" class="input-output-copier">Copy</div></div><pre id="id007242339329541743">1 4
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006916022321271202" id="id009356383753960291" class="input-output-copier">Copy</div></div><pre id="id006916022321271202">6
1 3
2 3
3 4
4 5
4 6
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002300393200307076" id="id007098894142882338" class="input-output-copier">Copy</div></div><pre id="id002300393200307076">3 3
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008171197424036912" id="id0007814125197459965" class="input-output-copier">Copy</div></div><pre id="id008171197424036912">7
1 2
2 7
3 4
4 7
5 6
6 7
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0039658993443969226" id="id009398824483287308" class="input-output-copier">Copy</div></div><pre id="id0039658993443969226">1 6
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, possible assignments for each minimum and maximum are described in picture below. Of course, there are multiple possible assignments for each minimum and maximum. </p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/8c3ca6ef35ed8818b24c63d36c4f1fe419bb545c.png" style="max-width: 100.0%;max-height: 100.0%;"> </center><p>In the second example, possible assignments for each minimum and maximum are described in picture below. The $$$f$$$ value of valid assignment of this tree is always $$$3$$$. </p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/97d4c3d0db0f70bfbf3cc4fa8ba0a2691a95320e.png" style="max-width: 100.0%;max-height: 100.0%;"> </center><p>In the third example, possible assignments for each minimum and maximum are described in picture below. Of course, there are multiple possible assignments for each minimum and maximum. </p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/2cd034f9908e3131bc593c352126e15712c58763.png" style="max-width: 100.0%;max-height: 100.0%;"> </center></div>