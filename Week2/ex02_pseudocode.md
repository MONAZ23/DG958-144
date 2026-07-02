```
BEGIN [หาค่าสูงสุดจาก2ตัวเลข]
	INPUT a and b
	IF a >b THEN
	 Show a
	ELSE 
	 Show b
	END IF
END
```

```
BEGIN [check grade]
	INPUT score
	IF score >= 80 THEN
	 grade = A
	ELSE IF score >= 70 THEN
	 grade = B
	ELSE IF score >= 60 THEN
	 grade = C
	ELSE IF score >= 50 THEN
	 grade = D
	ELSE 
	 grade = F
	END IF
	OUTPUT show grade
END
```

```
BEGIN [นับจาก 1-N]
	INPUT N
	PROCRESS i =1
	While i <= N? THEN
	 พิมพ์ i
	 i = i+1
	END While
END
```
