```mermaid
flowchart TD
	Start([Start]) --> Input[/รับคะแนน score/]
Input --> D1{score >= 80?}
D1 --> |Yes| A[เกรด = A]
D1 --> |No| D2{score >= 70?}
D2 --> |Yes| B[เกรด = B]
D2 --> |No| D3{score >= 60?}
D3 --> |Yes| C[เกรด = C]
D3 --> |No| D4{score >= 50?}
D4 --> |Yes| D[เกรด = D]
D4 --> |No| F[เกรด = F]
A & B & C & D & F --> Output[/แสดงเกรด/]
Output --> End([End])
```

```mermaid
flowchart TD
	Start([Start]) --> Input[/รับ a และ b/]
	Input --> A{a>b?}
	A --> |Yes| A1[แสดงa]
	A --> |No| B1[แสดงb]
	A1 & B1 --> Output([End])
```

```mermaid
flowchart TD
	start([Start]) --> Input[/รับ N/]
	Input --> I[i=1]
	I --> D{i <=N?}
	D -->|Yes| A[/พิมพ์ i/]
	D --> |No| B([End])
	A --> I2[i = i + 1] --> D
```

<style>#mermaid-1782977928422{font-family:sans-serif;font-size:16px;fill:#333;}@keyframes edge-animation-frame{from{stroke-dashoffset:0;}}@keyframes dash{to{stroke-dashoffset:0;}}#mermaid-1782977928422 .edge-animation-slow{stroke-dasharray:9,5!important;stroke-dashoffset:900;animation:dash 50s linear infinite;stroke-linecap:round;}#mermaid-1782977928422 .edge-animation-fast{stroke-dasharray:9,5!important;stroke-dashoffset:900;animation:dash 20s linear infinite;stroke-linecap:round;}#mermaid-1782977928422 .error-icon{fill:#552222;}#mermaid-1782977928422 .error-text{fill:#552222;stroke:#552222;}#mermaid-1782977928422 .edge-thickness-normal{stroke-width:1px;}#mermaid-1782977928422 .edge-thickness-thick{stroke-width:3.5px;}#mermaid-1782977928422 .edge-pattern-solid{stroke-dasharray:0;}#mermaid-1782977928422 .edge-thickness-invisible{stroke-width:0;fill:none;}#mermaid-1782977928422 .edge-pattern-dashed{stroke-dasharray:3;}#mermaid-1782977928422 .edge-pattern-dotted{stroke-dasharray:2;}#mermaid-1782977928422 .marker{fill:#333333;stroke:#333333;}#mermaid-1782977928422 .marker.cross{stroke:#333333;}#mermaid-1782977928422 svg{font-family:sans-serif;font-size:16px;}#mermaid-1782977928422 p{margin:0;}#mermaid-1782977928422 .node .neo-node{stroke:#9370DB;}#mermaid-1782977928422 [data-look="neo"].node rect,#mermaid-1782977928422 [data-look="neo"].cluster rect,#mermaid-1782977928422 [data-look="neo"].node polygon{stroke:#9370DB;filter:drop-shadow(1px 2px 2px rgba(185, 185, 185, 1));}#mermaid-1782977928422 [data-look="neo"].node path{stroke:#9370DB;stroke-width:1px;}#mermaid-1782977928422 [data-look="neo"].node .outer-path{filter:drop-shadow(1px 2px 2px rgba(185, 185, 185, 1));}#mermaid-1782977928422 [data-look="neo"].node .neo-line path{stroke:#9370DB;filter:none;}#mermaid-1782977928422 [data-look="neo"].node circle{stroke:#9370DB;filter:drop-shadow(1px 2px 2px rgba(185, 185, 185, 1));}#mermaid-1782977928422 [data-look="neo"].node circle .state-start{fill:#000000;}#mermaid-1782977928422 [data-look="neo"].icon-shape .icon{fill:#9370DB;filter:drop-shadow(1px 2px 2px rgba(185, 185, 185, 1));}#mermaid-1782977928422 [data-look="neo"].icon-shape .icon-neo path{stroke:#9370DB;filter:drop-shadow(1px 2px 2px rgba(185, 185, 185, 1));}#mermaid-1782977928422 :root{--mermaid-font-family:sans-serif;}#mermaid-1782977928422 :root{--mermaid-alt-font-family:sans-serif;}</style>
