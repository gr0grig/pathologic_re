GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	iterator
	Next
	Damaging: 
	health
	New damage target: 
	add
	erase
	Removed damage target: 
	cleanup
	restore
	fire
	phys
	HasProperty
	HasProperty
	armor
	GetProperty
	armor_
	SetProperty

Import:
	Sleep (1 args)
	Trace (1 args)
	ReportHit (5 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	self (1 args)
	CreateObjectSet (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_23 Op = 0x28 Vars = (object)
		EVENT_27 Op = 0x37 Vars = (object)
		EVENT_26 Op = 0x40 Vars = (string)
		EVENT_6 Op = 0x5c Vars = ()


0x0: PushEmpty(object, bool, object, float, object, bool, object, float)
0x1: Push(GlobalVars[0])
0x2: PushEmpty(object)
0x3: Call 0xda

0x4: Stack[-2] = Stack[-1]
0x5: Pop(1)
0x6: GlobalVars[0] = Stack[-1]; Pop(1)
0x7: Push((int) 1)
0x8: @ Sleep(Stack[-1])
0x9: Pop(1)
0xa: Push(GlobalVars[0])
0xb: @@ iterator(Stack[-5])
0xc: Pop(1)
0xd: @@ Next(Stack[-3], Stack[-2])
0xe: Pop(0)
0xf: Push(Stack[-3])
0x10: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x11: Push("Damaging: ")
0x12: Pop(1); Push(Stack[-1] + Stack[-3]);
0x13: @ Trace(Stack[-1])
0x14: Pop(1)
0x15: PushEmpty(float, object, float, int)
0x16: Stack[-3] = Stack[-6]
0x17: Stack[-2] = (float) 0.8
0x18: Stack[-1] = (int) 1
0x19: Call 0x82

0x1a: Stack[-5] = Stack[-4]
0x1b: Pop(4)
0x1c: PushEmpty(object)
0x1d: Call 0xc2

0x1e: Pop(0)
0x1f: Push((int) 4)
0x20: Push((float)0.8)
0x21: @ ReportHit(Stack[-5], Stack[-3], Stack[-2], Stack[-4], Stack[-1])
0x22: Pop(3)
0x23: GOTO 0xd

0x24: Stack[-2] = 0
0x25: Stack[-4] = 0
0x26: GOTO 0x7

0x27: Return(); Pop(8)

0x28: PushEmpty()
0x29: PushEmpty(bool, object, string)
0x2a: Stack[-2] = Stack[-4]
0x2b: Stack[-1] = "health"
0x2c: Call 0x76

0x2d: Pop(2)
0x2e: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x2f: Push("New damage target: ")
0x30: Pop(1); Push(Stack[-1] + Stack[-2]);
0x31: @ Trace(Stack[-1])
0x32: Pop(1)
0x33: Push(GlobalVars[0])
0x34: @@ add(Stack[-2])
0x35: Pop(1)
0x36: Return(); Pop(0)

0x37: PushEmpty()
0x38: Push(GlobalVars[0])
0x39: @@ erase(Stack[-2])
0x3a: Pop(1)
0x3b: Push("Removed damage target: ")
0x3c: Pop(1); Push(Stack[-1] + Stack[-2]);
0x3d: @ Trace(Stack[-1])
0x3e: Pop(1)
0x3f: Return(); Pop(0)

0x40: PushEmpty(bool, bool)
0x41: Push("cleanup")
0x42: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x43: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x44: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x45: @ IsLoaded(Stack[-1])
0x46: Pop(0)
0x47: PushEmpty(bool)
0x48: Stack[-1] = (bool) 0
0x49: Pop(0); Push((bool) Stack[-2] == 0)
0x4a: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x4b: PushEmpty(bool)
0x4c: Call 0x6c

0x4d: Pop(0)
0x4e: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x4f: Stack[-1] = (bool) 1
0x50: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x51: PushEmpty(object)
0x52: Call 0xc2

0x53: Pop(0)
0x54: @ RemoveActor(Stack[-1])
0x55: Pop(1)
0x56: GOTO 0x5b

0x57: Push("restore")
0x58: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x59: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x5a: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x5b: Return(); Pop(2)

0x5c: PushEmpty(bool)
0x5d: Stack[-1] = (bool) 0
0x5e: Push( Stack[0 + Tasks[-1].StackPointer] )
0x5f: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x60: PushEmpty(bool)
0x61: Call 0x6c

0x62: Pop(0)
0x63: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x64: Stack[-1] = (bool) 1
0x65: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x66: PushEmpty(object)
0x67: Call 0xc2

0x68: Pop(0)
0x69: @ RemoveActor(Stack[-1])
0x6a: Pop(1)
0x6b: Return(); Pop(0)

0x6c: Stack[-1] = (bool) 1
0x6d: Return(); Pop(0)

0x6e: PushEmpty()
0x6f: Push((int) 1)
0x70: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x71: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x72: Stack[-2] = "fire"
0x73: Return(); Pop(0)

0x74: Stack[-2] = "phys"
0x75: Return(); Pop(0)

0x76: PushEmpty(bool, bool)
0x77: Push("HasProperty")
0x78: Push((int) 2)
0x79: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x7a: Pop(1); Push((bool) Stack[-1] == 0)
0x7b: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7c: Stack[-5] = (bool) 0
0x7d: Return(); Pop(2)

0x7e: @@ HasProperty(Stack[-3], Stack[-1])
0x7f: Pop(0)
0x80: Stack[-5] = Stack[-1]
0x81: Return(); Pop(2)

0x82: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x83: PushEmpty(bool, object, string)
0x84: Stack[-2] = Stack[-18]
0x85: Stack[-1] = "health"
0x86: Call 0x76

0x87: Pop(2)
0x88: Pop(1); Push((bool) Stack[-1] == 0)
0x89: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x8a: Stack[-16] = (float) 0.0
0x8b: Return(); Pop(12)

0x8c: PushEmpty(bool, object, string)
0x8d: Stack[-2] = Stack[-18]
0x8e: Stack[-1] = "armor"
0x8f: Call 0x76

0x90: Pop(2)
0x91: Pop(1); Push((bool) Stack[-1] == 0)
0x92: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x93: Stack[-6] = (int) 0
0x94: GOTO 0x98

0x95: Push("armor")
0x96: @@ GetProperty(Stack[-1], Stack[-7])
0x97: Pop(1)
0x98: Push("armor_")
0x99: PushEmpty(string, int)
0x9a: Stack[-1] = Stack[-16]
0x9b: Call 0x6e

0x9c: Pop(1)
0x9d: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x9e: PushEmpty(bool, object, string)
0x9f: Stack[-2] = Stack[-18]
0xa0: Stack[-1] = Stack[-8]
0xa1: Call 0x76

0xa2: Pop(2)
0xa3: Pop(1); Push((bool) Stack[-1] == 0)
0xa4: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa5: Stack[-4] = (int) 0
0xa6: GOTO 0xa9

0xa7: @@ GetProperty(Stack[-5], Stack[-4])
0xa8: Pop(0)
0xa9: PushEmpty(float, float, float)
0xaa: Pop(0); Push(Stack[-9] + Stack[-7]);
0xab: Push((float)100.0)
0xac: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0xad: Stack[-1] = (int) 1
0xae: Call 0xc8

0xaf: Stack[-6] = Stack[-3]
0xb0: Pop(3)
0xb1: Push("health")
0xb2: @@ GetProperty(Stack[-1], Stack[-3])
0xb3: Pop(1)
0xb4: Push((int) 1)
0xb5: Pop(1); Push(Stack[-1] - Stack[-4]);
0xb6: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0xb7: Push("health")
0xb8: PushEmpty(float, float, float, float)
0xb9: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0xba: Stack[-2] = (int) 0
0xbb: Stack[-1] = (int) 1
0xbc: Call 0xcf

0xbd: Pop(3)
0xbe: @@ SetProperty(Stack[-2], Stack[-1])
0xbf: Pop(2)
0xc0: Stack[-16] = Stack[-1]
0xc1: Return(); Pop(12)

0xc2: PushEmpty(object, object)
0xc3: @ self(Stack[-1])
0xc4: Pop(0)
0xc5: Stack[-3] = Stack[-1]
0xc6: Return(); Pop(2)

0xc7: Stack[-1] = 0
0xc8: PushEmpty()
0xc9: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xcb: Stack[-3] = Stack[-2]
0xcc: GOTO 0xce

0xcd: Stack[-3] = Stack[-1]
0xce: Return(); Pop(0)

0xcf: PushEmpty()
0xd0: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xd1: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xd2: Stack[-4] = Stack[-2]
0xd3: Return(); Pop(0)

0xd4: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xd5: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd6: Stack[-4] = Stack[-1]
0xd7: Return(); Pop(0)

0xd8: Stack[-4] = Stack[-3]
0xd9: Return(); Pop(0)

0xda: PushEmpty(object, object)
0xdb: @ CreateObjectSet(Stack[-1])
0xdc: Pop(0)
0xdd: Stack[-3] = Stack[-1]
0xde: Return(); Pop(2)

0xdf: Stack[-1] = 0
