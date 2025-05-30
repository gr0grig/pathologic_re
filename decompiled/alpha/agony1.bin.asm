GlobalVarCount = 0

Strings:
	agony
	Money
	all
	agony_die
	agony.xml
	reputation
	HasProperty
	HasProperty
	GetProperty
	SetProperty

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	SetProperty (2 args)
	AddItem (4 args)
	RemoveEnvelope (0 args)
	SetRTEnvelope (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (1 args)
	SetDeathState (0 args)
	LockAnimationEnd (2 args)
	WaitForAnimEnd (0 args)
	IsDead (1 args)
	IsOverrideActive (1 args)
	WorkWithCorpse (1 args)
	GetProperty (2 args)
	ShowWindow (4 args)
	StopAnimation (0 args)
	self (1 args)

RunOp = 0x6
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x3 Vars = ()
	GTASK_1  Params = 0
		EVENT_0 Op = 0x41 Vars = (object)
		EVENT_5 Op = 0x73 Vars = ()
		EVENT_6 Op = 0x7d Vars = ()


0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: Push("agony")
0x7: Push((float)0.5)
0x8: @ SetProperty(Stack[-2], Stack[-1])
0x9: Pop(2)
0xa: PushEmpty()
0xb: Call 0x15

0xc: Pop(0)
0xd: Return(); Pop(0)

0xe: PushEmpty(bool, bool)
0xf: Push("Money")
0x10: Push((int) 0)
0x11: Push((int) 500)
0x12: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x13: Pop(3)
0x14: Return(); Pop(2)

0x15: PushEmpty(bool, bool)
0x16: @ RemoveEnvelope()
0x17: Pop(0)
0x18: Push((int) 50)
0x19: Push((int) 40)
0x1a: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x1b: Pop(2)
0x1c: Push("all")
0x1d: Push("agony")
0x1e: @ PlayAnimation(Stack[-2], Stack[-1])
0x1f: Pop(2)
0x20: @ WaitForAnimEnd(Stack[-1])
0x21: Pop(0)
0x22: PushEmpty(bool)
0x23: Call 0x86

0x24: Pop(0)
0x25: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x26: Push(Stack[-1])
0x27: IF (Stack[-1] == 0) GOTO 0x2b; Pop(1)

0x28: PushEmpty()
0x29: Call 0x3a

0x2a: Pop(0)
0x2b: @ SetDeathState()
0x2c: Pop(0)
0x2d: PushEmpty()
0x2e: Call 0xe

0x2f: Pop(0)
0x30: GOTO 0x32

0x31: GOTO 0x1c

0x32: Push("all")
0x33: Push("agony_die")
0x34: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x35: Pop(2)
0x36: @ Hold()
0x37: Pop(0)
0x38: GOTO 0x36

0x39: Return(); Pop(2)

0x3a: Push("all")
0x3b: Push("agony_die")
0x3c: @ PlayAnimation(Stack[-2], Stack[-1])
0x3d: Pop(2)
0x3e: @ WaitForAnimEnd()
0x3f: Pop(0)
0x40: Return(); Pop(0)

0x41: PushEmpty(bool, bool, float, bool, float, bool, bool, float, bool, float)
0x42: @ IsDead(Stack[-5])
0x43: Pop(0)
0x44: Push(Stack[-5])
0x45: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x46: @ IsOverrideActive(Stack[-4])
0x47: Pop(0)
0x48: Pop(0); Push((bool) Stack[-4] == 0)
0x49: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x4a: @ WorkWithCorpse(Stack[-11])
0x4b: Pop(0)
0x4c: GOTO 0x72

0x4d: Push("agony")
0x4e: @ GetProperty(Stack[-1], Stack[-4])
0x4f: Pop(1)
0x50: Push((int) 0)
0x51: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x52: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x53: Return(); Pop(10)

0x54: @ IsOverrideActive(Stack[-2])
0x55: Pop(0)
0x56: Pop(0); Push((bool) Stack[-2] == 0)
0x57: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x58: Push("agony.xml")
0x59: Push((bool) 1)
0x5a: Push((bool) 0)
0x5b: PushEmpty(object)
0x5c: Call 0xb1

0x5d: Pop(0)
0x5e: @ ShowWindow(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5f: Pop(4)
0x60: Push("agony")
0x61: @ GetProperty(Stack[-1], Stack[-2])
0x62: Pop(1)
0x63: Push((int) 0)
0x64: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x65: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x66: Push("agony")
0x67: Push((int) 0)
0x68: @ SetProperty(Stack[-2], Stack[-1])
0x69: Pop(2)
0x6a: PushEmpty(bool, object, string, float, float, float)
0x6b: Stack[-5] = Stack[-17]
0x6c: Stack[-4] = "reputation"
0x6d: Stack[-3] = (float) 0.2
0x6e: Stack[-2] = (int) 0
0x6f: Stack[-1] = (int) 1
0x70: Call 0x9b

0x71: Pop(6)
0x72: Return(); Pop(10)

0x73: PushEmpty(bool, bool)
0x74: @ IsDead(Stack[-1])
0x75: Pop(0)
0x76: Push(Stack[-1])
0x77: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x78: Push("all")
0x79: Push("agony_die")
0x7a: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x7b: Pop(2)
0x7c: Return(); Pop(2)

0x7d: PushEmpty()
0x7e: Call 0x8c

0x7f: Pop(0)
0x80: PushEmpty()
0x81: Push(-0, 0); TaskCall(0)
0x82: Call 0x0

0x83: Pop(-0, 0); TaskReturn
0x84: Pop(0)
0x85: Return(); Pop(0)

0x86: PushEmpty(float, float)
0x87: Push("agony")
0x88: @ GetProperty(Stack[-1], Stack[-2])
0x89: Pop(1)
0x8a: Stack[-3] = !Stack[-1]; Pop(0);
0x8b: Return(); Pop(2)

0x8c: @ StopAnimation()
0x8d: Pop(0)
0x8e: Return(); Pop(0)

0x8f: PushEmpty(bool, bool)
0x90: Push("HasProperty")
0x91: Push((int) 2)
0x92: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x93: Pop(1); Push((bool) Stack[-1] == 0)
0x94: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x95: Stack[-5] = (bool) 0
0x96: Return(); Pop(2)

0x97: @@ HasProperty(Stack[-3], Stack[-1])
0x98: Pop(0)
0x99: Stack[-5] = Stack[-1]
0x9a: Return(); Pop(2)

0x9b: PushEmpty(float, float)
0x9c: PushEmpty(bool, object, string)
0x9d: Stack[-2] = Stack[-10]
0x9e: Stack[-1] = Stack[-9]
0x9f: Call 0x8f

0xa0: Pop(2)
0xa1: Pop(1); Push((bool) Stack[-1] == 0)
0xa2: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa3: Stack[-8] = (bool) 0
0xa4: Return(); Pop(2)

0xa5: @@ GetProperty(Stack[-6], Stack[-1])
0xa6: Pop(0)
0xa7: PushEmpty(float, float, float, float)
0xa8: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0xa9: Stack[-2] = Stack[-8]
0xaa: Stack[-1] = Stack[-7]
0xab: Call 0xb7

0xac: Pop(3)
0xad: @@ SetProperty(Stack[-7], Stack[-1])
0xae: Pop(1)
0xaf: Stack[-8] = (bool) 1
0xb0: Return(); Pop(2)

0xb1: PushEmpty(object, object)
0xb2: @ self(Stack[-1])
0xb3: Pop(0)
0xb4: Stack[-3] = Stack[-1]
0xb5: Return(); Pop(2)

0xb6: Stack[-1] = 0
0xb7: PushEmpty()
0xb8: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xb9: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xba: Stack[-4] = Stack[-2]
0xbb: Return(); Pop(0)

0xbc: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xbd: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xbe: Stack[-4] = Stack[-1]
0xbf: Return(); Pop(0)

0xc0: Stack[-4] = Stack[-3]
0xc1: Return(); Pop(0)

