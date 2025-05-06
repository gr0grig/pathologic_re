GlobalVarCount = 0

Strings:
	noaglaja
	sobor_aglaja
	pt_d6q01_boy
	pers_boy
	d6q01_boy.xml
	add
	pt_d6q01_girl
	pers_girl
	d6q01_girl.xml
	pt_d6q01_unosha
	pers_unosha
	d6q01_unosha.xml
	pt_d6q01_wasted_male
	pers_wasted_male
	d6q01_wasted_male.xml
	pt_d6q01_wasted_woman
	pers_wasted_girl
	d6q01_wasted_woman.xml
	pt_d6q01_woman
	pers_woman
	d6q01_woman.xml
	pt_d6q01_worker
	pers_worker
	d6q01_worker.xml
	GetLocator
	Locator 
	 doesn't exist
	size
	get
	clear

Import:
	CreateObjectVector (1 args)
	Hold (0 args)
	SetVariable (2 args)
	self (1 args)
	Trace (1 args)
	AddActor (6 args)
	RemoveActor (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_26 Op = 0x6 Vars = (string)
		EVENT_5 Op = 0x17 Vars = ()
		EVENT_6 Op = 0x6c Vars = ()


0x0: @ CreateObjectVector(Stack[-0])
0x1: Pop(0)
0x2: @ Hold()
0x3: Pop(0)
0x4: GOTO 0x2

0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: Push("noaglaja")
0x8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0xa: Push("sobor_aglaja")
0xb: Push((int) 0)
0xc: @ SetVariable(Stack[-2], Stack[-1])
0xd: Pop(2)
0xe: GOTO 0x16

0xf: Push("aglaja")
0x10: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11: IF (Stack[-1] == 0) GOTO 0x16; Pop(1)

0x12: Push("sobor_aglaja")
0x13: Push((int) 1)
0x14: @ SetVariable(Stack[-2], Stack[-1])
0x15: Pop(2)
0x16: Return(); Pop(0)

0x17: PushEmpty(object, object, string, string, string)
0x18: PushEmpty(object)
0x19: Call2 0x71

0x1a: Stack[-5] = Stack[-1]
0x1b: Pop(1)
0x1c: Stack[-3] = "pt_d6q01_boy"
0x1d: Stack[-2] = "pers_boy"
0x1e: Stack[-1] = "d6q01_boy.xml"
0x1f: Call2 0x77

0x20: Pop(4)
0x21: @@ add(Stack[-1])
0x22: Pop(1)
0x23: PushEmpty(object, object, string, string, string)
0x24: PushEmpty(object)
0x25: Call2 0x71

0x26: Stack[-5] = Stack[-1]
0x27: Pop(1)
0x28: Stack[-3] = "pt_d6q01_girl"
0x29: Stack[-2] = "pers_girl"
0x2a: Stack[-1] = "d6q01_girl.xml"
0x2b: Call2 0x77

0x2c: Pop(4)
0x2d: @@ add(Stack[-1])
0x2e: Pop(1)
0x2f: PushEmpty(object, object, string, string, string)
0x30: PushEmpty(object)
0x31: Call2 0x71

0x32: Stack[-5] = Stack[-1]
0x33: Pop(1)
0x34: Stack[-3] = "pt_d6q01_unosha"
0x35: Stack[-2] = "pers_unosha"
0x36: Stack[-1] = "d6q01_unosha.xml"
0x37: Call2 0x77

0x38: Pop(4)
0x39: @@ add(Stack[-1])
0x3a: Pop(1)
0x3b: PushEmpty(object, object, string, string, string)
0x3c: PushEmpty(object)
0x3d: Call2 0x71

0x3e: Stack[-5] = Stack[-1]
0x3f: Pop(1)
0x40: Stack[-3] = "pt_d6q01_wasted_male"
0x41: Stack[-2] = "pers_wasted_male"
0x42: Stack[-1] = "d6q01_wasted_male.xml"
0x43: Call2 0x77

0x44: Pop(4)
0x45: @@ add(Stack[-1])
0x46: Pop(1)
0x47: PushEmpty(object, object, string, string, string)
0x48: PushEmpty(object)
0x49: Call2 0x71

0x4a: Stack[-5] = Stack[-1]
0x4b: Pop(1)
0x4c: Stack[-3] = "pt_d6q01_wasted_woman"
0x4d: Stack[-2] = "pers_wasted_girl"
0x4e: Stack[-1] = "d6q01_wasted_woman.xml"
0x4f: Call2 0x77

0x50: Pop(4)
0x51: @@ add(Stack[-1])
0x52: Pop(1)
0x53: PushEmpty(object, object, string, string, string)
0x54: PushEmpty(object)
0x55: Call2 0x71

0x56: Stack[-5] = Stack[-1]
0x57: Pop(1)
0x58: Stack[-3] = "pt_d6q01_woman"
0x59: Stack[-2] = "pers_woman"
0x5a: Stack[-1] = "d6q01_woman.xml"
0x5b: Call2 0x77

0x5c: Pop(4)
0x5d: @@ add(Stack[-1])
0x5e: Pop(1)
0x5f: PushEmpty(object, object, string, string, string)
0x60: PushEmpty(object)
0x61: Call2 0x71

0x62: Stack[-5] = Stack[-1]
0x63: Pop(1)
0x64: Stack[-3] = "pt_d6q01_worker"
0x65: Stack[-2] = "pers_worker"
0x66: Stack[-1] = "d6q01_worker.xml"
0x67: Call2 0x77

0x68: Pop(4)
0x69: @@ add(Stack[-1])
0x6a: Pop(1)
0x6b: Return(); Pop(0)

0x6c: PushEmpty(object)
0x6d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6e: Call2 0x89

0x6f: Pop(1)
0x70: Return(); Pop(0)

0x71: PushEmpty(object, object)
0x72: @ self(Stack[-1])
0x73: Pop(0)
0x74: Stack[-3] = Stack[-1]
0x75: Return(); Pop(2)

0x76: Stack[-1] = 0
0x77: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x78: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x79: Pop(0)
0x7a: Pop(0); Push((bool) Stack[-4] == 0)
0x7b: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x7c: Push("Locator ")
0x7d: Pop(1); Push(Stack[-1] + Stack[-12]);
0x7e: Push(" doesn't exist")
0x7f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x80: @ Trace(Stack[-1])
0x81: Pop(1)
0x82: Stack[-1] = 0
0x83: GOTO 0x86

0x84: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x85: Pop(0)
0x86: Stack[-13] = Stack[-1]
0x87: Return(); Pop(8)

0x88: Stack[-1] = 0
0x89: PushEmpty(int, int, object, int, int, object)
0x8a: Push(Stack[-7])
0x8b: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x8c: @@ size(Stack[-3])
0x8d: Pop(0)
0x8e: Stack[-2] = (int) 0
0x8f: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x90: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x91: @@ get(Stack[-1], Stack[-2])
0x92: Pop(0)
0x93: Push(Stack[-1])
0x94: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x95: @ RemoveActor(Stack[-1])
0x96: Pop(0)
0x97: Stack[-1] = 0
0x98: Push((int) 1)
0x99: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x9a: GOTO 0x8f

0x9b: @@ clear()
0x9c: Pop(0)
0x9d: Return(); Pop(6)

