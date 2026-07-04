<h2><a href="https://codeforces.com/contest/1200/problem/C" target="_blank" rel="noopener noreferrer">1200C — Round Corridor</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1200C](https://codeforces.com/contest/1200/problem/C) |

## Topics
`math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">C. Round Corridor</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Amugae is in a very large round corridor. The corridor consists of two areas. The inner area is equally divided by $$$n$$$ sectors, and the outer area is equally divided by $$$m$$$ sectors. A wall exists between each pair of sectors of same area (inner or outer), but there is no wall between the inner area and the outer area. A wall always exists at the 12 o'clock position.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/6072b0bf04570fd72bf039db029596e05fd992a6.png" style="max-width: 100.0%;max-height: 100.0%;"> </center><p>The inner area's sectors are denoted as $$$(1,1), (1,2), \dots, (1,n)$$$ in clockwise direction. The outer area's sectors are denoted as $$$(2,1), (2,2), \dots, (2,m)$$$ in the same manner. For a clear understanding, see the example image above.</p><p>Amugae wants to know if he can move from one sector to another sector. He has $$$q$$$ questions.</p><p>For each question, check if he can move between two given sectors.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains three integers $$$n$$$, $$$m$$$ and $$$q$$$ ($$$1 \le n, m \le 10^{18}$$$, $$$1 \le q \le 10^4$$$) — the number of sectors in the inner area, the number of sectors in the outer area and the number of questions.</p><p>Each of the next $$$q$$$ lines contains four integers $$$s_x$$$, $$$s_y$$$, $$$e_x$$$, $$$e_y$$$ ($$$1 \le s_x, e_x \le 2$$$; if $$$s_x = 1$$$, then $$$1 \le s_y \le n$$$, otherwise $$$1 \le s_y \le m$$$; constraints on $$$e_y$$$ are similar). Amague wants to know if it is possible to move from sector $$$(s_x, s_y)$$$ to sector $$$(e_x, e_y)$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each question, print "<span class="tex-font-style-tt">YES</span>" if Amugae can move from $$$(s_x, s_y)$$$ to $$$(e_x, e_y)$$$, and "<span class="tex-font-style-tt">NO</span>" otherwise.</p><p>You can print each letter in any case (upper or lower).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008173108961399088" id="id006704654951272407" class="input-output-copier">Copy</div></div><pre id="id008173108961399088">4 6 3
1 1 2 3
2 6 1 2
2 6 2 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005905369425806595" id="id0013606403683457535" class="input-output-copier">Copy</div></div><pre id="id005905369425806595">YES
NO
YES
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Example is shown on the picture in the statement.</p></div>